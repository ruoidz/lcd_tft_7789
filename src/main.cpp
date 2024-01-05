#include <Arduino.h>
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "robocon2023.c"
#include <Adafruit_ST7789.h>


#define TFT_CS    5      // TFT CS  pin is connected to arduino pin 8
#define TFT_RST   2      // TFT RST pin is connected to arduino pin 9
#define TFT_DC    22     // TFT DC  pin is connected to arduino pin 10

//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC,TFT_RST);
Adafruit_ST7789 tft = Adafruit_ST7789( TFT_CS, TFT_DC, TFT_RST);

void setup() {
//  tft.begin(); 
  tft.init(320, 240);   
  tft.invertDisplay(true);
  tft.setTextWrap(true);
  tft.fillScreen(ST77XX_BLACK);

  tft.setCursor(26, 20);
  tft.setTextColor(ST77XX_RED);
  tft.setTextSize(3);
  tft.println("RED!");

  tft.drawRGBBitmap(260, 0, robocon2023, 50, 50);// toạ độ x y + thông số ảnh pixel
// tft.drawRGBBitmap(0, 0, color, 320, 240);
Serial.begin(9600);
Serial.print("hello");
}

void loop() {

}