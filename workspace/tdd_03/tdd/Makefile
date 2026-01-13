#1. Compiler and Flags
CC = gcc
CFLAGS = -std=c11 -Wall -I. -Iunity -Isrc -Imocks
LDFLAGS=

#2. Directories
BUILD_DIR = build
TEST_DIR = test
SRC_DIR = src
MOCKS_DIR = mocks
UNITY_DIR = unity

#3a. Find all source files in relevant directories
TEST_SOURCES = $(wildcard $(TEST_DIR)/*.c)
SRC_SOURCES = $(wildcard $(SRC_DIR)/*.c)
MOCK_SOURCES = $(wildcard $(MOCKS_DIR)/*.c)

UNITY_SRC = $(UNITY_DIR)/unity.c

 
 # test/testUnit1.c 
 # build/testUnit1.o
 #
 
#3b. Create a list of object files that will be created in the build directory
OBJECTS = $(patsubst $(TEST_DIR)/%.c, $(BUILD_DIR)/%.o, $(TEST_SOURCES))
OBJECTS += $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_SOURCES))
OBJECTS += $(patsubst $(MOCKS_DIR)/%.c, $(BUILD_DIR)/%.o, $(MOCK_SOURCES))
OBJECTS += $(patsubst $(UNITY_DIR)/%.c, $(BUILD_DIR)/%.o, $(UNITY_SRC))


#4. Target executable name
TARGET = $(BUILD_DIR)/example_test_runner.exe

test: $(TARGET)
	@echo "--- Running Tests ---"
	./$(TARGET)
	@echo "---------------------"


#5. Build Rules
.PHONY: test clean all

all: $(TARGET)

#Rule to link the final executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

# Rule to compile any .c file into a .o file in the build directory
$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(MOCKS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(UNITY_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

	
#6. Clean Rule
clean:
	rm -f $(BUILD_DIR)/*.*

