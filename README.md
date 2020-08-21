# Rubiks-Cube-Solver-Using-Arduino
This is a small Arduino application to solve a 3x3x3 rubiks cube

Overview: A pre-built rubiks cube solver was modified to establish serial channel to communicate with Arduino.
Since 3 servo motors were used. Mapping known cube movments (R,L,U ...) to our motors movements was needed.
The structure of the robot was built using: 3D printed pieces as well as some wooden parts.

To run this project:
1. Install rubiks cube tracker and other requirements from https://github.com/dwalton76/rubiks-cube-tracker
2. Replace the rubiks tracker folder installed in usr/local/lib/python2.7/dist-packages with the one in the repo
3. Connect the Arduino with the file moves_to_arduino.ino installed on it
4. Connect the Camera
5. Run the file run.py


Resources:
1. Rubiks Cube Tracker originially from: https://github.com/dwalton76/rubiks-cube-tracker
2. 3D printed pieces were modified slightly, originally taken from https://github.com/judith1304?tab=overview&from=2019-11-01&to=2019-11-30

ToDo:
- Fork the original cube solver repo and edit it instead of installing it then replacing files.
