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

// TODO: Declare a const int named kCounterMax and initialize it to 22.

int const kCounterMax{22};


int main(int argc, char const *argv[]) {
  // TODO: Write an outer loop which starts from 0 and goes up to the counter
  // max.
for(int i = 0; i <= kCounterMax; i++) 
{
    for(int j = 0; j <= kCounterMax-i; j++)
    {
      std::cout << i + j << " ";
    }
      std::cout << "\n";
      // //for()
      // {


      // }

}



  // TODO: Write an inner loop which starts from the current line number and
  // counts down to zero. Make sure that this loop is inside the outer loop.

  // TODO: Print an asterisk.

  // TODO: Write another inner loop which starts from the current line number
  // and counts up to the counter max. Make sure that this loop is inside the
  // outer loop but outside the first inner loop.

  // TODO: print a new line character

  return 0;
}
