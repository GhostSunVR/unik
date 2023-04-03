#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square() {
        side = 0;
    }

    Square(int s) {
        side = s;
    }

    int getSide() {
        return side;
    }

    void setSide(int s) {
        side = s;
    }

    int getArea() {
        return side * side;
    }

    void print_sqr1() {
        cout << "Square 1; \nSide length = " << side << endl;
        cout << "Area of Square 1 = " << getArea() << endl;
    }
    void print_sqr2() {
        cout << "\nSquare 2; \nSide length = " << side << endl;
        cout << "Area of Square 2 = " << getArea() << endl;
    }
    void print_sqr3() {
        cout << "\nSquare 3; \nSide length = " << side << endl;
        cout << "Area of Square 2 = " << getArea() << endl;
    }

    friend Square frd(Square s1, Square s2) {
        int newSide = s1.getSide() + s2.getSide();
        Square newSquare(newSide);
        return newSquare;
    }
};

int main() {
    Square sq1(4);
    sq1.print_sqr1();

    Square sq2;
    sq2.setSide(6);
    sq2.print_sqr2();

    Square sq3 = frd(sq1, sq2);
    sq3.print_sqr3();

    return 0;
}