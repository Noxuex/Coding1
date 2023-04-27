#include <iostream>
#include "enemy.h"
#include <ctime>

using namespace std;


int main() {
  srand(time(0));            // must be in main()
  cout << "Hello World!\n";

  // headers are for declarations
  // source files are for definations.

  enemy duke;

  for(int i = 0; i < 15; i++){
    enemy bananana;
  }

  std::cout << "All enemies are hurt in a storm!\n";
  // set health by -2
  duke.setHealth(-2);      // this is a setter
  std::cout << "duke now has " << duke.getHealth() << " health.\n";

  std::cout << "duke loses 500 health.\n";
  duke.setHealth(-500);
  std::cout << "duke now has " << duke.getHealth() << " health.\n";

  std::cout << "duke gets a medkit for +50 health.\n";
  duke.setHealth(50);
  std::cout << "duke now has " << duke.getHealth() << " health.\n";


  std::cout << "Name your enemy? Don't you dare name him shithead\n";
  string input;
  std::cin >> input;

  duke.setName(input);

  std::cout << "The name is " << duke.getName() << ".\n";
    
}