servocali
=========

Arduino sketch that helps to calibrate the continuous servo.

After modifying standard servo to work as a continuous servo (i.e. according to [this instruction](www.seattlerobotics.org/guide/servohack.html)), passing to the servo value 0 makes it to rotate in the full speed in one direction, while 180 - in the other. Mid-value causing the servo to stop often needs to be found experimentally, as it is not always equal 90.

This sketch allows you to do that by setting intermediate values and sending the value to the serial port at the same time, so the middle value could be easily observed.
