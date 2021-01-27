#include <Keyboard.h>

int UP = 0;
int DN = 1;
int RT = 2;
int LT = 3;

/*
 * Using a PULLDOWN 10k resistor on row 21 with the NO lead of the joystick on 
 */

void setup() {
  Serial.begin(9600);
  pinMode(UP,INPUT);
  Keyboard.begin();
}
void loop(){
  delay(100);
  int up = digitalRead(UP);
  int dn = digitalRead(DN);
  if(up == HIGH){
    Keyboard.print('w');
  }
  if(dn == HIGH) {
    Keyboard.print('a');
  }
}
