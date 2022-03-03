#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_MOSI   23
#define OLED_CLK    18
#define OLED_DC     16
#define OLED_CS     5
#define OLED_RESET  17

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'pika.bmp'
 */

const unsigned char dibu[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B10000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B10000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11100000,B00000000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11100000,B00000000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01000000,B00001000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01000000,B00001000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,B00001000,B00000111,B10000000,B00000011,B11000000,B01100000,B00000111,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,B00001000,B00000111,B10000000,B00000011,B11000000,B01100000,B00000111,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11110000,B11110000,B00111000,B00000011,B00000000,B00111100,B00011110,B00011111,B11000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11110000,B11110000,B00111000,B00000011,B00000000,B00111100,B00011110,B00011111,B11000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B00110000,B00000000,B00000000,B00000000,B00000000,B00011101,B11111111,B11110000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B00110000,B00000000,B00000000,B00000000,B00000000,B00011101,B11111111,B11110000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B00000000,B00000111,B11100000,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B00000000,B00000111,B11100000,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B11100000,B00011111,B11111000,B00001111,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B10000000,B11000111,B11111000,B00011111,B11111000,B00111111,B10000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B10000000,B11000111,B11111000,B00011111,B11111000,B00111111,B10000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B10000000,B11000111,B11111000,B00011111,B11111000,B00111111,B10000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B01111100,B11000111,B11111000,B00011000,B00011000,B00111111,B10000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B01111100,B11000111,B11111000,B00011000,B00011000,B00111111,B10000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B00000011,B11000000,B11100000,B00011000,B00011111,B00001111,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B11000000,B00000000,B00000111,B11111000,B11000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B11000000,B00000000,B00000111,B11111000,B11000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B00110000,B00000000,B00000000,B00011000,B00110000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B00110000,B00000000,B00000000,B00011000,B00110000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B00110000,B00000000,B00000000,B00000100,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B00110000,B00000000,B00000000,B00000100,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00111000,B00000000,B00000000,B00000011,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00111000,B00000000,B00000000,B00000011,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B10000000,B00110000,B00000110,B00011111,B11111011,B00000011,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B10000000,B00110000,B00000110,B00011111,B11111011,B00000011,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,B00110000,B00000110,B00000111,B11100000,B11000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B11110000,B00000110,B00000000,B00000000,B11000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B11110000,B00000110,B00000000,B00000000,B11000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00001111,B11000000,B00000110,B00000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00001111,B11000000,B00000110,B00000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00001111,B11000000,B00000110,B00000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000001,B10000000,B00111111,B11000111,B00000001,B10000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00000011,B11000111,B00000001,B10000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B01111000,B00000011,B11000111,B00000001,B10000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B11000000,B11000001,B10000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B11000000,B11000001,B10000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,B11000000,B11000001,B10000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01110000,B11000000,B11000001,B10000000,B00000000,B00000000,B00000010,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11110000,B00111110,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11110000,B00111110,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000111,B11111000,B00000000,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000111,B11111000,B00000000,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11100000,B01111111,B11111111,B00001111,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11100000,B01111111,B11111111,B00001111,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000111,B11100000,B00000011,B11000000,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000111,B11100000,B00000011,B11000000,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111110,B00000000,B00000000,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111110,B00000000,B00000000,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000
};


const unsigned char michis[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100111,B00000001,B10011100,B00000000,B01110000,B00000001,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100111,B00000001,B10011100,B00000000,B01110000,B00000001,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B11111110,B00011100,B00000000,B01111100,B00000111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B11111110,B00011100,B00000000,B01111100,B00000111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B11111110,B00011100,B00000000,B01111100,B00000111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B01100000,B00000000,B00001111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B01100000,B00000000,B00001111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011100,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00000000,B11000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B10000000,B00000000,B00000011,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011111,B11111000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01100000,B00000000,B00011111,B11111000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00001111,B11111100,B00000110,B00000000,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00001111,B11111100,B00000110,B00000000,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00001111,B11100000,B00000110,B00000000,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00001110,B01100000,B00111111,B10000000,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00001110,B01100000,B00111111,B10000000,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000001,B11100000,B11000111,B10000011,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000001,B11100000,B11000111,B10000011,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B11000111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B11000111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B00000000,B00000000,B11000111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000011,B00000001,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000011,B00000001,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

const unsigned char MJ[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111100,B00111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111100,B00111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111100,B00111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111100,B00111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111100,B00111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B01111111,B11111110,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B01111111,B11111110,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B01111111,B11111110,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B01111111,B11111110,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B01111111,B11111110,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B00000001,B11111111,B10000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B00000001,B11111111,B10000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11110000,B00000000,B00000000,B00001111,B11111111,B11100000,B00000001,B11111111,B10000000,B00000000,
  B00000000,B01111000,B00000000,B00000111,B10000111,B11111111,B11110000,B00000000,B00000000,B00001111,B11111111,B11100000,B00000001,B11111111,B10000000,B00000000,
  B00000000,B01111000,B00000000,B00000111,B10000111,B11111111,B11110000,B00000000,B00000000,B00001111,B11111111,B11100000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111000,B00000000,B00000111,B10000111,B11111111,B11110000,B00000000,B00000000,B00001111,B11111111,B11100000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111000,B00000000,B00000111,B10000111,B11111111,B11110000,B00000000,B00000000,B00001111,B11111111,B11100000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B11110011,B11111111,B10000000,B00111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B11110011,B11111111,B10000000,B00111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B11110011,B11111111,B10000000,B00000001,B11111111,B11111100,B00111111,B11111111,B10000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00111111,B11111111,B10000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00111111,B11111111,B10000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00111111,B11111111,B10000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B11111111,B11111111,B10000000,B00000001,B11111111,B11111100,B00111111,B11111111,B10000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10011110,B01111111,B10000000,B00000000,B00001111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10011110,B01111111,B10000000,B00000000,B00001111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10011110,B01111111,B10000000,B00000000,B00001111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00001111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00001111,B11111111,B11111111,B11110000,B00000000,B00000111,B11111000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,B00000111,B11111000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,B00000111,B11111000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,B00000111,B11111000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,B00000111,B11111000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,B00000111,B11111000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00000111,B11111000,B00011111,B10000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000,
  B00000000,B01111111,B10000000,B01111111,B10000000,B00000000,B00000000,B00000011,B11000000,B00000000,B00000000,B00000000,B01111111,B11111110,B00000000,B00000000
};

void setup()
{
  Serial.begin(115200);
  if(!display.begin(SSD1306_SWITCHCAPVCC))
  {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  
  display.clearDisplay();
  display.display();
  delay(1000);

  display.clearDisplay();
  display.print(1);
  display.display();
  delay(1000);
  
  
}
void loop()
{
//  String texto = "Los niños bautistas se la comen";
//  display.clearDisplay();
//  display.setTextSize(1);
//  display.setTextColor(SSD1306_WHITE);
//  display.setCursor(5,28);
//  for(int i=0; i<texto.length() ;i++){
//    display.print(texto[i]);
//    display.display();
//    delay(300);
//  }

//  display.clearDisplay();
//  display.drawBitmap(0, 0, dibu, SCREEN_WIDTH, SCREEN_HEIGHT, SSD1306_WHITE);
//  display.display();
//  delay(5000);

  display.clearDisplay();
  display.drawBitmap(0, 0, MJ, SCREEN_WIDTH, SCREEN_HEIGHT, SSD1306_WHITE);
  display.display();
  delay(2000);

  display.clearDisplay();
  display.drawBitmap(0, 0, michis, SCREEN_WIDTH, SCREEN_HEIGHT, SSD1306_WHITE);
  display.display();
  delay(2000);
  
  
}

void AllPixels()
{
  int i;
  int j;
  display.clearDisplay();
  for(i=0;i<64;i++)
  {
    for(j=0;j<128;j++)
    {
      display.drawPixel(j, i, SSD1306_WHITE);
      
    }
    display.display();
    delay(30);
  }
  
  for(i=0;i<64;i++)
  {
    for(j=0;j<128;j++)
    {
      display.drawPixel(j, i, SSD1306_BLACK);
      
    }
    display.display();
    delay(30);
  }
  
}

void TextDisplay()
{
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(5,28);
  display.println("Electronics Hub");
  display.display();
  delay(3000);
}

void InvertedTextDisplay()
{
  display.clearDisplay();
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(5,28);
  display.println("Electronics Hub");
  display.display();
  delay(3000);
}

void ScrollText()
{
  display.clearDisplay();
  display.setCursor(0,0);
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.println("This is a");
  display.println("Scrolling");
  display.println("Text!");
  display.display();
  delay(100);
  display.startscrollright(0x00, 0x0F);
  delay(2000);
  //display.stopscroll();
  //delay(1000);
  display.startscrollleft(0x00, 0x0F);
  delay(2000);
  //display.stopscroll();
  //delay(1000);
  display.startscrolldiagright(0x00, 0x0F);
  delay(2000);
  display.startscrolldiagleft(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
}

void DisplayChars()
{
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.cp437(true);
  
  for(int16_t i=0; i<256; i++)
  {
    if(i == '\n')
    {
      display.write(' ');
    }
    else
    {
      display.write(i);
    }
  }

  display.display();
  delay(4000);
}
void TextSize()
{
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println(F("Size: 1"));
  display.println(F("ABC"));

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.println("Size: 2");
  display.println(F("ABC"));

  display.display();
  delay(3000);
}

void DrawRectangle()
{
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Rectangle");
  display.drawRect(0, 15, 90, 45, SSD1306_WHITE);
  display.display();
  delay(2000);
}

void DrawFilledRectangle()
{
  display.clearDisplay();  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Filled Rectangle");
  display.fillRect(0, 15, 90, 45, SSD1306_WHITE);
  display.display();
  delay(2000);
  
}

void DrawRoundRectangle()
{
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Round Rectangle");
  display.drawRoundRect(0, 15, 90, 45, 10, SSD1306_WHITE);
  display.display();
  delay(2000);
}

void DrawFilledRoundRectangle()
{
  display.clearDisplay();  
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Filled Round Rect");
  display.fillRoundRect(0, 15, 90, 45, 10, SSD1306_WHITE);
  display.display();
  delay(2000);
  
}

void DrawCircle()
{
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Circle");
  display.drawCircle(30, 36, 25, SSD1306_WHITE);
  display.display();
  delay(2000);
}
void DrawFilledCircle()
{
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Filled Circle");
  display.fillCircle(30, 36, 25, SSD1306_WHITE);
  display.display();
  delay(2000);
  
}

void DrawTriangle()
{
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Triangle");
  display.drawTriangle(30, 15, 0, 60, 60, 60, SSD1306_WHITE);
  display.display();
  delay(2000);  
}

void DrawFilledTriangle()
{
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Filled Triangle");
  display.fillTriangle(30, 15, 0, 60, 60, 60, SSD1306_WHITE);
  display.display();
  delay(2000);
}
