
#ifndef BT_USE_DOUBLE_PRECISION
#define BT_USE_DOUBLE_PRECISION 1
#endif

// Common
#include <Stonefish/StonefishCommon.h>

// Core
#include <Stonefish/core/Console.h>
#include <Stonefish/core/ConsoleSimulationApp.h>
#include <Stonefish/core/GeneralRobot.h>
#include <Stonefish/core/GraphicalSimulationApp.h>
#include <Stonefish/core/MaterialManager.h>
#include <Stonefish/core/NED.h>
#include <Stonefish/core/Robot.h>
#include <Stonefish/core/ScenarioParser.h>
#include <Stonefish/core/SimulationApp.h>
#include <Stonefish/core/SimulationManager.h>

// OpenGL
#include <Stonefish/graphics/OpenGLConsole.h>
#include <Stonefish/graphics/OpenGLDataStructs.h>
#include <Stonefish/graphics/OpenGLPipeline.h>

// Entities - Solids
#include <Stonefish/entities/solids/Box.h>
#include <Stonefish/entities/solids/Compound.h>
#include <Stonefish/entities/solids/Cylinder.h>
#include <Stonefish/entities/solids/Polyhedron.h>
#include <Stonefish/entities/solids/Sphere.h>

// Entities - Statics
#include <Stonefish/entities/statics/Obstacle.h>
#include <Stonefish/entities/statics/Plane.h>
#include <Stonefish/entities/statics/Terrain.h>

// Actuators
#include <Stonefish/actuators/Light.h>
#include <Stonefish/actuators/Propeller.h>
#include <Stonefish/actuators/Servo.h>
#include <Stonefish/actuators/Thruster.h>

// Sensors
#include <Stonefish/sensors/scalar/DVL.h>
#include <Stonefish/sensors/scalar/GPS.h>
#include <Stonefish/sensors/scalar/IMU.h>
#include <Stonefish/sensors/scalar/Pressure.h>
#include <Stonefish/sensors/vision/Camera.h>
#include <Stonefish/sensors/vision/ColorCamera.h>
#include <Stonefish/sensors/vision/DepthCamera.h>

// Utilities
#include <Stonefish/utils/PerformanceMonitor.h>
#include <Stonefish/utils/UnitSystem.h>

// Graphics and Math
#include <Stonefish/StonefishCommon.h>
#include <Stonefish/glad.h>
#include <Stonefish/tinyexpr.h>