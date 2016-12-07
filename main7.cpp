#include <iostream>

using namespace std;

// Base class
class sekil  {

public:
    // pure virtual function providing interface framework.
    virtual int getArea() = 0;

    void setWidth(int w) {
        genislik = w;
    }

    void setHeight(int h) {
        yukseklik = h;
    }

protected:
    int genislik;
    int yukseklik;
};

// Derived classes
class dortgen: public sekil {

public:
    int getArea() {
        return (genislik * yukseklik);
    }
};

class ucgen: public sekil {

public:
    int getArea() {
        return (genislik *yukseklik)/2;
    }
};

int main(void) {
    dortgen Rect;
    ucgen  Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    // Print the area of the object.
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}