**Tutorial: Creating a Sequential LED Lighting System with Arduino**

# Support Me
<p><a href="https://www.buymeacoffee.com/mailharunts"> <img align="left" src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" height="50" width="210" alt="" /></a></p><br><br><br><br>

**Objective:**
To create an Arduino program that controls a sequential LED lighting system using two buttons. The system includes different lighting patterns activated by pressing the buttons.

**Components:**
- Arduino board
- 14 LEDs (connected to pins 4 to 13)
- 2 push buttons (connected to pins 2 and 3)

**Code Explanation:**

1. **Header Comments:**
   ```cpp
   /*
   This code is created by Harun Yahya Aydın
   for the 12th-grade Robotics Coding Exam.
   */
   ```

   The code begins with comments indicating the author, purpose, and context of the code.

2. **Pin Definitions:**
   ```cpp
   #define buton1 2
   #define buton2 3
   ```

   Constants are defined for button pins to make the code more readable.

3. **Global Variables:**
   ```cpp
   byte i;
   bool durum1 = true, durum2 = true, durum3 = true;
   int sure = 150, sureBlink = 500;
   ```

   Global variables are declared for loop control, button states, and delay durations.

4. **Setup Function:**
   ```cpp
   void setup() {
     for (int i = 4; i < 14; i++) {
       pinMode(i, OUTPUT);
     }
     Serial.begin(9600);
     Serial.println("Hello World!");
     pinMode(buton1, INPUT);
     pinMode(buton2, INPUT);
   }
   ```

   The `setup` function initializes pin modes for LEDs and buttons and sets up serial communication.

5. **Loop Function:**
   ```cpp
   void loop() {
     // LED initialization
     digitalWrite(12, LOW);
     digitalWrite(13, LOW);

     // Button check and LED sequence
     if (digitalRead(buton1) == 1 && digitalRead(buton2) == 1 && durum3) {
       // ... (LED sequence for both buttons pressed)
     } else {
       durum1 = true;
       durum2 = true;
       durum3 = true;
     }

     if (digitalRead(buton2) == 1 && durum2) {
       // ... (LED sequence for button 2 pressed)
     }

     if (digitalRead(buton1) == 1 && durum1) {
       // ... (LED sequence for button 1 pressed)
     }
   }
   ```

   The `loop` function checks the button states and controls LED sequences based on the button pressed.

6. **Button 1 Sequence:**
   ```cpp
   if (digitalRead(buton1) == 1 && durum1) {
     // ... (LED sequence for button 1 pressed)
   }
   ```

   This section defines the LED sequence when button 1 is pressed.

7. **Button 2 Sequence:**
   ```cpp
   if (digitalRead(buton2) == 1 && durum2) {
     // ... (LED sequence for button 2 pressed)
   }
   ```

   This section defines the LED sequence when button 2 is pressed.

8. **Both Buttons Pressed Sequence:**
   ```cpp
   if (digitalRead(buton1) == 1 && digitalRead(buton2) == 1 && durum3) {
     // ... (LED sequence for both buttons pressed)
   } else {
     durum1 = true;
     durum2 = true;
     durum3 = true;
   }
   ```

   This section defines the LED sequence when both buttons are pressed simultaneously.

**Conclusion:**
This tutorial explains how to create an Arduino program for a sequential LED lighting system controlled by two buttons. The code includes sections for each button's sequence and a combined sequence when both buttons are pressed. Customize the code and experiment with different LED patterns to enhance your understanding of Arduino programming.
