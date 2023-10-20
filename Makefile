CPP_FOLDER := cpp_folder
BUILD_DIR := build
TARGET := executable_name

SRCS := $(wildcard $(CPP_FOLDER)/*.cpp)
OBJS := $(SRCS:$(CPP_FOLDER)/%.cpp=$(BUILD_DIR)/%.o)

all: $(BUILD_DIR)/$(TARGET)

$(BUILD_DIR)/$(TARGET): $(OBJS)
	g++ -o $@ $^

$(BUILD_DIR)/%.o: $(CPP_FOLDER)/%.cpp
	@mkdir -p $(@D)
	g++ -c -o $@ $<

clean:
	rm -rf $(BUILD_DIR)
