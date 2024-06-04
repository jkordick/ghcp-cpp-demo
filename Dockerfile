# Use the official GCC image as the base image
FROM gcc:latest

# Set the working directory in the container
WORKDIR /app

# Copy the source files from the current directory into the container at /app
COPY main.cpp /app
COPY file_io.cpp /app
COPY data_structures.cpp /app
COPY error_handling.cpp /app

# Compile the C++ application
RUN g++ -o demo main.cpp file_io.cpp data_structures.cpp error_handling.cpp

# Run the C++ application
CMD ["./demo"]
