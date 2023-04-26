COMPILER := g++
OPTIONS := -std=c++20 -g -Wall
COMPILE := $(COMPILER) $(OPTIONS)
BUILD_DIR := build
SRC_DIR := src
TEST_DIR := test

#====================================== MAIN PROGRAM ===============================================#

all: ${BUILD_DIR}/main

${BUILD_DIR}/main: main.cpp ${BUILD_DIR}/source1.o ${BUILD_DIR}/source2.o ${BUILD_DIR}/random.o
	$(COMPILE) $< $(BUILD_DIR)/*.o -o $@

${BUILD_DIR}/source1.o: ${SRC_DIR}/grid.cpp ${SRC_DIR}/organism.cpp ${SRC_DIR}/census.cpp build
	$(COMPILE) -c $< -o $@

${BUILD_DIR}/source2.o: ${SRC_DIR}/census.cpp build
	$(COMPILE) -c $< -o $@

${BUILD_DIR}/random.o: ${SRC_DIR}/random.cpp build
	$(COMPILE) -c $< -o $@

#====================================== FOR TESTING ===============================================#

test: ${BUILD_DIR}/test

${BUILD_DIR}/test: ${TEST_DIR}/test_suit.cpp ${BUILD_DIR}/random.o build
	$(COMPILE) $< $(BUILD_DIR)/*.o -o $@

#====================================== UTILITIES ==================================================#

# Make the build directory if it doesn't exist
build:
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)/*