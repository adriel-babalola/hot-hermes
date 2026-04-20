#include <Adafruit_AHTX0.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_AHTX0 aht;

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

int buzzerPin = A0;

void setup() {
  Serial.begin(115200);
  Serial.println("Adafruit AHT10/AHT20 demo!");

  if (!aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
  Serial.println("AHT10 or AHT20 found");

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(10, 10);

  display.display();

  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);  // populate temp and humidity objects with fresh data
  Serial.print("Temperature: ");
  Serial.print(temp.temperature);
  Serial.println(" degrees C");
  Serial.print("Humidity: ");
  Serial.print(humidity.relative_humidity);
  Serial.println("% rH");
  
  display.clearDisplay();
  display.setCursor(0, 0);

  display.print("Temp: ");
  display.print(temp.temperature);
  display.println(" C");

  display.print("Hum: ");
  display.print(humidity.relative_humidity);
  display.println(" %");

  display.display();

  if (temp.temperature > 32) {
     digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}