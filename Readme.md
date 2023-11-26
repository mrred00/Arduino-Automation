### Arduino Kodu Açıklaması

#### Global Değişkenler:
- `int i;`: Döngülerde kullanılmak üzere bir sayacı temsil eder.
- `const int buton1 = 10;`: Birinci düğme pin numarasını temsil eder.
- `const int buton2 = 11;`: İkinci düğme pin numarasını temsil eder.

#### `setup()` Fonksiyonu:
- `for` döngüsü, 3 ile 7 arasındaki pinleri `OUTPUT` olarak ayarlar.
- `pinMode(buton1, INPUT);` ve `pinMode(buton2, INPUT);` ile düğmelerin pin modlarını belirler.
- İlk `for` döngüsü, 3 ile 7 arasındaki pinleri `HIGH` olarak ayarlar.

#### `loop()` Fonksiyonu:
- `button1` ve `button2`, ilgili düğmelerin durumlarını okur.

##### Düğme 1 Kontrolü:
- Eğer `button1` 1'e eşit ve `bt1` true ise, belirli pinlere `HIGH` ve `LOW` değerleri atanır.
- Aksi takdirde, tüm pinler `HIGH` olarak ayarlanır.

##### Düğme 2 Kontrolü:
- Eğer `button2` 1'e eşit ve `bt2` true ise, belirli bir deseni gösteren bir döngü çalıştırılır.
- Aksi takdirde, tüm pinler `HIGH` olarak ayarlanır.

##### Her İki Düğmenin Birlikte Basılması Kontrolü:
- Eğer hem `button1` hem de `button2` 1'e eşitse, belirli bir deseni gösterir ve ardından `bt1` ve `bt2`'yi false yapar.
- Aksi takdirde, `bt1` ve `bt2`'yi true yapar.

---

### GitHub README.md Dosyası

```markdown
# Arduino Projesi

Bu proje, Arduino üzerinde birkaç LED ve iki düğme kullanarak basit bir kontrol mekanizması sağlar.

## Devre Şeması

![Devre Şeması](link_to_circuit_diagram.png)

## Nasıl Kullanılır

1. Devreyi kurun.
2. Arduino'yu bilgisayarınıza bağlayın.
3. Arduino IDE kullanarak kodu yükleyin.

## Bağımlılıklar

- [Arduino IDE](https://www.arduino.cc/en/software)

## Arduino Kodu Açıklaması

Kodun içeriğini [buradan](code.ino) inceleyebilirsiniz.

```
