CXX := g++
CXXFLAGS := -std=c++20 -g -Wall
COMPILE := $(CXX) $(CXXFLAGS)
BUILD_DIR := build
SRC_DIR := src
TEST_DIR := test
UTILS_DIR := utils

#====================================== MAIN PROGRAM ===============================================#

all: build $(BUILD_DIR)/main

$(BUILD_DIR)/main: main.cpp $(BUILD_DIR)/sim.o params
	$(COMPILE) $< $(BUILD_DIR)/*.o -o $@

sourcecode: $(BUILD_DIR)/grid.o $(BUILD_DIR)/spawn.o $(BUILD_DIR)/organism.o $(BUILD_DIR)/census.o $(BUILD_DIR)/random.o $(BUILD_DIR)/genome_op.o

params: $(BUILD_DIR)/params_reader.o

# source files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(COMPILE) -c $< -o $@

# parameters handler
$(BUILD_DIR)/%.o: $(UTILS_DIR)/%.cpp
	$(COMPILE) -c $< -o $@

$(BUILD_DIR)/random.o: ${SRC_DIR}/random.cpp
	$(COMPILE) -c $< -o $@

$(BUILD_DIR)/sim.o: ${SRC_DIR}/simulator.cpp sourcecode
	$(COMPILE) -c $< -o $@

run:
	$(BUILD_DIR)/main

#====================================== FOR TESTING ===============================================#

test: $(BUILD_DIR)/test

$(BUILD_DIR)/test: $(TEST_DIR)/test_main.cpp $(BUILD_DIR)/unittest_grid.o $(BUILD_DIR)/unittest_random.o
	$(COMPILE) $< $(BUILD_DIR)/*.o -o $@

$(BUILD_DIR)/%.o: ${TEST_DIR}/%.cpp build
	$(COMPILE) -c $< -o $@

run-test:
	$(BUILD_DIR)/test


#====================================== UTILITIES ==================================================#

# Make the build directory if it doesn't exist
build:
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)/*
	rm -rf $(UTILS_DIR)/*.txt