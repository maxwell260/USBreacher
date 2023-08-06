# 🔑 USBreacher
## Release 1.1
Custom remote control USB RubberDucky

# 📜 Description
USBreacher is a custom made USB RubberDucky based on Arduino. It's similar to the original one, but it can be remote controlled via Bluetooth and load several scripts.

## Materials
- Arduino Pro Micro (or any other board supporting keyboard output)
- HC-05 Bluetooth module (not needed if the board supports Bluetooth natively)
- Wires
- Case
## Instructions:
1) Follow the schematic for connections
2) Upload the code into the board
3) Setup the Bluetooth board (you can find a lot of tutorials on the Internet)
4) Install Serial Bluetooth Terminal
5) Go to settings>Send>Nweline and select None
6) Connect the device
7) Type the command you want to run

## How it works
Essentially, the device pretends to be a keyboard to write stuff and send commands to the PC. More tecnically, the board uses the serial bus to communicate with the Bluetooth chip and a Software Serial connection to send keypresses to the PC.

## What it can do
The keyboard is the main input device of a PC. Having the control of a keyboard means being able to manipulate any function of it. Doing it remotly is simply OP. It can even control the mouse or any other USB device.
