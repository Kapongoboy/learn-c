#include <iostream>
#include <iterator>

int main(){
  // This is a comment
  int some_number;
  std::cout << "Please input any number" << std::endl;
  std::cin >> some_number;
  std::cout << "number = " << some_number << std::endl;
  std::cerr << "boring error message" << std::endl;
  return 0;
}
