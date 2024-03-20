#include "lib.h"
#include <iostream>
#include <string>

int main()
{
  std::cout << "Todo App v.2\n";
  std::cout << "1 to create or 2 to append\n";
  std::cout << "What would you like to do?\n";
  std::string answer;
  std::cin >> answer;
  int x = std::stoi(answer);
  switch (x)
  {
  case 1:
    create();
    break;
  case 2:
    append();
    break;
  default:
    std::cout << "Not an choice\n";
  }
  return 0;
}
