void setup() {
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Set pin 13 as output for the LED
  pinMode(13, OUTPUT);
  
  // Ensure the LED is initially off
  digitalWrite(13, LOW);
}

void loop() {
  // Check if there is data available in the serial buffer
  if (Serial.available() > 0) {
    // Read the incoming byte
    char input = Serial.read();
    
    // Turn on the LED if the input is '1'
    if (input == '1') {
      digitalWrite(13, HIGH);
      Serial.println("LED is ON");
    } 
    // Turn off the LED if the input is '0'
    else if (input == '0') {
      digitalWrite(13, LOW);
      Serial.println("LED is OFF");
    } 
    // Handle invalid inputs
    else {
      Serial.println("Invalid input! Send '1' to turn ON the LED and '0' to turn it OFF.");
    }
  }
}
