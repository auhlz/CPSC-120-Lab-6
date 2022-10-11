// Alex Labitigan
// CPSC 120-12
// 2022-10-10
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 06-01
// Partners: @farrah-e
//
// Makes a pattern
//

#include <iostream>

int const kCounterMax{22};
int main(int argc, char const *argv[]) {
  for (int i = 0; i < kCounterMax; i++) {
    for (int j = i; j > 0; j--) {
      std::cout << "-";
    }
    std::cout << "*";
    for (int n = i; n < kCounterMax; n++) {
      std::cout << "|";
    }
    std::cout << "\n";
  }
  return 0;
}