#include "PIN.h"
#include "screen.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>


Adafruit_ILI9341 tela = Adafruit_ILI9341(CHIP_SELECT, DATA_COMMAND, RESET);
Screen screen(tela);
int leitura = 0;
uint16_t cor;

void setup(){
  tela.begin();
  tela.fillScreen(ILI9341_BLACK);
  tela.setTextColor(ILI9341_BLACK, ILI9341_YELLOW);
  tela.setTextSize(2);
  tela.setCursor(60,0);
  tela.print("Progress Bar");
  tela.drawRect(0, 20, 240, 300, ILI9341_YELLOW);
  pinMode(LED_ATTENTION, OUTPUT);
}


void loop(){
  leitura = map(analogRead(A0), 0, 1023 , 0, 100);
  screen.writeScreen(leitura);
  screen.drawScreen(leitura);
  if(leitura > 90){
    digitalWrite(LED_ATTENTION, HIGH);
  }
  else{
    digitalWrite(LED_ATTENTION, LOW);
  }
}
