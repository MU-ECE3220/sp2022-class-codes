#include<iostream>

class A {
    public:
        void print(){
            std::cout << "I am in Class A\n"; 
        }
        A(){
            std::cout << "Constructor A\n";
        }
        ~A(){
            std::cout << "Destructor A\n";
        }
};   

class B : public A {

};

class C : public A {

};  

class D : public B, public C {

};

int main() {
    D d;
    d.print();
    return EXIT_SUCCESS;
}