# Cactus Clicker

This is an Arduino project that uses an LDR sensor to detect cactuses in the popular game "Cactus Clicker" and automatically presses the spacebar using a servo motor when a cactus is detected.

## Components

- Arduino board
- LDR (Light Dependent Resistor) sensor
- Servo motor
- Breadboard
- Jumper wires

## Setup

1. Connect the LDR sensor to an analog input pin on the Arduino.
2. Connect the servo motor to a digital output pin on the Arduino.
3. Upload the provided Arduino sketch to your board.
4. Position the LDR sensor in front of your computer screen, facing the gameplay area.
5. Attach the servo motor to your keyboard's spacebar.

## Usage

1. Start the "Cactus Clicker" game.
2. The Arduino will continuously monitor the light intensity using the LDR sensor.
3. When a cactus is detected (darker area on the screen), the servo motor will press the spacebar automatically.
4. Enjoy the game without having to manually click the spacebar!

## Contributing

Contributions are welcome! If you have any ideas for improvements or additions, feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
