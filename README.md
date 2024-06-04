# C++ Demo Project

This project demonstrates various bitwise operations in C++ using a simple console application. The project is designed to showcase the capabilities of GitHub Copilot in assisting with typical C++ tasks.

## Bitwise Operations Demonstrated
- **Bitwise AND** (`&`)
- **Bitwise OR** (`|`)
- **Bitwise XOR** (`^`)
- **Bitwise NOT** (`~`)
- **Bitwise Left Shift** (`<<`)
- **Bitwise Right Shift** (`>>`)

## Files
- `main.cpp`: The main C++ program file that demonstrates the bitwise operations.
- `file_io_demo.cpp`: A C++ program file that demonstrates file I/O operations.
- `data_structures_demo.cpp`: A C++ program file that demonstrates the implementation of a simple linked list.
- `error_handling_demo.cpp`: A C++ program file that demonstrates error handling and exception management.
- `README.md`: This file, which provides an overview of the project and instructions for running the demo.

## Instructions

### Prerequisites
- A C++ compiler (e.g., `g++`)

### Compilation
To compile the bitwise operations program, navigate to the project directory and run the following command:
```bash
g++ -o demo main.cpp
```

To compile the file I/O operations program, navigate to the project directory and run the following command:
```bash
g++ -o file_io_demo file_io_demo.cpp
```

To compile the data structures demo program, navigate to the project directory and run the following command:
```bash
g++ -o data_structures_demo data_structures_demo.cpp
```

To compile the error handling demo program, navigate to the project directory and run the following command:
```bash
g++ -o error_handling_demo error_handling_demo.cpp
```

### Running the Program
After compiling the bitwise operations program, you can run it with the following command:
```bash
./demo
```

After compiling the file I/O operations program, you can run it with the following command:
```bash
./file_io_demo
```

After compiling the data structures demo program, you can run it with the following command:
```bash
./data_structures_demo
```

After compiling the error handling demo program, you can run it with the following command:
```bash
./error_handling_demo
```

### Expected Output
The bitwise operations program will output the results of various bitwise operations performed on two integers, `a` and `b`. The expected output is as follows:
```
Bitwise AND of 5 and 3 is: 1
Bitwise OR of 5 and 3 is: 7
Bitwise XOR of 5 and 3 is: 6
Bitwise NOT of 5 is: -6
Bitwise left shift of 5 by 1 is: 10
Bitwise right shift of 5 by 1 is: 2
```

The file I/O operations program will create a file named `example.txt`, write some text to it, and then read the text from the file and output it to the console. The expected output is as follows:
```
Hello, World!
This is a file I/O demo.
```

The data structures demo program will create a linked list, add elements to it, delete an element, and print the list before and after deletion. The expected output is as follows:
```
Linked list: 4 3 2 1
Linked list after deletion of 3: 4 2 1
```

The error handling demo program will throw and catch a runtime error, and print the error message. The expected output is as follows:
```
Caught an exception: This is a runtime error
```

## License
This project is licensed under the MIT License.

## Update
This is a minor update to create a difference between branches.
