#include <iostream>
using namespace std;

int main() {
	// while loop
	int i = 0;
	while (i < 5) {
		cout << i << ", ";
		i++;
	}
	cout << endl;

	// do while loop
	i = 0;
	do {
		cout << i << ", ";
		i++;
	} while (i < 5);
	cout << endl;

	// for loop
	for (int i = 0; i < 5; i++) {
		cout << i << ", ";
	}
	cout << endl;

	// break
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			break;
		}
		cout << i << ", ";
	}
	cout << endl;

	// continue
	for (int i = 0; i < 10; i++) {
		if (i == 4) {
			continue;
		}
		cout << i << ", ";
	}
	cout << endl;
	
	return 0;
}
