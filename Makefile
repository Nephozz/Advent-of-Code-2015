# Compiler
CC = g++
# Compiler flags
CFLAGS = -Wall -Wextra -std=c++11

# Source directory
SRC_DIR = src

# Bin directory
OBJ_DIR = bin

# Create bin directory if it doesn't exist
$(shell mkdir -p $(OBJ_DIR))

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Executable name
TARGETS = $(patsubst $(SRC_DIR)/%.cpp, %, $(SRCS))

# Main target
all: $(TARGETS)

# Compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into executable
$(TARGETS): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGETS)
