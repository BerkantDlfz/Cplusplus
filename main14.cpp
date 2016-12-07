#include <iostream>
#include <conio.h>
#include <gdi>
using namespace std;


class generic_shape { // Abstract base class
protected:
    int x, y;
public:
    generic_shape(int x_in, int y_in) {
        x = x_in;
        y = y_in;
    } // Constructor
    virtual void draw()=0; // pure virtual function
};

class Line : public generic_shape { // Line class
protected:
    int x2, y2; // End coordinates of line
public:
    Line(int x_in, int y_in, int x2_in, int y2_in) : generic_shape(x_in, y_in) {
        x2 = x2_in;
        y2 = y2_in;
    }

    void draw() { Line(x, y, x2, y2); } // virtual draw function
};


class Rectangle : public Line { // Rectangle class
public:
    Rectangle(int x_in, int y_in, int x2_in, int y2_in) : Line(x_in, y_in, x2_in, y2_in) {}

    void draw() { Rectangle(x, y, x2, y2); } // virtual draw
};

class Circle : public generic_shape { // Circle class
protected:
    int radius;
public:
    Circle(int x_cen, int y_cen, int r) : generic_shape(x_cen, y_cen) {
        radius = r;
    }

    void draw() { Circle(x, y, radius); } // virtual draw
};

void initgraph(int *pInt, int *pInt1, const char string[8]);

/* A function to draw different shapes ***/
void show(generic_shape &shape) { // Which draw function will be called?
    shape.draw(); // It 's unknown at compile-time
}

int main() {
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "\\tc\\bgi"); //To graphics mode
    Line Line1(1, 1, 100, 250);
    Circle Circle1(100, 100, 20);
    Rectangle Rectangle1(30, 50, 250, 140);
    Circle Circle2(300, 170, 50);
    show(Circle1);
    getch();
    show(Line1);
    getch();
    show(Circle2);
    getch();
    show(Rectangle1);
    getch();
    closegraph();
}

