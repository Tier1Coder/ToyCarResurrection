# Samofajnochodzik

<img src="https://github.com/user-attachments/assets/194fac32-0589-42b1-b1a3-c5b778d73b8e" alt="used_car_photo" width="800"/>


https://github.com/user-attachments/assets/986a6f3c-07e8-4f80-9b9f-aac13f7bc6ba


## Introduction

**Samofajnochodzik** is a Bluetooth-controlled toy car project built by repurposing and modifying a discarded remote-controlled car. The goal was to create a technically precise, efficient, and fully functional car that can be controlled via a dedicated mobile application on Android devices. Instead of replacing batteries, the car can be conveniently charged from a standard wall socket. This project focuses on mechanical construction, electronics, and programming using an Arduino Uno and the C language.

## Project Goals

- **Learn Electronics**: Understand how electronic components work and how to read electrical circuit diagrams.
- **Develop Technical Skills**: Enhance technical abilities through hands-on experience.
- **Foster Creativity and Planning**: Design and implement modifications creatively.
- **Understand Remote Control Technology**: Gain insight into remote control systems.

## Project Aim

The project aims to establish a foundation for further technological developments, including the Internet of Things (IoT). With a stable connection to a smartphone and the ability to monitor parameters, the car can be extensively modified by adding features like cameras, gesture control, autopilot, and threat detection. This project serves educational purposes, teaching step-by-step problem-solving and providing practical experience in automation and remote control systems.

## Functional Requirements

- **Responsive Control**: Allows precise and responsive control via a mobile application on Android devices.
- **Movement Capabilities**: Can move forward, backward, turn left and right, and perform maneuvers according to operator commands.
- **Terrain Adaptability**: Capable of moving on various terrains.
- **Easy Charging**: Can be easily charged by connecting to a wall socket using an adapter.
- **Programmable**: Easily reprogrammable and adaptable to different applications via the accessible Arduino port.
- **Power Switch**: Equipped with a power switch on the chassis for easy on/off control.

## Non-Functional Requirements

- **Mechanical Durability**: Robust construction that doesn't overheat and can operate continuously.
- **Safety**: Designed without sharp edges or hazardous components.
- **Compatibility**: Works with any Android phone after installing the appropriate application.
- **Ease of Use**: User-friendly operation.
- **Control Range**: Has a substantial radio control range for remote operation.

## System Architecture

The system comprises several key components:

- **Microcontroller (Original MCU)**: Utilizes the original microcontroller from the base car.
- **Arduino Uno**: Acts as the main control unit, handling input from the Bluetooth module and controlling the relay board by setting HIGH and LOW values.
- **Bluetooth Module (XM-15B)**: Enables wireless communication between the car and an Android device.
- **Motors and Drives**: Original motors from the base car for movement and steering.
- **Power Module**: Powered by three 18650 Li-Ion cells (3200 mAh, 10 A, 3.7 V nominal each) providing up to 12.6 V when fully charged.
- **Battery Management System (BMS) 3S with Balancer**: Manages safe charging and discharging of the Li-Ion cells.
- **Voltage Regulators (LM2596 and LM2596S)**: Step-down converters to reduce voltage to required levels.
- **3S Battery Holder**: Houses the three 18650 cells securely.
- **4-Channel 5 V Relay Module**: Controls the car's movement by switching appropriate pins on the original control board.
- **Wiring**: Prototype jumper wires and durable multi-core wires for reliable connections.

## Components and Tools Used

- **Base Car**: RASTAR BMW M3 Motorsport (1:14 scale) remote-controlled car (originally radio-controlled, 2.4 GHz).
- **DC-DC Converter Module**: LM2596 for voltage regulation.
- **Battery Holder**: PCB holder for 18650 Li-Ion cells configured in 3S.
- **Power Supply**: Modified Samsung A5814_DSM 14 V 4.143 A AC-DC adapter for charging.
- **Prototype Wires**: Male-male, female-female, and male-female jumper wires.
- **BMS Module**: 12.6 V charger module with balancing and protection.
- **Voltage Regulator Module**: LM2596S CC CV for adjustable voltage regulation.
- **Li-Ion Batteries**: 3× LG INR18650 MH1 3200 mAh 10 A cells.
- **Durable Wiring**: Multi-core wires from a car trailer for high-current applications.
- **Soldering Equipment**: Precision soldering iron, flux, solder, desoldering braid, and related tools.
- **Relay Module**: 4-channel 5 V relay module activated by low-level signals.
- **Multimeter**: UNI-T UT33A+ for measuring current, voltage, and capacity.
- **Connectors**: 3-pin male and female connectors.
- **Bluetooth Module**: XM-15B for wireless communication.

## Software Tools

- **Arduino IDE**: For programming and uploading code to the Arduino Uno.
- **Tinkercad**: For circuit simulation and testing.
- **Arduino Car App**: An Android application used for controlling the car.

## How It Works

### 1. Power Supply and Regulation

- **Battery Setup**: Uses three 18650 Li-Ion batteries connected in series, providing up to 12.6 V when fully charged.
<img src="https://github.com/user-attachments/assets/90a74abf-fafa-4c10-9fe6-096a0c130cd2" alt="18650_3s_pcb" width="400"/>

- **Battery Management System**: A BMS 3S module with a balancer ensures safe charging and discharging.
<img src="https://github.com/user-attachments/assets/a2d26ef7-f683-4d6b-8258-293d9973d625" alt="bms_scheme" width="400"/>

- **Voltage Regulation**: The 12.6 V is stepped down to 7.5 V using an LM2596 converter to power the control board and Arduino.
<img src="https://github.com/user-attachments/assets/d2a8364e-e759-4494-b0fd-8b2ab011245b" alt="lm2596-module-copy-640x307" width="400"/>

- **Arduino Power**: The Arduino Uno is powered directly from the 7.5 V output.

### 2. Control System

- **Original Control Board Modification**: Slightly modified to interface with the Arduino via the relay module (RX-2B).
<img src="https://github.com/user-attachments/assets/0d6d5f83-961c-4c59-b66d-794e396bf91d" alt="original_car_rx-2b_scheme" width="400"/>
  
- **Relay Module**: A 4-channel relay module simulates button presses by shorting appropriate pins, controlling movement.
<img src="https://github.com/Tier1Coder/ToyCarResurrection/blob/main/photos/4c_relay.jpg" alt="4c_relay" width="400"/>
  
- **Arduino Uno**: Receives commands from the Bluetooth module and controls the relay module accordingly.

### 3. Communication

<img src="https://github.com/user-attachments/assets/f4c7bd6c-dd34-43f9-b4d5-155133e3f243" alt="debug_ble_connection_photo" width="400"/>

- **Bluetooth Module (XM-15B)**: Connected to the Arduino's RX and TX pins for wireless communication.
<img src="https://github.com/user-attachments/assets/2f48b2ee-1514-4d2d-b4c8-12f204b87fa8" alt="xm-15b_connected_to_arduino_cross_scheme" width="400"/>

- **Mobile Application**: The "Arduino Car" app on an Android phone sends control commands via Bluetooth.

### 4. Operation

- **Turning On**: A power switch under the car allows for easy on/off control.
- **Pairing**: The Bluetooth module enters pairing mode upon power-up, indicated by a blinking blue LED.
- **Control**: Users control the car's movements using on-screen buttons in the app.
- **Charging**: The car is charged using a modified AC-DC adapter connected to the charging port.

### 5. Code Explanation

The Arduino code handles incoming serial data from the Bluetooth module and activates the appropriate relays.

**Key Points**:

- **Pin Definitions**: Pins 3, 6, 10, and 11 are defined for left, forward, right, and backward control.
- **Setup Function**: Initializes serial communication at 9600 baud, sets control pins as outputs, and sets them to HIGH (relays are activated on LOW).
- **Loop Function**: Reads incoming serial data and uses a `switch` statement to execute the corresponding function.
- **Control Functions**: Functions like `carGoesForward()` set appropriate pins LOW to activate relays.

**Command Mapping**:

- `'F'` - Forward
- `'G'` - Backward
- `'L'` - Left
- `'R'` - Right
- `'S'` - Stop (no buttons pressed)
- `'Q'` - Forward Left
- `'E'` - Forward Right
- `'Z'` - Backward Left
- `'C'` - Backward Right

**Important Notes**:

- **Relay Activation**: Relays are activated by setting control pins to LOW.
- **Simple Parsing**: The app sends single-character commands for easy parsing.
- **Combination Commands**: Special combinations handle simultaneous button presses.

## Testing

<img src="https://github.com/user-attachments/assets/eed19b9c-d7b4-48b2-be0f-6dbdd1329956" alt="testing_ble_connection" width="400"/>

Extensive testing was conducted:

- **Electrical Testing**: Voltage measurements and continuity tests for every connection.
- **Bluetooth Module Testing**: Verified reliable communication with the XM-15B module.
- **UART Communication Testing**: Tested serial communication between the Bluetooth module and Arduino.
- **Relay Module Testing**: Tested manually and programmatically via the Arduino.
- **Battery and Charging Testing**: Ensured safe charging and discharging monitored by the BMS.
- **Application Testing**: Tested various control apps and selected one with correct signal transmission.
- **Component Testing**: Tested voltage regulators, power supplies, and wires for reliability and safety.
- **Code Testing**: Multiple iterations of code testing and debugging.

## Results and Discussion

The project was successfully completed with all goals achieved.

- **Functionality**: The car responds correctly to control commands from the Android app.
- **Learning Outcomes**: Gained valuable skills in electronics, programming, and problem-solving.

### Challenges Overcome

- **Bluetooth Communication**: Resolved communication issues by using the XM-15B module.
- **Power Supply Modification**: Adjusted the power supply and charging setup to match BMS and battery requirements.
- **Safety Concerns**: Ensured safe operation despite initial setbacks like component overheating.

### Known Issues

- **Relay LEDs**: LEDs on the relay module glow faintly in the HIGH state; this does not affect functionality.
- **Aesthetic Considerations**: Missing a battery compartment cover due to lack of a 3D printer; cells are secure, but the underside appearance could be improved.

## Future Improvements

- **Custom Mobile Application**: Develop a dedicated Android app with a user-friendly interface and additional features.
- **Aesthetic Enhancements**: Improve the car's appearance, possibly adding LED lights or custom bodywork.
- **Additional Features**: Incorporate functionalities like camera streaming, gesture control, or autonomous driving modes.
- **Battery Compartment Cover**: Create a custom cover, potentially through 3D printing.

## Conclusion

The **Samofajnochodzik** project resulted in a fully functional Bluetooth-controlled car. Despite numerous challenges and working independently, the project was completed successfully. The experience provided invaluable learning opportunities in electronics, programming, and project management. This project serves as a strong foundation for future explorations in remote control systems and IoT technologies.

## Acknowledgments

Special thanks to the open-source community and resources that provided guidance and inspiration throughout this project, especially Dominik and Michał.
