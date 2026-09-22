# C++ Embedded Systems Foundation

Bu depo, **C++ Nesne Yönelimli Programlama (OOP)** prensiplerinin gömülü sistem mimarilerine (özellikle STM32 gibi ARM Cortex-M tabanlı mikrodenetleyicilere) ve donanım kontrolüne nasıl uyarlanabileceğini göstermek amacıyla oluşturulmuştur.

## 🎯 Projenin Amacı
Savunma sanayisi ve ileri seviye gömülü yazılım projelerinde sıkça kullanılan **Donanım Soyutlama (Hardware Abstraction)** mantığını kod seviyesinde kurgulamak. Proje kapsamında, sensör ve motor gibi çevre birimlerinin modüler, belleği yormayan ve güvenli bir şekilde nasıl kontrol edileceği modellenmiştir.

## 🛠️ Kullanılan C++ Mühendislik Kavramları
*   **Abstract Classes & Pure Virtual Functions:** Belirli donanım arayüzleri (interface) oluşturmak ve mimari standartları zorunlu kılmak için.
*   **Polymorphism (Çok Biçimlilik):** Farklı donanım birimlerini tek bir ana işaretçi (pointer) dizisi üzerinden merkezi olarak yönetmek.
*   **Encapsulation (Kapsülleme):** Kritik donanım register'larını dışarıdan müdahaleye karşı korumak.
*   **Dynamic Memory Management:** `new` ve `delete` ile donanımlara enerji verilmesi ve sistem kapanırken `Virtual Destructor` kullanılarak pinlerin güvenli duruma geçirilmesinin simülasyonu.

## 👨‍💻 Geliştirici
**Furkan ŞIK**  
*Elektrik-Elektronik Mühendisliği 4. Sınıf | Gömülü Yazılım (STM32) & C++*
