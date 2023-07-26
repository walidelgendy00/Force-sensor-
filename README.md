# Arduino Force Sensor LCD Project

This is a simple Arduino project that uses a force sensor and an LCD screen to display the amount of force applied to the sensor. The project is designed to help beginners get started with Arduino and electronics.

## Materials

To complete this project, you will need:

- Arduino Uno board
- Breadboard
- Force sensor
- LCD screen (16x2)
- Potentiometer (10kΩ)
- Jumper wires
- USB cable (for programming the Arduino)

## Wiring

The wiring diagram for the project is as follows:

```
Force Sensor:
- Connect one end of the force sensor to 5V on the Arduino
- Connect the other end of the force sensor to GND on the Arduino
- Connect the center pin of the force sensor to A0 on the Arduino

LCD Screen:
- Connect the VSS pin to GND on the Arduino
- Connect the VCC pin to 5V on the Arduino
- Connect the VO pin to the center pin of the potentiometer
- Connect the RS pin to digital pin 12 on the Arduino
- Connect the RW pin to GND on the Arduino
- Connect the EN pin to digital pin 11 on the Arduino
- Connect the D4, D5, D6, and D7 pins to digital pins 5, 4, 3, and 2 on the Arduino

Potentiometer:
- Connect one end of the potentiometer to 5V on the Arduino
- Connect the other end of the potentiometer to GND on the Arduino
- Connect the center pin of the potentiometer to the VO pin on the LCD screen
```

## Code

The code for the project is written in the Arduino IDE. It reads the analog input from the force sensor and maps the values to the range of the LCD screen. The LCD screen is then updated with the force value.

## Usage

To use the project, simply upload the code to your Arduino Uno board and connect the circuit as described above. When you apply force to the sensor, the LCD screen will display the amount of force applied.

## Credits

This project was inspired by [this tutorial on Force Sensitive Resistors ↗](https://learn.sparkfun.com/tutorials/force-sensitive-resistor-hookup-guide) from Sparkfun.
