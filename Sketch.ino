/*
  Simulasi I/O Lampu LED
  Tugas Individu - Internet of Things 1
  Oleh: Hanif Luqmanul Hakim (2022310035)
  Universitas Bina Insani, Bekasi - 2024
*/

// Pin untuk LED
const int ledPins[] = {2, 3, 4, 5, 6};
const int ledCount = 5;

void setup() {
  // Inisialisasi semua pin LED sebagai OUTPUT
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Pola 1: LED menyala berurutan dari kiri ke kanan
  patternSequential();
  
  // Pola 2: LED menyala dari tengah ke luar
  patternCenterOut();
  
  // Pola 3: Semua LED berkedip bersama tiga kali
  patternBlinkAll();
}

// Pola 1: Berurutan dari kiri ke kanan
void patternSequential() {
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}

// Pola 2: Dari tengah ke luar
void patternCenterOut() {
  // Nyalakan dari tengah
  for (int i = ledCount/2; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[ledCount-1-i], HIGH);
    delay(200);
  }
  
  // Matikan dari tengah
  for (int i = 0; i <= ledCount/2; i++) {
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[ledCount-1-i], LOW);
    delay(200);
  }
  delay(500);
}

// Pola 3: Semua LED berkedip bersama
void patternBlinkAll() {
  for (int i = 0; i < 3; i++) {
    // Nyalakan semua LED
    for (int j = 0; j < ledCount; j++) {
      digitalWrite(ledPins[j], HIGH);
    }
    delay(300);
    
    // Matikan semua LED
    for (int j = 0; j < ledCount; j++) {
      digitalWrite(ledPins[j], LOW);
    }
    delay(300);
  }
  delay(500);
}
