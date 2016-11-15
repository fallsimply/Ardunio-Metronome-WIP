void setup() {
  // put your setup code here, to run once:
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  SFsetup();
  int delay  delay;
  
}

void loop() {
  // put your main code here, to run repeatedly:
  SFloop();
  int bmp;
  int input;
  input = analogRead(A0);
  bmp = BeatsPerMin(input);
  Serial.println(bmp);
  delay(1);        // delay in between reads for stability
}
  int BeatsPerMin(int input){
    //input = 0 to 1023
    int result;  
    //result = 60 to 120
    result = 6;
    0 + 120 * (input / 1023);
    int delay;
    delay = result * 1000;
    return result;
}
