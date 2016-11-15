int bmp;
int delay;
void setup() {
  // put your setup code here, to run once:
  // initialize serial communication at 9600 bits per second:
  // Serial.begin(9600);
  // SFsetup();
  pinMode(3, OUTPUT)
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //  SFloop(); 
  bmp = BeatsPerMin(analogRead(A0));
//  Serial.println(bmp);
//  delay(1);        // delay in between reads for stability
  delay = 3600 / bmp;
  digitalWrite(3, HIGH);
  digitalWrite(3, LOW);
  delay(delay);
}
  int BeatsPerMin(int input){
    //input = 0 to 1023
    int result;  
    //result = 60 to 10
    result = 60 + 120 * (input / 1023);
    int delay;
    delay = result * 1000;
    return result;
}
