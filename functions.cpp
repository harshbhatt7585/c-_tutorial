#include <iostream>


int add(int a, int b) {
    reutrn a + b
}


// passing by reference 
void increment(int &x) {
    x = x + 1 // unlike other fucntional argument &x is a reference to the original value not a copy so the original value going to to change here as we are changing the value inside the function
}

// inline functions
// In C++, an inline function is a function that tells the compiler, "Instead of calling this function by jumping to its location in memory, just place the function’s code directly where it's called." This way, the program avoids the overhead of a function call, which can make the program faster—especially if the function is very short and used many times.
// However, inlining is only a request to the compiler, which may or may not honor it.
inline int square(int a) {
    return a * a
} 



