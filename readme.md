```
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
 ```