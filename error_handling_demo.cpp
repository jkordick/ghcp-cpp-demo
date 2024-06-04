#include <iostream>
#include <stdexcept>

using namespace std;

// Function that throws an exception
void throwException() {
    throw runtime_error("This is a runtime error");
}

int main() {
    try {
        // Call the function that throws an exception
        throwException();
    } catch (const runtime_error& e) {
        // Catch the runtime error and print the error message
        cout << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}
