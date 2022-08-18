#include <iostream>
using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;
        string name;

        // constructor
        MyClass(string name) {
            cout << "Hello, " << name << endl;
            MyClass::name = name;
        }

        void myMethod() {
            cout << "Hello, " << MyClass::myNum << endl;
        }

        void greeting(string name);

        void setName(string name);
};

// outside method declaration
void MyClass::greeting(string name) {
    cout << "Hey, " << name << endl;
}

void MyClass::setName(string name) {
    MyClass::name = name;
}

class Employee {
    private:
        int salary;
    
    public:
        // constructor
        Employee(int salary) {
            Employee::salary = salary;
            cout << "Initial salary: " << salary << endl;
        }

        // setter
        void setSalary(int s) {
            Employee::salary = s;
        }

        // getter
        int getSalary() {
            return Employee::salary;
        }
};

// base class 
class Vehicle {
    public:
        string brand;

        Vehicle() {
            Vehicle::brand = "Ford";
        }

        void honk() {
            cout << "Tuut, tuut! \n";
        }        
};

// derived class
class Car: public Vehicle {
    public: 
        string model;

        Car() {
            Car::model = "Mustang";
        }
};

int main() {
    MyClass myObj("Theera");
    myObj.myNum = 2;
    myObj.myString = "Hello";

    myObj.myMethod();

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    myObj.greeting("Ben");

    // myObj.setName("Theera");
    cout << myObj.name << endl;

    cout << endl;

    Employee emp1(15000);
    emp1.setSalary(23000);
    cout << emp1.getSalary() << endl;

    cout << endl;

    Car car1;
    car1.honk();
    cout << car1.brand << " " << car1.model << endl;

    return 0;
}