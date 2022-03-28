#include <IRremote.h> 
// This whole project would not be possible to make without the help of
// this library. IRremote version 3.3.0 by shirriff, ArminJo
int IRpin =11;

int redpin=9;

int greenpin=8;

int bluepin=7;

// Syncronization is based on a 169 Beats Per Minute* [consult the annex of this code for explanation], meaning it should be followed 'a tempo' (strictly on its time measure).

// int one_quarter_of_BPM = 355; // in ms

// int one_half_of_BPM = (one_quarter_of_BPM * 2);

// int three_quarters_of_BPM = (one_quarter_of_BPM * 3);

// int one_eight_of_BPM = (one_quarter_of_BPM / 2);

// int nine_fourths_of_BPM = (one_quarter_of_BPM * 9);

const int soundPin = A5;

int sound; 

int scale;

void setup()
{

Serial.begin(9600);

IrReceiver.begin(IRpin, DISABLE_LED_FEEDBACK); // Credit to Sir Prachet Hure from Instructables

pinMode(redpin,OUTPUT);

pinMode(greenpin,OUTPUT);

pinMode(bluepin,OUTPUT);

}

void loop()
{
// IR PART BEGIN
if (IrReceiver.decode())

{
//long IR_raw_numbers = IrReceiver.decodedIRData.decodedRawData; Note! Line disabled. Reason: THIS RESULTED IN OVERFLOW
//int RC_but_1 = 4077715200;

Serial.println(IrReceiver.decodedIRData.decodedRawData); // Print the Serial 'results.value' 


switch(IrReceiver.decodedIRData.decodedRawData){ // Important! I originally wrote my own code with taking the result of each IR signal being sent from each button
  // and converting it to a hexadecimal value, but this caused an error inside of the switch. Therefore, I thank and credit Prachet Hure from Instructables for having
  // found a solution to this; using the decodedRawData for each case.

case 3125149440: // POWER OFF

digitalWrite(greenpin, LOW);
digitalWrite(bluepin, LOW);
digitalWrite(redpin, LOW);
break;


case 3108437760: // SCALE 1 AS DO

digitalWrite(greenpin, HIGH);
digitalWrite(bluepin, LOW);
digitalWrite(redpin, LOW);
break;

case 3091726080: // SCALE 2 AS RE

digitalWrite(greenpin, LOW);
digitalWrite(bluepin, HIGH);
digitalWrite(redpin, HIGH);
break;

case 3141861120: // SCALE 3 AS MI

digitalWrite(greenpin, HIGH);
digitalWrite(bluepin, LOW);
digitalWrite(redpin, HIGH);
break;

case 3208707840: // SCALE 4 AS FA

digitalWrite(greenpin, HIGH);
digitalWrite(bluepin, HIGH);
digitalWrite(redpin, LOW);
break;

case 3158572800: // SCALE 5 AS SOL

digitalWrite(greenpin, LOW);
digitalWrite(bluepin, LOW);
digitalWrite(redpin, HIGH);
break;

case 4161273600: // SCALE 6 AS LA

digitalWrite(greenpin, LOW);
digitalWrite(bluepin, HIGH);
digitalWrite(redpin, LOW);
break;

case 3927310080: // SCALE 7 AS SI

digitalWrite(greenpin, HIGH);
digitalWrite(bluepin, HIGH);
digitalWrite(redpin, HIGH);
break;

case 4127850240: // SCALE 8 AS DO

digitalWrite(greenpin, HIGH);
digitalWrite(bluepin, LOW);
digitalWrite(redpin, LOW);
break;

case 3910598400: // code for starting white show.

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(514);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(514);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(423);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(423);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(423);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(423);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(345);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(345);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(345);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(345);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(299);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(299);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(293);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(293);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(253);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(253);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(180);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(180);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(180);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(180);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(158);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(158);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(131);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(131);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);
digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);
digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);
digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(2476);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);
break;

case 4077715200: // code for combination 1.

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(795);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(265);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(795);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(265);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

break;

case 3877175040: // code for combination 2.

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(89);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(267);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(1059);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(795);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(265);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

break;

case 2707357440: // code for combination 3.

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(795);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(265);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(795);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(265);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

break;

case 4144561920: // code for combination 4.

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(89);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(267);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(706);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(706);

break;

case 3810328320: // code for combination 5.

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(534);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(534);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);
break;

case 2774204160: // code for combination 6.

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(712);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

break;

case 3175284480: // code for combination 7.

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(534);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(534);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);
break;

case 2907897600: // code for combination 8.
digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(178);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,HIGH);

delay(356);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(712);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(712);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(712);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(712);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,LOW);

delay(3204);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

break;

case 3041591040: // code for closing the white stage
digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);

delay(90);

digitalWrite(greenpin,HIGH);

digitalWrite(bluepin,HIGH);

digitalWrite(redpin,HIGH);

delay(90);

digitalWrite(greenpin,LOW);

digitalWrite(bluepin,LOW);

digitalWrite(redpin,LOW);
break;
}

delay(200);

IrReceiver.resume(); // Receive the next value

}
// IR PART ENDS
// SOUND PART BEGINS
sound = analogRead(soundPin);
  Serial.println(sound);
  Serial.print(" ");

if(sound <= 999 && sound >= 996 || sound >= 1003 && sound <= 1006)
{
            digitalWrite(redpin,HIGH);
          digitalWrite(greenpin,LOW);
          digitalWrite(bluepin,LOW);
}
else if(sound >= 995 && sound <= 992 || sound >= 1009 && sound <= 1010)
{
            digitalWrite(redpin,LOW);
          digitalWrite(greenpin,HIGH);
          digitalWrite(bluepin,LOW);
}
else if(sound >= 991 && sound <= 989 || sound >= 1011 && sound <= 1014)
{
            digitalWrite(redpin,LOW);
          digitalWrite(greenpin,LOW);
          digitalWrite(bluepin,HIGH);
}
delay(150); // 
// SOUND PART END
} // code end

// Lights sequencing entirely done by Maximiliano Iturria Cardozo. RAW Data of remote control was a viable solution to decode each button. Code inspired by https://www.instructables.com/IR-Remote-Controlled-RGB-Led-Using-Arduino-Pro-Min/
// Beats Per Minute: is the speed of a song or piece of music.
