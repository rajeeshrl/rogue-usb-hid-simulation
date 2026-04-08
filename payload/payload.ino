#include "DigiKeyboard.h"

void setup() {
  // Wait for system to recognize device
  DigiKeyboard.delay(1000);

  // Open Run dialog (Windows + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Open Command Prompt
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);

  // Execute command
  DigiKeyboard.println("whoami");
}

void loop() {
  // Empty loop
}
