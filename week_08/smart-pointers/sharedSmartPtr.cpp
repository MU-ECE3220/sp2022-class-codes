#include<iostream>
#include<memory>

void doSomething();

void doSomething() {
  std::shared_ptr<int> ptr = std::make_shared<int>(100);
  std::cout << (ptr.use_count() == 1) << std::endl;
  std::shared_ptr<int> ptr_copy = ptr;
  std::shared_ptr<int> ptr_copy2 = ptr;

  //ptr.use_count() == 2;

  std::cout << ptr.use_count() << " - " << (ptr.use_count() == 1)<< std::endl;
  std::cout << ptr.use_count() << " - " << (ptr.use_count() == 2)<< std::endl;
  std::cout << ptr_copy.use_count() << " - " << (ptr_copy.use_count() == 3)<< std::endl;
} 

int main() {
  doSomething();
  return EXIT_SUCCESS;
}
