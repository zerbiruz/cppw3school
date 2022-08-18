#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open file
    ofstream MyFile("filename.txt");

    // Write to file
    MyFile << "File can be tricky, but it is fun enough!";

    // Close file
    MyFile.close();
    
    return 0;
}