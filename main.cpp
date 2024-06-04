#include <iostream>

using namespace std;

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    // Bitwise AND
    int and_result = a & b;  // 0001 in binary
    cout << "Bitwise AND of " << a << " and " << b << " is: " << and_result << endl;

    // Bitwise OR
    int or_result = a | b;  // 0111 in binary
    cout << "Bitwise OR of " << a << " and " << b << " is: " << or_result << endl;

    // Bitwise XOR
    int xor_result = a ^ b;  // 0110 in binary
    cout << "Bitwise XOR of " << a << " and " << b << " is: " << xor_result << endl;

    // Bitwise NOT
    int not_result = ~a;  // 1010 in binary (two's complement)
    cout << "Bitwise NOT of " << a << " is: " << not_result << endl;

    // Bitwise left shift
    int left_shift_result = a << 1;  // 1010 in binary
    cout << "Bitwise left shift of " << a << " by 1 is: " << left_shift_result << endl;

    // Bitwise right shift
    int right_shift_result = a >> 1;  // 0010 in binary
    cout << "Bitwise right shift of " << a << " by 1 is: " << right_shift_result << endl;

    return 0;
}
