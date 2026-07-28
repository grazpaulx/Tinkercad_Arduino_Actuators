# RGB LED using Arduino Uno

## Description

This project demonstrates how to interface a common cathode RGB LED with an Arduino Uno using Tinkercad. An RGB LED consists of red, green, and blue LEDs combined into a single package. By controlling the brightness of each color using PWM, different colors can be generated.

## Components Required

- Arduino Uno
- Common Cathode RGB LED
- 3 × 220Ω Resistors
- Jumper Wires

## Circuit Diagram

![RGB LED Circuit](circuit.png)

## Connections

| RGB LED Pin | Arduino Uno |
|-------------|-------------|
| Red         | Digital Pin 11 (PWM) |
| Green       | Digital Pin 10 (PWM) |
| Blue        | Digital Pin 9 (PWM) |
| Common Cathode | GND |

## Working

The Arduino controls the intensity of the red, green, and blue LEDs using PWM (Pulse Width Modulation). By varying the PWM values of each color, different colors are produced. The common cathode pin is connected to GND, allowing current to flow through the selected color channels.

## Output

The RGB LED changes between different colors such as:

- Red
- Green
- Blue
- Yellow
- Cyan
- Magenta
- White

## Applications

- Decorative Lighting
- Status Indicators
- Mood Lighting
- Smart Home Systems
- IoT Visual Notifications

## Files

- `rgb_led.ino` – Arduino source code
- `circuit.png` – Tinkercad circuit screenshot