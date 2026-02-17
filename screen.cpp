#include "screen.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>


Screen::Screen(Adafruit_ILI9341& display)
  : tela(display), cor(ILI9341_GREEN){}

void Screen::writeScreen(int contador){
  tela.setTextColor(ILI9341_WHITE, ILI9341_BLACK);
  tela.setCursor(BORDER_X, 40);
  tela.print("Contador: ");
  tela.print(contador);
  tela.print("%   ");
}

void Screen::drawScreen(int contador){
  if(contador <= 70){
    cor = ILI9341_GREEN;
  }
  else if(contador <= 90){
    cor = ILI9341_YELLOW;
  }
  else{
    cor = ILI9341_RED;
  }
  int largura = map(contador, 0, 100, 0, BAR_WIDTH);
  tela.fillRect(BORDER_X, BAR_Y, largura, BAR_HEIGHT, cor);
  completeBar(largura);
}

void Screen::completeBar(int valor){
  int begin_fill_bar = BORDER_X + valor;
  int remaining_fill_bar = BAR_WIDTH - valor;

  tela.fillRect(begin_fill_bar, BAR_Y, remaining_fill_bar, BAR_HEIGHT, ILI9341_BLACK);
}
