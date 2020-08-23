int LED_PIN=10;


void setup() {
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	for(int x=0;x<3;x++){
		digitalWrite(LED_PIN,HIGH);
		delay(150);
		digitalWrite(LED_PIN,LOW);
		delay(100);
	}


	delay(100);
	for(int x=0;x<3;x++){
		digitalWrite(LED_PIN,HIGH);
		delay(400);
		digitalWrite(LED_PIN,LOW);
		delay(100);
	}

	delay(100);

	for(int x=0;x<3;x++){
        digitalWrite(LED_PIN,HIGH);
        delay(150);
        digitalWrite(LED_PIN,LOW);
        delay(100);
	}
	delay(5000);
}
