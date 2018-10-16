// Semafor

const int ledCrvena = 9;
const int ledZuta = 10;
const int ledZelena = 11;

void setup() {
	pinMode(ledCrvena, OUTPUT);
	pinMode(ledZuta, OUTPUT);
	pinMode(ledZelena, OUTPUT);
}

void loop() {
	// Iskljucujemo zuto i zeleno svetlo
	digitalWrite(ledZuta, LOW);
	digitalWrite(ledZelena, LOW);
	// Ukljucujemo crveno svetlo
	digitalWrite(ledCrvena, HIGH);
	// Cekanje
	delay(3000);

	// Ukljucujemo zutu
	digitalWrite(ledZuta, HIGH);
	delay(1000);

	// Iskljucujemo crevnu i zutu i ukljucujemo zelenu
	digitalWrite(ledCrvena, LOW);
	digitalWrite(ledZuta, LOW);
	digitalWrite(ledZelena, HIGH);
	delay(3000);

	// Treptanje zelene
	for (int i = 0; i < 3; i++) {
		digitalWrite(ledZelena, LOW);
		delay(750);
		digitalWrite(ledZelena, HIGH);
		delay(750);
	}

	// Iskljucivanje zelene i ukljucivanje zute
	digitalWrite(ledZelena, LOW);
	digitalWrite(ledZuta, HIGH);
	delay(1000);
}
