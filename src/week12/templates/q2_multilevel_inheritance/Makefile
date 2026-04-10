CXX = g++
CXXFLAGS = -Wall -std=c++20

BUILD_DIR = build
TARGET = $(BUILD_DIR)/q1
SRCS = GraduateStudent.cpp Person.cpp Student.cpp
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean
