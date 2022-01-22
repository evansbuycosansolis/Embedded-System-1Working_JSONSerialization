//first step
#include <EEPROM.h> //The EEPROM libray 
String string_Value;
float float_Value=111.2222;


void setup() {
//second step, convert float into string
string_Value=String(float_Value,4);
string_Value=string_Value+"$";

//3rd step Setup EEPROM memory space
EEPROM.begin(512);


//4th, Write to eeprom memory... use For Loop for writing to flash memory
for(int n=0; n< string_Value.length();n++){
  EEPROM.write(n,string_Value[n]);

//string_Value.length (String.length()) returns string as int
}

//finishing of writing procedures
EEPROM.commit();

//if you will not comit, it will not get into writing
}

void loop() {
  // put your main code here, to run repeatedly:

}
