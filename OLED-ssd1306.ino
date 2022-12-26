#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64
#define OLED_RESET -1  

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup()   {                
  if( !display.begin(SSD1306_SWITCHCAPVCC, 0x3C) ) { 
    Serial.println(F("OLED(SSD1306) allocation failed"));
    while(1) {}
  }
  display.clearDisplay();
 
  display.setTextColor(WHITE);
  display.println("Hello World!");
  display.println(“This is a Phi board v1.0”);
  display.display();
}

void loop() { }
