#include <iostream>
#include <string>
using namespace std;

int main() {
	string greeting = "Hello";
	cout << greeting << "\n";

	// string firstName = "Theera";
	// string lastName = "Palajare";
	// firstName.append(lastName);
	// cout << firstName << "\n";

	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the txt string is: " << txt.length() << "\n";

	string myString = "Hello";
	cout << myString[0] << "\n";

	myString[0] = 'J';
	cout << myString << "\n";

	string firstName;
	cout << "Type your first name: ";
	cin >> firstName;
	cout << "Your name is: " << firstName << endl;
	return 0;
}
