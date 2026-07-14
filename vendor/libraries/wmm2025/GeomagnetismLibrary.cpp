//***************************************************************************
// Compiles the vendored C library as C++ inside a namespace, so that      *
// several Geomagnetism library generations can coexist in one binary.     *
// Standard headers are included first so that their include guards keep   *
// them out of the namespace.                                              *
//***************************************************************************

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include <time.h>

namespace wmm2025
{
#include "GeomagnetismLibrary.c"
}
