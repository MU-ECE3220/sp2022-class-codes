#include<iostream>
#include<memory>

struct Player {
  std::shared_ptr<Player> companion;
  ~Player() { std::cout << "~Player\n"; }
};

int main() {
  std::shared_ptr<Player> jasmine = std::make_shared<Player>();
  std::shared_ptr<Player> albert  = std::make_shared<Player>();

  jasmine->companion = albert;
  albert->companion  = jasmine;
  std::cout << jasmine->companion.use_count() << std::endl;
  std::cout << albert->companion.use_count() << std::endl;

  return EXIT_SUCCESS;
}
