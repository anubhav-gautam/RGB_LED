#include <Arduino.h>
int red=9;
int green =10;
int blue=11;

void setup() {
    pinMode(red,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);

}

void loop() {
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
    delay(1000);
}