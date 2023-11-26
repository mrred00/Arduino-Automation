### Arduino Kodu Açıklaması

Bu Arduino projesi, bir mikrodenetleyici olan Arduino kullanarak LED'leri ve düğmeleri kontrol eden basit bir örnektir.

#### Global Değişkenler:
- `int i;`: Döngülerde kullanılan sayacı temsil eder.
- `const int buton1 = 10;`: Birinci düğmenin bağlı olduğu pin numarası.
- `const int buton2 = 11;`: İkinci düğmenin bağlı olduğu pin numarası.

#### `setup()` Fonksiyonu:
- `for` döngüsü, 3 ile 7 arasındaki pinleri çıkış olarak ayarlar.
- `pinMode(buton1, INPUT);` ve `pinMode(buton2, INPUT);`: Düğmelerin pin modlarını belirler.
- İlk `for` döngüsü, 3 ile 7 arasındaki pinleri başlangıçta yüksek voltajda (HIGH) ayarlar.

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
### Kod Çalışma Mantığı

Tabii ki, şimdi kodun çalışma mantığını daha ayrıntılı bir şekilde açıklayalım:

### Kodun Çalışma Mantığı

1. **Pin Ayarları:**
   - `setup()` fonksiyonunda, 3 ila 7 arasındaki pinler çıkış (OUTPUT) olarak ayarlanır. Bu pinler, LED'leri kontrol etmek için kullanılacaktır.
   - `buton1` ve `buton2` pinleri giriş (INPUT) olarak ayarlanır, çünkü bunlar düğmeleri temsil eder.

2. **LED Başlangıç Durumu:**
   - İlk `for` döngüsü ile 3 ila 7 arasındaki pinlere bağlı LED'ler, başlangıçta yüksek voltajda (HIGH) ayarlanır.

3. **Düğme 1 Kontrolü:**
   - `loop()` fonksiyonunda, `button1` değişkeni ile birinci düğmenin durumu okunur.
   - Eğer birinci düğme basılı ise (`button1 == 1`) ve `bt1` true ise, belirli pinlere `HIGH` ve `LOW` değerleri atanır. Aksi takdirde, tüm pinler `HIGH` olarak ayarlanır.

4. **Düğme 2 Kontrolü:**
   - `button2` değişkeni ile ikinci düğmenin durumu okunur.
   - Eğer ikinci düğme basılı ise (`button2 == 1`) ve `bt2` true ise, belirli bir deseni gösteren bir döngü çalıştırılır. Aksi takdirde, tüm pinler `HIGH` olarak ayarlanır.

5. **Her İki Düğmenin Birlikte Basılması Kontrolü:**
   - Eğer hem birinci düğme (`button1`) hem de ikinci düğme (`button2`) basılı ise, belirli bir deseni gösterir.
   - Ardından, `bt1` ve `bt2`'yi false yapar ve belirli bir süre boyunca LED'leri belirli bir desende yanıp sönmesine izin verir. Bu süre sonunda, belirli bir LED'i söndürür ve `bt1` ve `bt2`'yi tekrar true yapar.
