// Your First WS2812 LED Program
// Lonely Binary ESP32-S3 N16R8

#include <FastLED.h>

// LED Configuration
#define LED_PIN 48	  // WS2812 LED is connected to GPIO 48
#define NUM_LEDS 1	  // We have 1 LED
#define BRIGHTNESS 50 // Brightness (0-255, lower = dimmer)

// Create LED array
CRGB leds[NUM_LEDS];

void setup()
{
	// Initialize the LED
	FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
	FastLED.setBrightness(BRIGHTNESS);

	// Clear all LEDs (turn them off)
	FastLED.clear();
	FastLED.show();

	// Start serial communication (for debugging)
	Serial.begin(115200);
	Serial.println("WS2812 LED Test - Lonely Binary ESP32-S3");
	Serial.println("LED should start blinking in different colors!");
}

void loop()
{
	// Red blink
	Serial.println("Red blink");
	leds[0] = CRGB::Red;
	FastLED.show();
	delay(1000);

	// Turn off
	leds[0] = CRGB::Black;
	FastLED.show();
	delay(500);

	// Green blink
	Serial.println("Green blink");
	leds[0] = CRGB::Green;
	FastLED.show();
	delay(1000);

	// Turn off
	leds[0] = CRGB::Black;
	FastLED.show();
	delay(500);

	// Blue blink
	Serial.println("Blue blink");
	leds[0] = CRGB::Blue;
	FastLED.show();
	delay(1000);

	// Turn off
	leds[0] = CRGB::Black;
	FastLED.show();
	delay(500);
}
