// Blink - treptanje lampice

// Varijabla sa brojem pina
const int led = 9;

void setup() {
	// Podesavanje nacina rada pina
	pinMode(led, OUTPUT);
}

void loop() {
	// Ukljucivanje lampice
	digitalWrite(led, HIGH);
	// Cekanje 1000 milisekundi = 1 sekunda
	delay(1000);
	// Iskljucivanje lampice
	digitalWrite(led, LOW);
	// Cekanje 1000 milisekundi = 1 sekunda
	delay(1000);
}