const int ledPin = 4;
const int sensorPin = A4;
const int threshold = 2.0;
int value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  //exit(0);
  value = analogRead(sensorPin);
  float voltage = (value/1024.0) * 5.0;

  Serial.print("voltage Value : ");
  Serial.print(voltage, 4);
  Serial.println("V");

  //float weight = 0;

  if(voltage > threshold){
    //weight = 65.184 * voltage + 19.266;
    //if(weigth < 0) weight = 0;
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  } 
  //Serial.print(" ,weight value : ");
  //Serial.print(weight, 4);
  //Serial.println("g");
  
  delay(1000);
}
