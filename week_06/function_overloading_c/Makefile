CXXFLAGS := -Wall -Werror -O0

SOURCES := $(wildcard *.c)
OBJS := $(SOURCES:%.c=%.o)

TARGET := main
.PHONY : all
all : $(TARGET)

$(TARGET) : $(OBJS)
	 $(CXX) $(CXXFLAGS) $^ -o $@ 

.PHONY : clean
clean : 
	rm -rf $(TARGET) $(OBJS)