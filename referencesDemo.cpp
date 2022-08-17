#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl << endl;

    food = "Burger";

    cout << food << endl;
    cout << meal << endl << endl;

    cout << "address of food variable: " << &food << endl;
    cout << "address of meal variable: " << &meal << endl;

    return 0;
}