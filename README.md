servocali
=========

Arduino sketch that helps to calibrate the continuous servo.

After modifying standard servo to work as a continuous servo (i.e. according to [this instruction](http://rakowski.pro/how-to-modify-and-calibrate-regular-servo-to-be-continuous-servo/)), passing to the servo value 0 makes it to rotate in the full speed in one direction, while 180 - in the other. Mid-value causing the servo to stop often needs to be found experimentally, as it is not always equal 90.

This sketch allows you to do that by setting intermediate values and sending the value to the serial port at the same time, so the middle value could be easily observed. After uploading and running the sketch, press the "Serial Monitor" button in Arduino IDE. The sketch will send to the servo consecutive values from 0 to 180, and the current value is displayed in the monitor. The middle value is the one when the servo stops.