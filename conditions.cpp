#include <iostream>

using namespace std;

int main() {
    int choice;
    
    cout << "1. Print your name" << endl;
    cout << "2. Print who you are." << endl;
    cout << "3. Print what are you doing." << endl;
    cout << "4. Do nothing!" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "My name is Harsh";
    } 
    else if  (choice == 2) {
        cout << "I am a ML Engineer";
    }
    else if (choice == 3) {
        cout << "I am writing codes";
    }
    else if (choice == 4) {
        cout << "Ok, bye!";
    }
    else {
        cout << "Incorrect choice!";
    }
    return 0;
}