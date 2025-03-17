#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const char pinBotao1 = 8;
const char pinLedVermelho = 13;
const char pinBotao2 = 4;
const char pinLedAzul = 2; 



void setup() {
 pinMode(pinLedVermelho, OUTPUT);
 pinMode(pinBotao1, INPUT);
 pinMode(pinLedAzul, OUTPUT);
 pinMode(pinBotao2, INPUT);
 lcd.init();
 lcd.backlight ();
 lcd.setCursor (1,0);
 lcd.print ("Os leds estao");
 lcd.setCursor (3,1);
 lcd.print ("DELIGADOS");
}

void loop() {
 static bool estadoAnteriorBotao1 = 0;
 static bool estadoLedVermelho = 0;
 bool statusBotao1 = digitalRead (pinBotao1);
  
 static bool estadoAnteriorBotao2 =0;
 static bool estadoLedAzul =0;
 bool statusBotao2 = digitalRead (pinBotao2);
  
 if (statusBotao1 && !estadoAnteriorBotao1){
   
   estadoLedVermelho = !estadoLedVermelho;
   digitalWrite (pinLedVermelho,estadoLedVermelho);
   
   
 } if (statusBotao2 && !estadoAnteriorBotao2){
  estadoLedAzul = !estadoLedAzul;
  digitalWrite (pinLedAzul, estadoLedAzul);
  }
  
  estadoAnteriorBotao1 = statusBotao1;  
  
  //TRATAMENTO DISPLAY 
   if (estadoLedVermelho && !estadoLedAzul){
     lcd.home ();
     lcd.print("  led vermelho");
     lcd.setCursor (3,1);
     lcd.print("  LIGADO  ");
     
   } else if (estadoLedAzul && !estadoLedVermelho){
     lcd.setCursor (1,0);
     lcd.print("   led Azul  ");
     lcd.setCursor (3,1);
     lcd.print("  LIGADO  ");
     
 }else if (estadoLedVermelho && estadoLedAzul){
    lcd.setCursor (1,0);
    lcd.print ("Os leds estao");
    lcd.setCursor (3,1);
    lcd.print (" LIGADOS ");
     
 }else {
   lcd.setCursor (1,0);
    lcd.print ("Os leds estao");
    lcd.setCursor (3,1);
    lcd.print ("DELIGADOS"); 
  }
 
}