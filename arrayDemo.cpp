#include <iostream>
using namespace std;

int main() {
	int myArray[4] = {1, 2, 3, 4};
	int total = 0;
	for (int i = 0; i < sizeof(myArray)/sizeof(int); i++) {
		total += myArray[i];
	}	
	cout << "Total: " << total << endl;

	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars[0] << endl;

	cout << "cars array size: " << sizeof(cars) << ", string size: " << sizeof(string) << endl;

	for (int i = 0; i < sizeof(cars)/sizeof(string); i++) {
		cout << cars[i] << ", ";
	}
	cout << endl;
	return 0;
}
