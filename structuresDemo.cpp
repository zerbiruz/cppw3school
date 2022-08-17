#include <iostream>
using namespace std;

struct car
    {
        /* data */
        string brand;
        string model;
        int year;
    };

int main() {
    struct {
        int myNum;
        string myString;
    } myStructure;

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    myStructure.myNum = 1;
    myStructure.myString = "Hello, World!";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    car myCar1;
    myCar1.brand = "Honda";
    myCar1.model = "City";
    myCar1.year = 2013;

    car myCar2;
    myCar2.brand = "BYD";
    myCar2.model = "ATTO 3";
    myCar2.year = 2022;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}

