// Fade - "disanje" lampice

const int led = 9;
int jacina = 0;
int pomeraj = 1;

void setup() {
	pinMode(led, OUTPUT);
}

void loop() {
	// Podesavanje jacine lampice
	analogWrite(led, jacina);

	// Dodaj pomeraj na jacinu
	jacina = jacina + pomeraj;

	if (jacina == 255) {
		// Ako je jacina maksimalna smanjuj
		pomeraj = -1;
	} else if (jacina == 0) {
		// Ako je jacina minimalna povecavaj
		pomeraj = 1;
	}

	delay(5);
}
