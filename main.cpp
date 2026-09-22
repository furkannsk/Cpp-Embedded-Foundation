#include <iostream>
#include <string>

// Soyut Temel Sinif (Abstract Base Class) - Donanim Arayuzu
class Donanim {
protected:
    std::string isim;
public:
    Donanim(std::string donanimIsmi) : isim(donanimIsmi) {}
    
    // Virtual Destructor (Guvenli bellek temizligi ve pin kapatma icin)
    virtual ~Donanim() { 
        std::cout << isim << " bellekten temizlendi, pinler guvenli konuma alindi.\n"; 
    }
    
    // Saf Sanal Metot (Pure Virtual) - Alt siniflar bunu ezmek (override) zorunda!
    virtual void baslat() = 0; 
};

// Alt Sinif: Motor Kontrolcusu
class Motor : public Donanim {
private:
    int hiz; // Kapsulleme (Encapsulation)
public:
    Motor() : Donanim("BLDC Motor"), hiz(0) {}
    void baslat() override {
        hiz = 1500;
        std::cout << isim << " guc verildi. Hedef Hiz: " << hiz << " RPM\n";
    }
};

// Alt Sinif: Sicaklik Sensoru
class Sensor : public Donanim {
public:
    Sensor() : Donanim("BMS Sicaklik Sensoru") {}
    void baslat() override {
        std::cout << isim << " aktif edildi. ADC verisi bekleniyor...\n";
    }
};

int main() {
    std::cout << "--- STM32 OOP Donanim Soyutlama Mimarisi (Furkan SIK) ---\n\n";

    // Polimorfizm ve Dinamik Bellek Yonetimi ile Sistem Baslatma
    Donanim* sistemler[2];
    sistemler[0] = new Motor();
    sistemler[1] = new Sensor();

    // Tum sistemi tek bir donguyle baslat (Polimorfizm gucu)
    for(int i = 0; i < 2; i++) {
        sistemler[i]->baslat();
    }

    std::cout << "\n--- Acil Durum / Sistem Kapatiliyor ---\n";
    // Bellek sizintisini onlemek ve pinleri kapatmak icin delete
    for(int i = 0; i < 2; i++) {
        delete sistemler[i]; 
    }

    return 0;
}
