#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);
// set the LCD address to 0x27 for a 16 chars and 2 line display


float FL , FR, BL, BR;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
	pinMode(triggerPin, OUTPUT);  // Clear the trigger
	digitalWrite(triggerPin, LOW);
	delayMicroseconds(2);
	// Sets the trigger pin to HIGH state for 10 microseconds
	digitalWrite(triggerPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(triggerPin, LOW);
	pinMode(echoPin, INPUT);
	// Reads the echo pin, and returns
	// the sound wave travel time in microseconds
	return pulseIn(echoPin, HIGH);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();	// initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.print("Alarma - Distancia");
	delay(3000);
	lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  FL = 0.0344/2 * readUltrasonicDistance(5, 4);
  FR = 0.0344/2 * readUltrasonicDistance(3, 2);
  BR = 0.0344/2 * readUltrasonicDistance(7, 6);
  BL = 0.0344/2 * readUltrasonicDistance(9, 8);
	//Serial.print("\t");
	lcd.setCursor(2,0);
  lcd.print("FL");
	lcd.setCursor(14,0);
	lcd.print("FR");
	lcd.setCursor(1,1);
	lcd.print(FL, 1);
	lcd.setCursor(13,1);
	lcd.print(FR, 1);
	lcd.setCursor(2,2);
	lcd.print("BL");
	lcd.setCursor(14,2);
	lcd.print("BR");
	lcd.setCursor(1,3);
	lcd.print(BL, 1);
	lcd.setCursor(13,3);
	lcd.print(BR, 1);
	delay(2000);
	lcd.clear();

}
