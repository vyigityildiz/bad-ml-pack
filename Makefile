# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -I include

# Linker flags
#LDFLAGS = -L lib -l SDL2-2.0.0

# Sources
SOURCES = src/read_csv.cpp src/main.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Executable
EXECUTABLE = main

# Default target
all: $(EXECUTABLE)

# Link the object files to create the executable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) $(LDFLAGS) -o $@

# Compile the source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
