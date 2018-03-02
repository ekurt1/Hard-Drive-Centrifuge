#include <Wire.h>

#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

#include <Servo.h>
 
Servo esc;
int throttlePin = 0;

void setup() {

    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    // Print a message to the LCD.
    lcd.print("Initializing...");
          esc.attach(10);
          int throttle = analogRead(throttlePin);
          // throttle = map(throttle, 0, 1023, 0, 179);
          int throttlepercent = (throttle*100) / 179;
          int myRPM = 7200 / (100 - throttlepercent);
      delay(2000);
      lcd.clear();
    
    lcd.print("Manual cal.");
      delay(2000);
      lcd.clear();
    lcd.print("Set to 0");
      esc.write(throttle);
      delay(10000);
      if (myRPM <= 100) {}
      else {
        lcd.clear();
        lcd.print("Waiting...");
        delay(5000);}
     
     lcd.clear();  
     lcd.print("Set to max");
      delay(5000);
      lcd.clear();
        if (myRPM == 7200){
            lcd.clear();}
        else{
          lcd.print("Waiting...");
          delay(5000);}

     lcd.clear();
     lcd.print("Return to 0");
      delay(5000);
      lcd.clear();
       if (myRPM <= 100){}
       else{
         lcd.print("Waiting...");
         delay(5000);}

  lcd.clear();
  lcd.print("Ready");
  delay(5000);        
}

void loop() {
    lcd.clear();
          int throttle = analogRead(throttlePin);
          throttle = map(throttle, 0, 1023, 0, 179);
          int throttlepercent = (throttle*100) / 179;
          int myRPM = 7200 / (100 - throttlepercent);
          esc.write(throttle);
    lcd.print("Speed: ");
      if(myRPM == -1){
        lcd.print("7200");}
      else if(myRPM <= 100){
        lcd.print("0");}
      else{
        lcd.print(myRPM);}
    lcd.print(" RPM");
    delay(50);
}
