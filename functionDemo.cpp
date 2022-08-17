#include <iostream>
using namespace std;

// function declaration 
void myFunction(string firstName = "Man");

int plusFive(int x) {
    return x + 5;
}

void swapNumber(int &x, int &y) {
    // pass parameter by reference 
    int z = x;
    x = y;
    y = z;
}

int addTwoNumber(int x, int y) {
    return x + y;
}

int sumIntArray(int number[5], int arraySize) {
    int total = 0;
    for (int i = 0; i < arraySize; i++) {
        total += number[i];
    }
    return total;
}

int plusFunction(int x, int y) {
    return x + y;
}

double plusFunction(double x, double y) {
    return x + y;
}

int recursionSum(int k) {
    if (k == 0) {
        return 0;
    } else {
        return k + recursionSum(k - 1);
    }
}

int main() {
    myFunction("Peevara");
    myFunction("Piyachat");
    myFunction("Theera");
    myFunction();
    cout << plusFive(3) << endl;
    cout << addTwoNumber(3, 4) << endl;
    cout << endl;

    int firstNumber = 10;
    int secondNumber = 20;

    cout << "Before swap." << "\n";
    cout << "firstNumber: " << firstNumber << "\n";
    cout << "secondNumber: " << secondNumber << "\n";

    swap(firstNumber, secondNumber);

    cout << "After swap." << "\n";
    cout << "firstNumber: " << firstNumber << "\n";
    cout << "secondNumber: " << secondNumber << "\n";

    cout << endl;

    int numbers[5] = {1, 2, 3};
    int arraySize = sizeof(numbers) / sizeof(int);
    int result = sumIntArray(numbers, arraySize);
    cout << result << endl;

    cout << endl;

    cout << plusFunction(1, 3) << endl;
    cout << plusFunction(3.4, 4.5) << endl;

    cout << endl;
    
    cout << "resursion sum: " << recursionSum(10) << endl;

    return 0;
}

// function definition
void myFunction(string firstName) {
    cout << "Hello, " << firstName << endl;;
}