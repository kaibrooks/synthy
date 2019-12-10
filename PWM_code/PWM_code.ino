int pwm_A = 5;
int pwm_B = 6; 
int ain_1 = A6;
int ain_2 = A7;
int output_A;
int output_B;
int pwm_A_value;
int pwm_B_value;
void setup() {
  pinMode(pwm_A, OUTPUT);
  pinMode(pwm_B, OUTPUT);
}
void loop() {
  //Reading from potentiometer
  output_A = analogRead(ain_1);
  //Mapping the Values between 0 to 255 because we can give output
  //from 0 -255 using the analogwrite funtion
  pwm_A_value = map(output_A, 0, 1023, 0, 255);
  analogWrite(pwm_A, pwm_A_value);
  delay(1);

   //Reading from potentiometer
  output_B = analogRead(ain_2);
  //Mapping the Values between 0 to 255 because we can give output
  //from 0 -255 using the analogwrite funtion
  pwm_B_value = map(output_B, 0, 1023, 0, 255);
  analogWrite(pwm_B, pwm_B_value);
  delay(1);
}
