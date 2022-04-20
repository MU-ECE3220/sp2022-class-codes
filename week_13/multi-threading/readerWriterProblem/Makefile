CXXFLAGS := -std=c++11 -O0 -pthread

SOURCES := $(wildcard *.cpp)
OBJS := $(SOURCES:%.cpp=%.o)

TARGET := main
.PHONY : all
all : $(TARGET)

$(TARGET) : $(OBJS)
	 $(CXX) $(CXXFLAGS) $^ -o $@ 

.PHONY : clean
clean : 
	rm -rf $(TARGET) $(OBJS)