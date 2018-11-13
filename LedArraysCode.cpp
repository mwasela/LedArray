/*
  Arrays

 Demonstrates the use of  an array to hold pin numbers
 in order to iterate over the pins in a sequence.
 Lights multiple LEDs in sequence, then in reverse.

 Unlike the For Loop tutorial, where the pins have to be
 contiguous, here the pins can be in any random order.

 The circuit:
 * LEDs from pins 2 through 7 to ground

 created 2006
 by David A. Mellis
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Array
 */

int timer = 100;           // The higher the number, the slower the timing.
int ledPins[] = { 2, 3, 4, 5};       // an array of pin numbers to which LEDs are attached
int pinCount = 6;                       // the number of pins (i.e. the length of the array)

int button1 = 22;
int button2 = 24;
int button3 = 26;
int button4 = 28;
int state = 0;


void setup() {
  // the array elements are numbered from 0 to (pinCount - 1).
  // use a for loop to initialize each pin as an output:

  serial.begin(9600);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMOde(button4, INPUT);

  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins, OUTPUT);
  }
}

void loop() {

  state = 0;

 if (digitalRead(button1) == HIGH)
   state = 1;
 if (digitalRead(button2) == HIGH)
   state = 2;
 if (digitalRead(button3) == HIGH)
   state = 3;
 if (digitalRead(button4) == HIGH)
   state = 4;
 
switch(expression) {
   case constant-expression  :
      statement(s);
      break; //optional
   case constant-expression  :
      statement(s);
      break; //optional
  
   // you can have any number of case statements.
   default : //Optional
      statement(s);
}


 switch(state){

    case 1:
      if (state == 1){
        digitalWrite(ledPins[0] , HIGH);
        delay(7000);
        digitalWrite(ledPins[0] , OFF);
        break;
      }  

    case 2:
      if (state == 2){
        digitalWrite(ledPins[1] , HIGH);
        delay(7000);
        digitalWrite(ledPins[1] , OFF);
        break;
      }

    case 3:
      if (state == 3){
        digitalWrite(ledPins[2] , HIGH);
        delay(7000);
        digitalWrite(ledPins[2] , OFF);
        break;
      }       

    case 4:
      if (state == 4){
        digitalWrite(ledPins[3] , HIGH);
        delay(7000);
        digitalWrite(ledPins[3] , OFF);
        break;
      }  

    default:  
       for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // turn the pin off:
         digitalWrite(ledPins, OFF);
    delay(5000); 
      }

}.

  
}