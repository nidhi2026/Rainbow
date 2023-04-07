// RAINBOW LED

int red_pin = 13;
int blue_pin = 12;
int green_pin = 11;

void setup() {
  // put your setup code here, to run once:
  // setting the pins as output
    pinMode(red_pin, OUTPUT);
    pinMode(blue_pin, OUTPUT);
    pinMode(green_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // rgb values of colours
  // VIOLET
  analogWrite(red_pin, 127);
  analogWrite(blue_pin, 255);
  analogWrite(green_pin, 0);
  delay(1000); // 1 second 

  // INDIGO
  analogWrite(red_pin, 63);
  analogWrite(blue_pin, 255);
  analogWrite(green_pin, 0);
  delay(1000); // 1 second 
  
  // BLUE
  analogWrite(red_pin, 0);
  analogWrite(blue_pin, 255);
  analogWrite(green_pin, 0);
  delay(1000); // 1 second 

  // GREEN
  analogWrite(red_pin, 0);
  analogWrite(blue_pin, 0);
  analogWrite(green_pin, 255);
  delay(1000); // 1 second 

  // YELLOW
  analogWrite(red_pin, 255);
  analogWrite(blue_pin, 0);
  analogWrite(green_pin, 255);
  delay(1000); // 1 second 

  // ORANGE
  analogWrite(red_pin, 255);
  analogWrite(blue_pin, 51);
  analogWrite(green_pin, 87);
  delay(1000); // 1 second 

  // RED
  analogWrite(red_pin, 255);
  analogWrite(blue_pin, 0);
  analogWrite(green_pin, 0);
  delay(1000); // 1 second 

  // LED OUT BETWEEN CONSECUTIVE RAINBOWS
  analogWrite(red_pin, 0);
  analogWrite(blue_pin, 0);
  analogWrite(green_pin, 0);
  delay(2000); // 2 seconds
}
