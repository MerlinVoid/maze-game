# 1. Compiler and Flags
CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# 2. Directories and Executable Name
SRC_DIR   = src
BUILD_DIR = build
TARGET    = mazegame

# 3. Automatically find all .cpp files in src/ and map them to .o files in build/
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# 4. Default Target (runs when you just type 'make')
all: $(TARGET)

# 5. Link all .o object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 6. Compile each .cpp file into a .o object file inside build/
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 7. Compile and immediately launch the game ('make run')
run: all
	./$(TARGET)

# 8. Delete compiled files for a fresh rebuild ('make clean')
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all run clean