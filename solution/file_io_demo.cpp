#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Create and open a text file
    ofstream MyFile("example.txt");

    // Write to the file
    MyFile << "Hello, World!\n";
    MyFile << "This is a file I/O demo.\n";

    // Close the file
    MyFile.close();

    // Read from the file
    ifstream MyReadFile("example.txt");
    string myText;

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        cout << myText << endl;
    }

    // Close the file
    MyReadFile.close();

    return 0;
}
