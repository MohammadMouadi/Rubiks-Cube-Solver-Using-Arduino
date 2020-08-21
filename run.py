#!/usr/bin/env python
import commands
commands.getstatusoutput("sudo usermod -a -G dialout $USER")
commands.getstatusoutput("sudo chmod a+rw /dev/ttyUSB1")
test = commands.getstatusoutput("./rubik/usr/bin/rubiks-cube-tracker.py --webcam 2")
print(test)

