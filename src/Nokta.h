#pragma once
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

// Nokta sınıfı, iki boyutlu düzlemde x ve y koordinatlarıyla bir noktayı temsil eder.
class Nokta {
private:
    double x, y;

public:
    // Orijinde (0, 0) bir nokta oluşturan yapıcı.
    Nokta() : x(0), y(0) {}

    // x ve y koordinatlarına aynı değeri atayan yapıcı.
    Nokta(double deger) : x(deger), y(deger) {}

    // x ve y koordinatlarını ayrı ayrı alan yapıcı.
    Nokta(double _x, double _y) : x(_x), y(_y) {}

    // Başka bir Nokta nesnesinin kopyasını oluşturan yapıcı.
    Nokta(const Nokta& other) : x(other.x), y(other.y) {}

    // Başka bir noktayı verilen ofset değerleri kadar kaydırarak yeni bir nokta oluşturan yapıcı.
    Nokta(const Nokta& other, double ofsetX, double ofsetY) : x(other.x + ofsetX), y(other.y + ofsetY) {}

    Nokta& operator=(const Nokta& other) = default;

    // İlgili get ve set metotları
    double getX() const { return x; }
    void setX(double _x) { x = _x; }

    double getY() const { return y; }
    void setY(double _y) { y = _y; }

    void setXY(double _x, double _y) {
        x = _x;
        y = _y;
    }

    // Noktanın koordinatlarını string olarak döndürür.
    string toString() const {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }

    // Noktanın koordinatlarını ekrana yazdırır.
    void yazdir() const {
        cout << toString() << endl;
    }
};
