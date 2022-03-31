#include <math.h>
int sensor_pot = A0;
int sensor_data = 0;
int pwm_value;
int forward_btn= 8;
int reverse_btn =9;
int stop_btn=10;
const float pi = 3.1415;
int pwm_pin1 = 2;
int pwm_pin2 = 3;
int pwm_pin3 = 4;
int pwm_pin4 = 5;
int pwm_pin5 = 6;
int pwm_pin6 = 7;
float Phase1 = 2 * PI / 3;
float Phase2 = 4 * PI / 3;
float Phase3 = 2 * PI;
float x = 0;
const float y = pi/30;
int var1 = 0;
int var2 = 0;
int var3 = 0;
int var4 = 0;
int var5 = 0;
int var6 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(forward_btn,INPUT);
  pinMode(reverse_btn, INPUT);
  pinMode(stop_btn, INPUT);
  pinMode(forward_btn,INPUT);
  pinMode(reverse_btn, INPUT);
  pinMode(stop_btn, INPUT);
  pinMode(pwm_pin1, OUTPUT);
  pinMode(pwm_pin2,OUTPUT);
  pinMode(pwm_pin3, OUTPUT);
  pinMode(pwm_pin4,OUTPUT);
  pinMode(pwm_pin5, OUTPUT);
  pinMode(pwm_pin6,OUTPUT);
  
}
void speedMotor(){
  sensor_data = analogRead(sensor_pot);
  x = x + y;
  analogWrite(pwm_pin1, var1);
  analogWrite(pwm_pin2, var2);
  analogWrite(pwm_pin3, var3);
  var4 = 126*sin(x+Phase1);
  var1 = var4+128;
  var5 = 126*sin(x+Phase2);
  var2 = var5+128;
  var6 = 126*sin(x+Phase3);
  var3 = var6+128;
  if(x >= 2*pi) x = 0;
  delay(sensor_data); 
}
void loop() {
  // put your main code here, to run repeatedly:
  speedMotor();
}
