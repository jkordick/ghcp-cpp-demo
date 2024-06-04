# C++ Demo Project Instructions

This document provides instructions for compiling and running the various demo programs included in the C++ Demo Project. The project demonstrates typical C++ tasks such as bitwise operations, file I/O operations, data structures, and error handling.

## Prerequisites
- A C++ compiler (e.g., `g++`)

## Compilation

### Bitwise Operations Program
To compile the bitwise operations program, navigate to the `solution` directory and run the following command:
```bash
g++ -o demo main.cpp
```

### File I/O Operations Program
To compile the file I/O operations program, navigate to the `solution` directory and run the following command:
```bash
g++ -o file_io_demo file_io_demo.cpp
```

### Data Structures Demo Program
To compile the data structures demo program, navigate to the `solution` directory and run the following command:
```bash
g++ -o data_structures_demo data_structures_demo.cpp
```

### Error Handling Demo Program
To compile the error handling demo program, navigate to the `solution` directory and run the following command:
```bash
g++ -o error_handling_demo error_handling_demo.cpp
```

## Running the Programs

### Bitwise Operations Program
After compiling the bitwise operations program, you can run it with the following command:
```bash
./demo
```

### File I/O Operations Program
After compiling the file I/O operations program, you can run it with the following command:
```bash
./file_io_demo
```

### Data Structures Demo Program
After compiling the data structures demo program, you can run it with the following command:
```bash
./data_structures_demo
```

### Error Handling Demo Program
After compiling the error handling demo program, you can run it with the following command:
```bash
./error_handling_demo
```

## Expected Output

### Bitwise Operations Program
The bitwise operations program will output the results of various bitwise operations performed on two integers, `a` and `b`. The expected output is as follows:
```
Bitwise AND of 5 and 3 is: 1
Bitwise OR of 5 and 3 is: 7
Bitwise XOR of 5 and 3 is: 6
Bitwise NOT of 5 is: -6
Bitwise left shift of 5 by 1 is: 10
Bitwise right shift of 5 by 1 is: 2
```

### File I/O Operations Program
The file I/O operations program will create a file named `example.txt`, write some text to it, and then read the text from the file and output it to the console. The expected output is as follows:
```
Hello, World!
This is a file I/O demo.
```

### Data Structures Demo Program
The data structures demo program will create a linked list, add elements to it, delete an element, and print the list before and after deletion. The expected output is as follows:
```
Linked list: 4 3 2 1
Linked list after deletion of 3: 4 2 1
```

### Error Handling Demo Program
The error handling demo program will throw and catch a runtime error, and print the error message. The expected output is as follows:
```
Caught an exception: This is a runtime error
```
