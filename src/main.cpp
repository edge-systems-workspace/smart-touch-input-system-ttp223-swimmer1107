/**
 * @file Touch_Sensor_LED_Control.ino
 * @brief Touch sensor based LED control with Serial output.
 *
 * This program reads the digital output of a touch sensor.
 * If the sensor detects touch (LOW signal), the LED turns ON
 * and a message is printed on the Serial Monitor.
 * Otherwise, the LED turns OFF and a different message is printed.
 *
 * @author Pulkit Kushreshtha
 * @date 18 Feb 2026
 */
// Pin Definitions
int touchPin = 7;   ///< Touch sensor connected to digital pin 7
int ledPin = 13;    ///< LED connected to digital pin 13


/**
 * @brief Initializes serial communication and pin modes.
 *
 * This function runs once at startup.
 * - Starts Serial communication at 9600 baud rate
 * - Sets touchPin as INPUT
 * - Sets ledPin as OUTPUT
 */
