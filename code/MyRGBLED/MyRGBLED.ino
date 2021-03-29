//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 9
#define GREEN 7
#define RED 2

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

// define variables
int redValue;
int greenValue;
int blueValue;

// main loop
void loop(){

 analogWrite(RED,255);
 analogWrite(GREEN,255);

}
