#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    string filePath = "filename.txt";
    ifstream MyReadFile(filePath);

    // Use while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        cout << myText;
    }

    // Close the file
    MyReadFile.close();
    
    return 0;
}