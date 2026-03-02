#include <cmath>
#include <functional>

#include "Stonefish.h"

// Helper struct to hold robot pose (position and Euler angles)
struct RobotPose
{
  sf::Vector3 position;  // x, y, z position
  sf::Scalar roll;       // Roll angle (radians)
  sf::Scalar pitch;      // Pitch angle (radians)
  sf::Scalar yaw;        // Yaw angle (radians)

  // Static method to extract pose from transform
  static RobotPose
  fromTransform(const sf::Transform& transform)
  {
    RobotPose pose;

    // Extract position
    pose.position = transform.getOrigin();

    // Extract Euler angles from rotation matrix
    sf::Matrix3 rotMatrix = transform.getBasis();
    rotMatrix.getEulerZYX(pose.yaw, pose.pitch, pose.roll);

    return pose;
  }
};

class SimulationEngine: public sf::SimulationManager
{
public:
  SimulationEngine(sf::Scalar stepsPerSecond, std::function<void(void)> onStep,
                   const std::string& scenarioPath = "");

  void
  SimulationStepCompleted(sf::Scalar timeStep) override;

  void
  BuildScenario(void);

private:
  std::function<void(void)> m_onStep;
  std::string m_scenarioPath;
};