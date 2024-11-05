// operator overloading allow us to do custom implementation of classes.
#include <iostream>

class Complex {
    public:
        int real, imag;

        Complex(int r, int i) : real(r), imag(i) {}

        // overload + operator
        Complex operator + (const Complex& obj) {
            return Complex(real + obj.real, imag + obj.imag);
        } 
};


int main() {
    Complex c1(2,4);
    Complex c2(3,5);

    Complex c3 = c1 + c2;
    std::cout << c3.real << " " << c3.imag << std::endl;
    return 0;
}