#include "enemy.h"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;


// define the constructor
enemy::enemy(string givenName) {
  cout << "A new enemy has appeared!\n";
  name = givenName;
  health = 10;
  damage = rand() % 4 + 3;
  status();

}

void enemy::status() {
  cout << name << "health is at " << health << " health and does " << damage << " damage.\n";
}

void enemy::setHealth(int by) {
  health += by;
  if(health < 0) {
    health = 0;
    // call died() function
  }
  if(health > 10) {
    health = 10;
  }
}

int enemy::getHealth() {
  return health;
}

void enemy::setName(string newName) {
  if(newName == "shithead") {
    cout << "You are a bit of an asshole.\n";
    return;
  }
  name = newName;
}

string enemy::getName() {
  return name;
}