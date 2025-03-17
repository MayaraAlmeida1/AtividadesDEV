#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

const char pinBotao1 = 8;
const char pinLedVermelho = 13;



void setup() {
 pinMode(pinLedVermelho, OUTPUT);
 pinMode(pinBotao1, INPUT);
 lcd.init();
 lcd.backlight ();
 //lcd.home (); é igual lcd.setCursor (0,0);
 lcd.setCursor (2,0);
 lcd.print ("O led esta");
 lcd.setCursor (2,1);
 lcd.print ("DESLIGADO");
}

void loop() {
 static bool estadoAnteriorBotao1 = 0;
 static bool estadoLed1 = 0;
 bool statusBotao1 = digitalRead (pinBotao1);
  
 if (statusBotao1 && !estadoAnteriorBotao1){
   
   //botao pressionado
   estadoLed1 = !estadoLed1;
   digitalWrite (pinLedVermelho,estadoLed1);
   lcd.setCursor (2,1);
   if (estadoLed1)lcd.print ("LIGADO   ");
   else lcd.print ("DESLIGADO");//botao solto
   
 }


  
  estadoAnteriorBotao1 = statusBotao1;
}