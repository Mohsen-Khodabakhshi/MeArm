#include <Servo.h>

// Define servo pins
#define BASE_SERVO_PIN 9
#define SHOULDER_SERVO_PIN 10
#define ELBOW_SERVO_PIN 11
#define GRIPPER_SERVO_PIN 6

// Define servo angles limits
#define BASE_MIN_ANGLE 0
#define BASE_MAX_ANGLE 180
#define SHOULDER_MIN_ANGLE 0
#define SHOULDER_MAX_ANGLE 180
#define ELBOW_MIN_ANGLE 0
#define ELBOW_MAX_ANGLE 180
#define GRIPPER_MIN_ANGLE 0
#define GRIPPER_MAX_ANGLE 180

// Create servo objects
Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;

void setup() {
  // Attach servos to pins
  baseServo.attach(BASE_SERVO_PIN);
  shoulderServo.attach(SHOULDER_SERVO_PIN);
  elbowServo.attach(ELBOW_SERVO_PIN);
  gripperServo.attach(GRIPPER_SERVO_PIN);
}

void loop() {
  // Move the arm to various positions
  moveArm(90, 90, 90, 90); // Example position, adjust as needed
  delay(1000); // Wait for 1 second
  
  // Add more positions and delays here as needed
}

void moveArm(int baseAngle, int shoulderAngle, int elbowAngle, int gripperAngle) {
  // Constrain angles within limits
  baseAngle = constrain(baseAngle, BASE_MIN_ANGLE, BASE_MAX_ANGLE);
  shoulderAngle = constrain(shoulderAngle, SHOULDER_MIN_ANGLE, SHOULDER_MAX_ANGLE);
  elbowAngle = constrain(elbowAngle, ELBOW_MIN_ANGLE, ELBOW_MAX_ANGLE);
  gripperAngle = constrain(gripperAngle, GRIPPER_MIN_ANGLE, GRIPPER_MAX_ANGLE);
  
  // Move servos to specified angles
  baseServo.write(baseAngle);
  shoulderServo.write(shoulderAngle);
  elbowServo.write(elbowAngle);
  gripperServo.write(gripperAngle);
}

