
// include the extern for the C function

// include the extern for printf
extern "C" {
    #include "c_file.h"
    int printf(const char *format, ...);
}

int main(){
    // try running a C printf function
    printf("Testing\n");
    // invoke C function from object file/code.
    fun("This is called from a C++ code\n");
    return 0;
}