#include <iostream>
using namespace std;

int main() {
	int myArray[4] = {1, 2, 3, 4};
	int total = 0;
	for (int i = 0; i < sizeof(myArray)/sizeof(int); i++) {
		total += myArray[i];
	}	
	cout << "Total: " << total << endl;

	string cars[10] = {"Volvo", "BMW", "Ford", "Mazda"};
	cout << cars[0] << endl;

	for (int i = 0; i < sizeof(cars)/sizeof(string); i++){
		cout << cars[i] << endl;
	}
	cout << endl;

	cout << "cars array size: " << sizeof(cars) << ", string size: " << sizeof(string) << endl;

	for (int i = 0; i < sizeof(cars)/sizeof(string); i++) {
		cout << cars[i] << ", ";
	}
	cout << endl;

	string letters[2][4] = {
		{"A", "B", "C", "D"},
		{"E", "F", "G", "H"}
	};

	cout << letters[0][0] << endl;

	int rowNumber = sizeof(letters)/sizeof(letters[0]);
	int colNumber = sizeof(letters[0])/sizeof(string);
	cout << "Row number: " << rowNumber << "\nColumn number: " << colNumber << endl;

	for (int i = 0; i < rowNumber; i++) {
		for (int j = 0; j < colNumber; j++) {
			cout << letters[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
