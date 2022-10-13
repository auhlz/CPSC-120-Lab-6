// Farrah Ermeje
// CPSC 120-12
// 2022-10-11
// farrah.e@csu.fullerton.edu
// @farrah-e
//
// Lab 06-02
// Partners: @auhlz
//
// Guessing game where the player must guess a secret number between 1 and 100
//

#include <cmath>
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  const int k_secret_number{42};
  int guess = 0;
  int last_guess = 0;
  std::string answer;
  char again = 'y';

  std::cout << "Hi - I'm a computer and I've thought of a number between "
               "1 and 100.\n";
  std::cout << "Let's play a guessing game...\n";
  bool is_game_over{true};
  while (is_game_over) {
    std::cout << "what's your guess?> ";
    std::cin >> guess;
    if (guess < 1) {
      std::cout << "Please guess a number between 1 and 100.\n";
    }
    if (guess > 100) {
      std::cout << "Please guess a number between 1 and 100.\n";
    }
    if (guess != k_secret_number && guess >= 1 && guess <= 100) {
      std::cout << "Nope - that's not it. \n";
      if (std::abs(k_secret_number - guess) <
          std::abs(k_secret_number - last_guess)) {
        std::cout << "You're getting warmer!\n";
      } else {
        std::cout << "You're getting colder.\n";
      }
      last_guess = guess;
    }
    if (guess == k_secret_number) {
      std::cout << "Hooray!  You guesed the secret number!! \n";
      again = 'n';
      std::cout << "Do you want to play again? (y or n)> ";
      std::cin >> again;
      if (again == 'y') {
        std::cout << "Great!! I'd love to play again... \n";
      } else {
        return 0;
      }
    }
  }
}