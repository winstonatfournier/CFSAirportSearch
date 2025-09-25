# ✈️ Airport Search for Pilots: FPGA-Based Aerodrome Info System

## Overview
This project implements a real-time airport search tool on the DE1-SoC FPGA platform. It allows pilots to retrieve structured aerodrome data from the Canada Flight Supplement using ICAO codes entered via a PS/2 keyboard. The system displays runway maps and airport services on a VGA monitor and provides audio feedback for user interactions. This project was independantly developed by Jay Dadhiala and Winston Fournier as part of the University of Toronto ECE243 course.

Project Duration: 03/2025 - 04/2025

## Features
- **ICAO Code Input:** Users enter 4-letter ICAO codes via PS/2 keyboard to search for Canadian airports.
- **Graphical Display:** Runway layouts and airport data are rendered on a VGA screen using pixel-level plotting.
- **Audio Feedback:** Success and error tones are generated using waveform synthesis and output via the FPGA’s audio interface.
- **Dual-Screen Navigation:** Left and right arrow keys switch between runway map view and detailed airport information.
- **Supported Airports:** CYQM, CYTZ, CYYZ, CYUL, CYFB, CYOO, CYSJ, CYVR

## Technical Highlights
- **Hardware Platform:** DE1-SoC with ARM Cortex-A9 processor
- **Languages:** C (low-level hardware control)
- **Graphics:** Custom pixel plotting and character rendering using memory-mapped I/O
- **Audio:** Waveform generation
- **Input Handling:** PS/2 scancode parsing with dynamic character rendering
- **Data Management:** Airport-specific service data stored in structured arrays

## System Architecture
The following block diagram illustrates the internal flow of the Airport Search for Pilots system, including input handling, data processing, and output rendering.

<img src="https://github.com/user-attachments/assets/bea00f6e-e97b-4a4d-8e00-a70beff38a18" alt="System Block Diagram" width="600"/>

## Getting Started
1. Flash the compiled binary to the DE1-SoC board.
2. Connect VGA monitor, PS/2 keyboard, and audio output.
3. Power on the board and enter one of the following ICAO codes to begin.

## Demo

- Normal Operation


https://github.com/user-attachments/assets/166a79c2-d393-4335-9085-2fcc984ebfee



- Incorrect Input (Visual and Audio Indication)


https://github.com/user-attachments/assets/a61caaa4-42cf-4f96-a962-0498224d0f6f


## Academic Context

This project was developed as part of the **ECE243: Computer Organization** course at the University of Toronto. It reflects independent design and implementation work facilitated by course instruction. All logic was built from scratch using C and tested on physical and simulated hardware.
