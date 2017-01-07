/*
 * 
 * 
 * 
 */
  // Includes
  
	#include <SoftwareSerial.h>
	#include <DCF77.h>       //https://github.com/thijse/Arduino-Libraries/downloads
	#include <Time.h>        //http://www.arduino.cc/playground/Code/Time
	//#include <EEPROM.h>
	//#include <eeprom1.c>		//manage EEPROM operations
  
  //Defines
	#define pinSOFTSERIAL1RX
	#define pinSOFTSERIAL1TX
	#define pinSOFTSERIAL2RX
	#define pinSOFTSERIAL2TX
	#define pinOneWire 12
	#define pinDCF 2	         // Connection pin to DCF 77 device
	#define DCF_INTERRUPT 0		 // Interrupt number associated with pin
  
 
 
 // Globale Variablen 
 

 int sound9 =
 int sound12 =
 int sound15 =
 int soundfriday12 =
 int soundeaster =
 int soundchristmas =
 int soundcarnival =
 int soundhour =
 int sound =
 
 int eepromaddr = 0;
 
 
	OneWire  ds(pinOneWire);  // on pin 10 (a 4.7K resistor is necessary)
	SoftwareSerial Bluetooth(pinSOFTSERIAL1RX, pinSOFTSERIAL1TX); // RX, TX
	SoftwareSerial Player(pinSOFTSERIAL1RX, pinSOFTSERIAL1TX); // RX, TX
 

void setup() {
Serial.begin(19200);
Bluetooth.begin(9600);
Player.begin(96800);

// put your setup code here, to run once:
// serial
//softserial1 (3,4)-> dfplayer_mini
//softserial2 (10,11)-> bluetooth 
//interrupt  (2)-> dcf77
//shift (7,8,9) -> schieberegister

}

void loop() {

if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }

  ds.select(addr);
  ds.write(0x44, 1);        // start conversion, with parasite power on at the end


}
