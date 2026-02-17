#pragma once
#include <Adafruit_ILI9341.h>


static constexpr int BAR_WIDTH = 210;
static constexpr int BORDER_X = 10;
static constexpr int BAR_Y = 60;
static constexpr int BAR_HEIGHT = 20;

class Screen{
  private:
    Adafruit_ILI9341& tela;
    uint16_t cor;
    void completeBar(int valor);

  public:
    Screen(Adafruit_ILI9341& display);
    void writeScreen(int contador);
    void drawScreen(int contador);
};
