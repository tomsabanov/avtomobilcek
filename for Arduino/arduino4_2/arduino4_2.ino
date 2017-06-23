

char incomingByte;  // incoming data
int  LED = 13;      // LED pin

void setup() {

  Serial.begin(9600); // initialization
  pinMode(LED, OUTPUT);
  Serial.println("Press 1 to LED ON or 0 to LED OFF...");
}

void loop() {

  if (Serial.available() > 0) {  // if the data came
    incomingByte = Serial.read(); // read byte
    if(incomingByte == '0') {
       digitalWrite(LED, HIGH);  // if 1, switch LED Off
       Serial.println("NAPREJ");  // print message
    }
    if(incomingByte == '1') {
       digitalWrite(LED, LOW); // if 0, switch LED on
       Serial.println("NAPREJ IN DESNO");
    }
    if(incomingByte == '2') {
       digitalWrite(LED, LOW); // if 0, switch LED on
       Serial.println("NAPREJ IN LEVO");
    }
    if(incomingByte == '3') {
       digitalWrite(LED, LOW); // if 0, switch LED on
       Serial.println("NAZAJ IN DESNO");
    }
    if(incomingByte == '4') {
       digitalWrite(LED, LOW); // if 0, switch LED on
       Serial.println("NAZAJ IN LEVO");
    }
     if(incomingByte == '5') {
       digitalWrite(LED, LOW); // if 0, switch LED on
       Serial.println("NAZAJ");
    }
    
  }
  
}
