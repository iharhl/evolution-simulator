COMPILER := g++
OPTIONS := -std=c++20 -g -Wall
COMPILE := $(COMPILER) $(OPTIONS)
BUILD_DIR := build
SRC_DIR := src

all: ${BUILD_DIR}/main

${BUILD_DIR}/main: main.cpp ${BUILD_DIR}/source.o
	$(COMPILE) $< $(BUILD_DIR)/*.o -o $@

${BUILD_DIR}/source.o: ${SRC_DIR}/grid.cpp ${SRC_DIR}/creature.cpp build
	$(COMPILE) -c $< -o $@

# Make the build directory if it doesn't exist
build:
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)/*