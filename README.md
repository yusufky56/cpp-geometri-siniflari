# Geometri Sınıfları (C++)

Nesne yönelimli programlama dersi için yazılmış, temel geometrik şekilleri modelleyen C++ sınıfları.

## Sınıflar

| Sınıf | Dosya | Yaptığı iş |
|---|---|---|
| `Nokta` | [`src/Nokta.h`](src/Nokta.h) | 2B düzlemde nokta; kopyalama ve ofsetle kaydırma |
| `DogruParcasi` | [`src/DogruParcasi.h`](src/DogruParcasi.h) | Uzunluk, orta nokta, bir noktadan inilen dikmenin kesişimi; orta nokta + uzunluk + eğimden oluşturma |
| `Daire` | [`src/Daire.h`](src/Daire.h) | Alan, çevre, iki dairenin kesişim durumu |
| `Ucgen` | [`src/Ucgen.h`](src/Ucgen.h) | Alan (Heron formülü), çevre, iç açılar (kosinüs teoremi) |

[`src/main.cpp`](src/main.cpp) her sınıfı örnek değerlerle deneyen test programıdır.

## Derleme ve çalıştırma

```bash
g++ -std=c++17 -o geometri src/main.cpp
./geometri
```

Visual Studio kullanıyorsanız `src` klasöründeki dosyaları boş bir C++ konsol projesine ekleyip çalıştırmanız yeterli.

## Notlar

- π değeri kodda `3` olarak alınmıştır (`Daire::alan`, `Daire::cevre`).
- `Ucgen::acilar` sonuçları radyan cinsindendir.
