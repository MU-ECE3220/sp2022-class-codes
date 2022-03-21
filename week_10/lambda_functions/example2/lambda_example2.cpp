#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>

int main() {
    // with no capture list
    auto f1 = [](int x, int y) {return x + y; };
    std::cout << f1(2,3) << std::endl;

    // using with std::function
    std::function<int(int, int)> f2 = [](int x, int y) {return x + y; };
    std::cout << f2(4,5) << std::endl;

    // using capture list
    int a = 5;
    int b = 2;
    std::function<int(void)> f3 = [&a, b]{
        a = a * a;
        return a + b; 
        };
    std::cout << a << ", "<< b << std::endl;
    std::cout << f3() << std::endl;
    std::cout << a << ", "<< b << std::endl;
    
    return EXIT_SUCCESS;
}