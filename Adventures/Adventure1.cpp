#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
srand(time(0));

string input;

cout << "\n";
  
cout << "Hello! What is your name player?\n\n";
  
string playerName;
cin >> playerName;
cout << "\n";
  
cout << "Nice to meet you " << playerName << "! Welcome to a small adventure game that is based on chance!\n\n";

  
do  {
  //stats and defining
  
  int turns = 0;

  int health = 10;
  int attack = 0;
  int block = 0;
  cout << "\n";
  

  cout << "~~~~~~~~~~~~\n\n";  

  cout << "\n";
  
  cout << "As you are walking down a path in the woods, you hear a rustling coming from up ahead.\n\n";

  cout << "Suddenly, a goblin jumps out and starts attacking.\n\n";

  cout << "Readying your trusty shield, the encounter begins.\n\n";

  cout << "\n~~~~~~~~~~~~\n\n\n";
  
  do {
    turns += 1;
    block = rand() % 4 + 1;
    attack = rand() % 4 + 1;
    cout << "The goblin readys his club.\n\n";
    cout << "The goblin attacks for " << attack << " damage!\n\n";
    cout << "You use your shield and block " << block << " damage!\n\n";
    if (block >= attack) {
      cout << "You w blocked the attack!\n\n";
      cout << "Your health remains at " << health << ".\n\n\n\n";
    }
    else if (block < attack) {
      attack = attack - block;
      health = health - attack;
      cout << "You failed to block the attack!\n\n";
      cout << "Your health falls to " << health << ".\n\n\n\n";
    }
  } while (turns < 4 && health >= 0);

  cout << "~~~~~~~~~~~~\n\n"; 
  
  if (health > 0){
    cout << "\nCongratulations, " << playerName << "! You have won the game of chance!\n\n";
  }
  else if (health <= 0) {
    cout << "You got your ass beat! Ya lost bro.\n\n";
  }
  cout << "Would you like to play again? Y/N\n\n";
  cin >> input;
}while(input != "n" && input != "N");
  
cout << "\nGame Over - Thanks for playing!";
  
}