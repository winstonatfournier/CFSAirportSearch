**Airport Search for Pilots: FPGA-Based Aerodrome Info System**

Overview
This project implements a real-time airport search tool on the DE1-SoC FPGA platform. It allows pilots to retrieve structured aerodrome data from the Canada Flight Supplement using ICAO codes entered via a PS/2 keyboard. The system displays runway maps and airport services on a VGA monitor and provides audio feedback for user interactions.


https://github.com/user-attachments/assets/62ce80cb-5174-495c-af59-8ae774cf8f86



https://github.com/user-attachments/assets/42bec400-e211-4234-a95f-b9bca32c69f5




Features
- ICAO Code Input:
Users enter 4-letter ICAO codes via PS/2 keyboard to search for Canadian airports.
- Graphical Display:
Runway layouts and airport data are rendered on a VGA screen using pixel-level plotting.
- Audio Feedback:
Success and error tones are generated using waveform synthesis and output via the FPGA’s audio interface.
- Dual-Screen Navigation:
SHIFT key toggles between runway map view and detailed service listings.
- Supported Airports:
CYQM, CYTZ, CYYZ, CYUL, CYFB, CYOO, CYSJ, CYVR


Technical Highlights
- Hardware Platform: DE1-SoC with ARM Cortex-A9 processor
- Languages: C (low-level hardware control)
- Graphics: Custom pixel plotting and character rendering using memory-mapped I/O
- Audio: Waveform generation
- Input Handling: PS/2 scancode parsing with dynamic character rendering
- Data Management: Airport-specific service data stored in structured arrays

<img width="1133" height="812" alt="Screenshot 2025-09-21 160559" src="https://github.com/user-attachments/assets/bea00f6e-e97b-4a4d-8e00-a70beff38a18" />

Getting Started
- Flash the compiled binary to the DE1-SoC board.
- Connect VGA monitor, PS/2 keyboard, and audio output.
- Power on the board and enter one of the following ICAO codes to begin:

Demo
To be added: screenshots or video of the system in action.

License
MIT License
