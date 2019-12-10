int pwm_A = 5;    //Pin associated with first pwm output
int pwm_B = 6;    //Pin associated with second pwm output
int ain_1 = A6;   //Pin associated with analog input for first pwm
int ain_2 = A7;   //Pin associated with analog input for second pwm
int output_A;     //Variable to store reading from potentiometer for first pwm
int output_B;     //Variable to store reading from potentiometer for second pwm
int pwm_A_value;  //Variable to store value to write to first pwm pin
int pwm_B_value;  //Variable to store value to write to second pwm pin
void setup() {
  //Setting associated pins to be outputs
  pinMode(pwm_A, OUTPUT);
  pinMode(pwm_B, OUTPUT);   
}
void loop() {
  //Read in values from potentiometer
  output_A = analogRead(ain_1);
  //Map read values between 0 and 38 to generate intended duty cycle values
  pwm_A_value = map(output_A, 0, 1023, 0, 38);
  analogWrite(pwm_A, pwm_A_value);   //Write out output to first pwm output pin
  delay(1);

  //Read in values from potentiometer
  output_B = analogRead(ain_2);
  //Map read values between 0 and 38 to generate intended duty cycle values
  pwm_B_value = map(output_B, 0, 1023, 0, 38);
  analogWrite(pwm_B, pwm_B_value);  //Write out output to second pwm output pin
  delay(1);
}
