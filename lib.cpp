#include "lib.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void create() {
  string fileName;
  cout << "What would you like to name the todo list?\n";
  cin >> fileName;
  std::ofstream file(fileName);
  cout << "File created\n";
  append();
}

int append() {

  std::ofstream file;
  cout << "What todo list would you like to add to?\n";
  string answer;
  cin >> answer;
  bool exists = std::filesystem::exists(answer);
  if (exists == false) {
    cout << "File not found. Would you like to create one? y/n\n";
    string answer;
    cin >> answer;
    if (answer == "y") {
      create();
      return 1;
    } else {
      cout << "Ok. Exiting program\n";
      return 2;
    }
  }
  file.open(answer, std::ios::app);

  cout << "What would you like to add?\n";
  string answer2;
  cin >> answer2;
  file << std::endl << answer2;
  cout << "File appened\n";
  file.close();
  return 0;
}
