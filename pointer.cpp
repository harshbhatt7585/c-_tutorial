// pointer is a variable which stores the memory address of the other veraible

#include <iostream>

int main() {

    int num = 10;
    int* ptr = &num;  // this is a pointer variable

    std::cout << *ptr << std::endl;  // access the value at address (deferencing)

    int* a = new int; // allocate memory for an integer
    *a = 25; // assign value to the allocated address
    std::cout << *a << std::endl;

    delete a; // deallocate the memory and clean the address
    a = nullptr; // sets the pointer to nullptr for safety


    /*
        Experise:
        Declare a pointer that holds the address of an integer variable and use it to print the value of that variable.
        Allocate memory for an array of 3 integers, assign values, and print them.
    */

    int someint = 101;
    int* someptr = &someint;

    std::cout << "Value of some pointer holding a memory address of a some integer is " << *someptr << std::endl; 
    
    int* someptrarr = new int[3];
    for (int i=0; i<3; i++) {
        someptrarr[i] = i;
    }
    for (int i=0; i<3; i++) {
        std::cout << someptrarr[i] << " ";
    }
    delete[] someptrarr;

    return 0;
}