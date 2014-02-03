/***********************************************************************************
 *   ___
 *  /   \
 * /_____\
 *   | |      ___   /
 *   | |-----|___|D _
 *  _|_|_           \
 *    
 *
 *    This demo will allow the Geekduino to take in data from a PIR motion sensor
 *    and activate an external device like a lamp.
 *
 *  Wiring
 *  Pin 2 - PIR Motion sensor
 *  Pin 4 - PowerSwitch Tail II or RobotGeek Relay
 
 *
 *  Control Behavior:
 *    When the PIR sensor detects motion, it will set its data pin to HIGH for
 *    several seconds. When the Geekduino reads this pin change, it will turn on
 *    activate the pin connected to the relay inside the powerswitch tail II. This
 *    will turn on the light or other device connected to the powerswitch tail II. 
 *    the geekduino will then wait for several seconds (as defined by LIGHT_ON_TIME
 *    which is set to 10000 by defualt) and then turn the pin/powerswitchtail/lamp
 *    off.
 *
 *  External Resources
 *
 ***********************************************************************************/

//define input/output pins
#define PIR_PIN 2
#define RELAY_PIN 4

//define the amount of time for the light to stay on in milliseconds
#define LIGHT_ON_TIME 10000 

int pirState = 0;         // variable for reading the current pushbutton status

//setup() runs once
void setup() 
{ 
  pinMode(RELAY_PIN, OUTPUT);    //set the pin mode for LED to OUPUT 
  pinMode(PIR_PIN, INPUT);  //set the RELAY_PIN for the powersitch tail to OUTPUT
}

//loop() runs indefinitely 
void loop()
{
  // read the state of the PIR Sensor:
  pirState = digitalRead(PIR_PIN);

  // check if the PIR is active
  // if it is, then pirState is HIGH:
  if (pirState == HIGH) 
  {     
    // turn relay pin on/HIGH:    
    digitalWrite(RELAY_PIN, HIGH);  
    delay(LIGHT_ON_TIME);
  }
 //otherwise the PIR sensor is not active, and the relay pin / light can be turned off. 
  else 
  {
    // turn LED off:
    digitalWrite(RELAY_PIN, LOW); 
  }
}
