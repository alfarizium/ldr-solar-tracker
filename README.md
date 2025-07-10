# solar-light-seeker
Dynamic solar panel positioning using Light Dependent Resistor (LDR) for increasing efficiency.

This project details a system designed to boost the efficiency of a solar panel by dynamically adjusting its position to directly face the sun. This is achieved using a servo-controlled frame and two Light Dependent Resistors (LDRs) that act as the system's "eyes."

## How It Works
The core principle is simple: keep the solar panel pointed at the brightest light source.

Two LDRs are placed with a small separation between them on the solar panel assembly. The system continuously reads the resistance values from both LDRs, which correspond to the intensity of the light they are receiving.
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

Tinkercad diagram:

![solar-light-seeker-tinkercad](https://github.com/alfarizium/solar-light-seeker/blob/main/solar-light-seeker-tinkercad.png)

Demonstration video:

https://github.com/user-attachments/assets/40cd0aad-698d-495a-8ab4-92e44d982ad4




