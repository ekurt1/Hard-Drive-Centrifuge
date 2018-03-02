#include <Wire.h>

#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

#include <Servo.h>
 
Servo esc;
int throttlePin = 0;

void setup() {
esc.attach(10);

    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    // Print a message to the LCD.
    lcd.print("Initializing...");
    delay(2000);
      lcd.clear();
    
}

void loop() {
    lcd.clear();
    int throttle = analogRead(throttlePin);
    throttle = map(throttle, 0, 1023, 0, 179);
    int throttlepercent = (throttle*100) / 179;
    int myRPM = 7200 / (100 - throttlepercent);
    esc.write(throttle);
   
    // Turn off the display:
    lcd.print("Speed: ");
    if(myRPM == -1){
    lcd.print("7200");
    }else if(myRPM <= 100){
      lcd.print("0");
    }else{
    lcd.print(myRPM);
    }
    lcd.print(" RPM");
    delay(50);
}
