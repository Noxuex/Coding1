#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int health = 30;
int totalGold = 0;

void story(){
  cout << "You wake up.\n";
}

bool askYN(string question = "Would you like to go on an adventure?\n") {
  while(true) {
    cout << question << "(y/n)\n";
    char input;
    cin >> input;

    if(input == 'y') {
      return true;
    }
    else if(input == 'n') {
      cout << "That's too bad.\n";
      cout << "You go back to sleep.\n";
      return false;
    }
    
  } // end of the while(true) loop
} // end of askYN function

int rollDie(int sides = 6, int min = 1) {
  return rand() % sides + min;
}

void adventure() {
  int attack = rollDie();
  int block = rollDie();
  int gold = rollDie();

  cout << "you find a goblin and some gold\n";

  cout << "The goblin attacks you for " << attack << ".\n";
  cout << "You block for " << block << ".\n";

  if(block < attack) {
    attack = attack - block;
    health = health - attack;
    cout << "You failed to block!\n";
    cout << "you're health falls to " << health << ".\n";
  }

  else if(block >= attack) {
    cout << "You blocked the attack!\n";
    cout << "You grabbed " << gold << " gold.\n";
    totalGold = totalGold + gold;
  }

  cout << "Your health remains at " << health << " and you have a total of " << totalGold << " gold.\n";
} //  end of adventure

void ending() {
  cout << "you end your adventure with " << health << " and " << totalGold << " gold.\n";
}

int main() {  // console
  srand(time(0));
  
  story();

  while(askYN()){
    adventure();
    if(health <= 0){
      ending();
      totalGold = 0;
      break;
    }
  }

  cout << "\nyou escaped with " << health << " health and " << totalGold << " gold.\n";
  
  }