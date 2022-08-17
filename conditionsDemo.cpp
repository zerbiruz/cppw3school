#include <iostream>
using namespace std;

int main() {
	if (20 > 18) {
		cout << "20 is greater than 18" << "\n";
	}

	int x = 20;
	int y = 18;
	if (x > y) {
		cout << "x is greater than y" << endl;
	}

	int time = 20;
	if (time < 18) {
		cout << "Good day." << endl;
	} else {
		cout << "Good evening."<< endl;
	}

	time = 22;
	if (time < 10) {
		cout << "Good morning." << endl;
	} else if (time < 20) {
		cout << "Good day." << endl;
	} else {
		cout << "Good evening." << endl;
	}

	// Shorthand if ... else
	time = 8;
	string result = (time < 18) ? "Good day." : "Good evining.";
	cout << result << endl;

	int day = 8;
	switch (day) {
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesdat" << endl;
			break;
		case 3: 
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturdat" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default:
			cout << "Looking forward to weekend." << endl;

	}

	return 0;
}
