#include <Arduino.h>
#include <FastLED.h>

#define LED_COUNT 1
#define DATA_PIN 8
#define DELAY_TIME 1000



CRGB leds[LED_COUNT];

void setup() {
  delay( 3000 ); // power-up safety delay
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, LED_COUNT);
  FastLED.setBrightness(10);
}

void loop() {
  leds[0] = CRGB::LightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MediumSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DimGrey;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DarkSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::AliceBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::SeaGreen;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::SpringGreen;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MidnightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::SteelBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::PapayaWhip;
  FastLED.show();
  delay(random(50, 800));

  leds[0] = CRGB::LightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MediumSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DimGrey;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DarkSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::AliceBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::SpringGreen;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Blue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MidnightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::SteelBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::PapayaWhip;
  FastLED.show();
  delay(random(50, 800));

  leds[0] = CRGB::LightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MediumSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DimGrey;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DarkSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::AliceBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MediumBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Blue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MidnightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::SteelBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::PapayaWhip;
  FastLED.show();
  delay(random(50, 800));

  leds[0] = CRGB::LightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MediumSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DimGrey;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::DarkSlateBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::AliceBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MediumBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Aquamarine;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::Blue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::MidnightBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::SteelBlue;
  FastLED.show();
  delay(random(40, 110));

  leds[0] = CRGB::PapayaWhip;
  FastLED.show();
  delay(random(50, 800));

  leds[0] = CRGB::MediumSlateBlue;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::Violet;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::SeaGreen;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::Aqua;
  FastLED.show();
  delay(random(100, 200));

  leds[0] = CRGB::FireBrick;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::SpringGreen;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::Honeydew;
  FastLED.show();
  delay(random(100, 200));

  leds[0] = CRGB::Aqua;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::HotPink;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::SpringGreen;
  FastLED.show();
  delay(random(90, 110));

  leds[0] = CRGB::CornflowerBlue;
  FastLED.show();
  delay(random(500, 1800));

  leds[0] = CRGB::PapayaWhip;
  FastLED.show();
  delay(random(50, 500));
}

// FAVORITE COLORS: PapayaWhip(White), MediumSlateBlue, Aqua, CornflowerBlue, FireBrick, HotPink, Honeydew, SeaGreen, Violet, SpringGreen

// **************** FAVORITE COLOR SPARKLE PROGRAM

// leds[0] = CRGB::MediumSlateBlue;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::Violet;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::SeaGreen;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::Aqua;
// FastLED.show();
// delay(random(100, 200));
//
// leds[0] = CRGB::FireBrick;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::SpringGreen;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::Honeydew;
// FastLED.show();
// delay(random(100, 200));
//
// leds[0] = CRGB::Aqua;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::HotPink;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::SpringGreen;
// FastLED.show();
// delay(random(90, 110));
//
// leds[0] = CRGB::CornflowerBlue;
// FastLED.show();
// delay(random(500, 1800));
//
// leds[0] = CRGB::PapayaWhip;
// FastLED.show();
// delay(random(50, 500));





// ***************** BLUE SPARKLE/FIREWORK PROGRAM

// leds[0] = CRGB::LightBlue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::MediumSlateBlue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::DimGrey;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::DarkSlateBlue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::AliceBlue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::Aquamarine;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::MediumBlue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::Aquamarine;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::Blue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::MidnightBlue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::SteelBlue;
// FastLED.show();
// delay(random(40, 110));
//
// leds[0] = CRGB::PapayaWhip;
// FastLED.show();
// delay(random(50, 800));
