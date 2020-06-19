# remotely-turn-on-pc

This project is to turn on the PC remotely through physical switch

Hardware require:
Nodemcu
9g Servo
5V power supply

Software used:
Blynk
Arduino IDE

1. Connect servo to pin D4, 3v3, GND
2. Download Blynk on your mobile phone.
3. Select push button and map it to V1 output.
4. Get the token and key in to the code's <char auth[]>
5. Load the code to nodemcu using arduino ide.
6. Mount the servo over the computer ON switch
7. Now press the button on the Blynk app should tigger the servo to turn on your PC!
