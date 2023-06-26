#include <Keyboard.h>

#define numButtons 10

int buttonPins[numButtons] = {2, 3, 4, 5, 6, 7, 8, 9, 16, 15};
int buttonKeys[numButtons] = {KEY_F13, KEY_F14, KEY_F15, KEY_F16, KEY_F17, KEY_F18, KEY_F19, KEY_F20, KEY_F21, KEY_F22};

void setup() {
  for(int i = 0; i < numButtons; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop() {
  for(int i = 0; i < numButtons; i++) {
    if(digitalRead(buttonPins[i]) == LOW) {
      Keyboard.press(buttonKeys[i]);
      delay(20);
      Keyboard.release(buttonKeys[i]); 
    } 
  }
}
