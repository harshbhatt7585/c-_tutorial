
#include <iostream>

// class and objects


/*
    C++ classes have three main access specifiers:

    public: Accessible from anywhere.
    private: Accessible only within the class.
    protected: Similar to private but accessible to derived classes (more on this in inheritance).
*/

class ClassName {
    public: // public members are accessible from outside the class
        int att1;
        double att2;

        // Constructor
        ClassName(int value1, int value2) {
            att1 = value1;
            att2 = value2;
        }

        void display() {
            std::cout << "attr1: " << att1 << " att2: " << att2 << std::endl; 
        }

        // Destructor
        ~ClassName() {
            // cleanup code
        }
    
};

// Encapsulation
class Rectangle {
    private:
        int length;
        int width;
    
    public:
        void setLength(int l) {
            length = l;
        }
        void setWidth(int w) {
            width = w;
        }
        int area() {
            return length * width;
        }
}

// Inheritence
class Animal {
    public:
        void eat() {
            std::cout << "Eating..." << std::endl;
        }
}
class Dog : public Animal {
    public:
        void bark() {
            std::cout << "Barking..." << std::endl;
        }
}



int main () {
    ClassName cls(1,2);
    cls.att1 = 10;
    cls.att2 = 20;
    cls.display();

    Dog d;
    d.eat();
    d.bark();

    return 0;
}


