//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
// Edit: Pedro Gonçalves                                                    *
//***************************************************************************

var g_icons = new Icons();
var g_uid = null;
var g_log_uid = null;
var g_data = null;
var g_dune_logs = null;
var g_dune_logbook = null;
var g_ws = null;
var g_ws_reconnect_timer = null;
var g_ws_retry_delay = 1000;
var g_ws_retry_delay_max = 15000;

window.onload = function () {
  setConnected(false);
  g_sections.create();
  connectWebSocket();
};

window.onbeforeunload = function () {
  if (g_ws)
    g_ws.close();
}

function getQueryArgument(name) {
  var query = window.location.search;

  if (!query || query.length < 2)
    return null;

  query = query.substring(1);
  var parts = query.split('&');

  for (var i = 0; i < parts.length; ++i) {
    var kv = parts[i].split('=');
    if (decodeURIComponent(kv[0]) == name) {
      if (kv.length > 1)
        return decodeURIComponent(kv[1]);
      return '';
    }
  }

  return null;
}

function getWebSocketURL() {
  var override = getQueryArgument('ws_port');
  var host = window.location.hostname;
  var scheme = (window.location.protocol == 'https:') ? 'wss://' : 'ws://';

  if (!host || host.length == 0)
    host = 'localhost';

  // Bracket IPv6 literals when composing host:port URLs.
  if (host.indexOf(':') >= 0 && host.charAt(0) != '[')
    host = '[' + host + ']';

  var ws_port = '8082';
  if (override && override.length > 0)
    ws_port = override;

  return scheme + host + ':' + ws_port;
}

function connectWebSocket() {
  if (g_ws_reconnect_timer != null) {
    clearTimeout(g_ws_reconnect_timer);
    g_ws_reconnect_timer = null;
  }

  var ws_url = getWebSocketURL();

  try {
    g_ws = new WebSocket(ws_url);
  }
  catch (err) {
    scheduleWebSocketReconnect();
    return;
  }

  g_ws.onopen = function () {
    setConnected(true);
    g_ws_retry_delay = 1000;
  };

  g_ws.onmessage = function (event) {
    handleStreamFrame(event.data);
  };

  g_ws.onerror = function () {
    setConnected(false);
  };

  g_ws.onclose = function () {
    setConnected(false);
    scheduleWebSocketReconnect();
  };
}

function scheduleWebSocketReconnect() {
  if (g_ws_reconnect_timer != null)
    return;

  g_ws_reconnect_timer = setTimeout(function () {
    g_ws_reconnect_timer = null;
    connectWebSocket();
  }, g_ws_retry_delay);

  g_ws_retry_delay = Math.min(g_ws_retry_delay * 2, g_ws_retry_delay_max);
}

function handleStreamFrame(text) {
  var frame = null;

  console.log('received frame: ' + text);

  try {
    frame = JSON.parse(text);
  }
  catch (err) {
    return;
  }

  if (!frame || !frame.type)
    return;

  if (frame.type == 'state' && frame.data) {
    handleState(frame.data);
    return;
  }

  if (frame.type == 'logbook' && frame.logbook) {
    handleLogBookEntries(frame.logbook);
  }
}

function handleLogBookEntries(logbook) {
  g_dune_logbook = logbook;
  g_sections.update();
};

function handleState(data) {
  setConnected(true);

  // Check UID.
  if (g_uid == null) {
    g_uid = data.dune_uid;
  }

  if (g_uid != data.dune_uid) {
    g_sections.clear();
    g_sections.create();
    g_uid = data.dune_uid;
  }

  // Process entities.
  for (var i in data.dune_messages) {
    var msg = data.dune_messages[i];
    //console.log(msg);
    if (msg.abbrev != 'EntityState' && msg.abbrev != 'CpuUsage')
      continue;

    data.dune_entities[msg.src_ent].state = msg.state;
    data.dune_entities[msg.src_ent].description = msg.description;
    data.dune_entities[msg.src_ent].value = msg.value;
  }

  g_data = data;
  g_sections.update();
};

function setConnected(value) {
  var icon = document.getElementById('ConnectionIcon');
  icon.style.marginTop = '-7px';
  icon.style.marginLeft = '0px';
  icon.style.marginRight = '0px';
  if (value) {
    icon.src = g_icons.path('system-on');
    icon.title = 'Connected';
  }
  else {
    icon.src = g_icons.path('system-off');
    icon.title = 'Disconnected';
  }
}

function show(section) {
  g_sections.show(section);
};
