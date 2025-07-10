# ldr-solar-tracker
Dynamic solar panel positioning using Light Dependent Resistor (LDR) for increasing efficiency.

This project details a system designed to boost the efficiency of a solar panel by dynamically adjusting its position to directly face the sun. This is achieved using a servo-controlled frame and two Light Dependent Resistors (LDRs) that act as the system's "eyes."

## How To Use
1. Download [arduino-file.ino](https://github.com/alfarizium/ldr-solar-tracker/releases/download/release/arduino-file.ino)
2. Connect your Arduino UNO to your PC and to the Arduino IDE
3. Open the arduino-file.ino with the Arduino IDE
4. Compile it!

## How It Works
The core principle is simple: keep the solar panel pointed at the brightest light source.

Two LDRs are placed with a small separation (the bigger the seperation, the more accurate the value) between them on the solar panel assembly. The system continuously reads the resistance values from both LDRs, which correspond to the intensity of the light they are receiving.
* If one LDR receives more light than the other, it indicates the sun is more directly aligned with that sensor.
* The microcontroller then compares these two values.
* Based on which LDR has a lower resistance (higher light intensity), the servo motor is commanded to rotate the solar panel frame either left or right.
* This adjustment continues until both LDRs receive equal amounts of light, signifying the panel is perpendicular to the sun's rays, thus maximizing its exposure and energy generation.


Parts:

| Number |                           Parts                          |       Quantity      |
|:------:|:--------------------------------------------------------:|:-------------------:|
| 1      | Arduino UNO                                              | 1                   |
| 2      | Breadboard                                               | 1                   |
| 3      | Servo                                                    | 1                   |
| 4      | 1k ohm Resistor                                          | 4                   |
| 5      | Light Dependent Resistor (LDR)                           | 2                   |
| 6      | LED (for indicating where the serve runs, left or right) | 2                   |
| 7      | Jumper cables                                            | As much as you need |

<details open>
<summary>Demonstration video</summary>

https://github.com/user-attachments/assets/6033996a-cd21-49e2-b46d-a8c9090b7a93

</details>

<details open>
<summary>Tinkercad diagram</summary>
<img width="1192" height="572" alt="image" src="https://github.com/user-attachments/assets/d4fe415a-a90c-4d2e-9854-5433485f1c8e" />
</details>

<details open>
<summary>Photos</summary>
<img alt="image" src="https://github.com/user-attachments/assets/ecf51c78-b388-4cdf-9e4a-df753a64d79f" />
<img alt="image" src="https://github.com/user-attachments/assets/3546e30a-dac9-4a7e-80a3-329e075533e4" />
</details>



