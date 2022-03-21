#include<iostream>
#include<vector>
// #include<functional>
#include<algorithm>

struct print {
    void operator()(int elem){
        std::cout << elem * 10 << std::endl;
    }
};

int main() {
    std::vector<int> v = {1,2,3,4,5};
    std::for_each(v.begin(), v.end(), print());
    return EXIT_SUCCESS;
}