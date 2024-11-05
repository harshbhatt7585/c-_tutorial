# include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < length; i++)  {
        numbers[i] = i;
    } 

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    double numbersDouble[10];
    int count = 0;
    int lengthDouble = sizeof(numbersDouble) / sizeof(numbersDouble[0]);
    while (count < lengthDouble){
        numbersDouble[count] = count + 0.131313131312321321334234;
        count++;
    }
    for (int i = 0; i < lengthDouble; i++) {
        cout << numbersDouble[i] << " ";
    }
}