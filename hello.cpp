#include <iostream>

// main function calls when you combine the program, that way you can execute the program
int main() {
    std::cout << "Welcome to C++" << std::endl;
}

// "<<" is an operator called insertion operator which helps us to send the data tothe console.

// :: is an scope resolulution operator, it help us to specify the scope in which an identifier is defined
// in std::cout "::" spcify that cout is in the std (standard) namespace.
// if you don't use '::' and and directly define cout << "Wlecome ..", the compiler will give error, as it don't know where it is coming from
// it help us to organize the code and restrict us from get into any name conflicts.

// if you don't want to repeadly type std:: you can add using a derective at the top of your code: using namespace std


