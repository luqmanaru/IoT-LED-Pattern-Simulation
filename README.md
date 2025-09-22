# IoT-LED-Pattern-Simulation

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=flat&logo=arduino&logoColor=white)
![IoT](https://img.shields.io/badge/IoT-Project-blue)

Proyek simulasi pengendalian lampu LED menggunakan Arduino Uno dengan berbagai pola kedipan inovatif.

## 🎯 Fitur Utama
- **Tiga Pola Kedipan**: Berurutan, tengah ke luar, dan kedip bersama
- **5 LED Warna Berbeda**: Untuk visualisasi yang menarik
- **Kode Terstruktur**: Fungsi terpisah untuk setiap pola
- **Dokumentasi Lengkap**: Termasuk diagram koneksi

## 🛠️ Komponen yang Dibutuhkan
| Komponen | Jumlah | Keterangan |
|----------|--------|------------|
| Arduino Uno | 1 | Mikrokontroler utama |
| LED | 5 | Warna berbeda (merah, kuning, hijau, biru, putih) |
| Resistor 220Ω | 5 | Pembatas arus untuk setiap LED |
| Kabel Jumper | 10 | Untuk koneksi |
| Breadboard | 1 | Tempat memasang komponen |

## 🔌 Skema Koneksi
| LED | Pin Arduino | Keterangan |
|-----|-------------|------------|
| LED 1 (Merah) | Pin 2 | Digital Output |
| LED 2 (Kuning) | Pin 3 | Digital Output |
| LED 3 (Hijau) | Pin 4 | Digital Output |
| LED 4 (Biru) | Pin 5 | Digital Output |
| LED 5 (Putih) | Pin 6 | Digital Output |
| Semua Katoda | GND | Ground |

**Catatan**: Hubungkan kaki panjang (anoda) LED ke pin Arduino melalui resistor, dan kaki pendek (katoda) ke GND.

## 📝 Kode Program
Kode program terdiri dari tiga fungsi utama untuk setiap pola:

### Pola 1: Berurutan dari Kiri ke Kanan
```cpp
void patternSequential() {
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}
```

### Pola 2: Dari Tengah ke Luar
```cpp
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
```

### Pola 3: Semua LED Berkedip Bersama
```cpp
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
```

## 📸 Hasil Visualisasi
<img width="827" height="795" alt="image" src="https://github.com/user-attachments/assets/67f6992e-a353-4575-a34a-fc9fbede0c05" />


## 🚀 Cara Penggunaan
1. Siapkan komponen sesuai daftar di atas
2. Rangkai komponen mengikuti skema koneksi
3. Upload kode `Sketch.ino` ke Arduino Uno
4. Hubungkan power dan amati pola kedipan LED

## 📹 Video Demo
Lihat video demonstrasi proyek di: [https://youtu.be/4J6n4HogD7w](https://youtu.be/4J6n4HogD7w)

## 💾 File Proyek
Download file proyek lengkap di: [Google Drive](https://drive.google.com/file/d/1yIdN2JwLbCadEf3E33KQx-3_JYFGRkit/view?usp=sharing)

---
**luqmanaru**

Proyek ini dikembangkan sebagai tugas individu mata kuliah Internet of Things. Semua komponen dan kode dirancang untuk simulasi I/O lampu LED dengan Arduino Uno.
