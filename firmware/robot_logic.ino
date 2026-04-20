// This code runs on the robot to correct sensor data in real-time
float voltagePin = A0; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  float rawValue = analogRead(A1); // Raw sensor reading
  float voltage = analogRead(voltagePin) * (5.0 / 1023.0) * 2; 

  // This is the "Inference" part of the AI
  // The numbers below come from our Python training
  float weight_v = -10.5; 
  float weight_s = 1.02;
  float bias = 30.0;

  float correctedValue = (voltage * weight_v) + (rawValue * weight_s) + bias;

  Serial.print("Raw: "); Serial.print(rawValue);
  Serial.print(" | Corrected: "); Serial.println(correctedValue);
  delay(100);
}
