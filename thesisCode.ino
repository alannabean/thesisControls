#include "Bounce.h"
#include "Keyboard.h"

  
Bounce button0 = Bounce(14, 10);
Bounce button1 = Bounce(15, 10);
Bounce button2 = Bounce(16, 10);
Bounce button3 = Bounce(17, 10);
Bounce button4 = Bounce(18, 10);
Bounce button5 = Bounce(19, 10);
Bounce button6 = Bounce(21, 10);

   
void setup() {
pinMode(14, INPUT_PULLUP);
pinMode(15, INPUT_PULLUP);                                                                                                                 
pinMode(16, INPUT_PULLUP);
pinMode(17, INPUT_PULLUP);
pinMode(18, INPUT_PULLUP);
pinMode(19, INPUT_PULLUP);
pinMode(21, INPUT_PULLUP);
}

void loop() {
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();

  if (button0.fallingEdge()){
    Keyboard.press(KEY_LEFT_ARROW);
  }
  if (button0.risingEdge()){
    Keyboard.release(KEY_LEFT_ARROW);
  }

 if (button1.fallingEdge()){
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  if (button1.risingEdge()){
    Keyboard.release(KEY_RIGHT_ARROW);
  }

   if (button2.fallingEdge()){
    Keyboard.press(KEY_UP_ARROW);
  } 
  if (button2.risingEdge()){
    Keyboard.release(KEY_UP_ARROW);
  }
                            
   if (button3.fallingEdge()){
    Keyboard.press(KEY_DOWN_ARROW);
  }
  if (button3.risingEdge()){    
    Keyboard.release(KEY_DOWN_ARROW);
  } 

    if (button4.fallingEdge()){
    Keyboard.press(KEY_SPACE);
  }
  if (button4.risingEdge()){
    Keyboard.release(KEY_SPACE);
  }

  if (button5.fallingEdge()){ 

    Keyboard.press(KEY_TAB);
  }
  if (button5.risingEdge()){
    Keyboard.release(KEY_TAB);
  } 

    if (button6.fallingEdge()){ 

    Keyboard.press(KEY_LEFT_CTRL);
  }
  if (button6.risingEdge()){
    Keyboard.release(KEY_LEFT_CTRL);
  } 
                                                                                                                                                                                                                                                                                                                                                                                                                                                              
}                        
