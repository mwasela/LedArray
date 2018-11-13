
  
int ledPins[] = { 2, 3, 4, 5};       // an array of pin numbers to which LEDs are attached
int pinCount = 4;                       // the number of pins (i.e. the length of the array)

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

 switch(state){

    case 1:
      if (state == 1){                      //If Button 1 is presssed
        digitalWrite(ledPins[0] , HIGH);    //Turn on Inidicator 1 for 7 Seconds then
        delay(7000);
        digitalWrite(ledPins[0] , OFF);     //Turn it Off
        break;
      }  

    case 2:
      if (state == 2){                      //If Button 2 is presssed
        digitalWrite(ledPins[1] , HIGH);    //Turn on Inidicator 1 for 7 Seconds then
        delay(7000);
        digitalWrite(ledPins[1] , OFF);     //Turn it off
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
    // turn the pin off:                            If no Button is Pressed Maintain All LEDs of if they are off
         digitalWrite(ledPins, OFF);
    delay(1000); 
      }

}.

  
}
