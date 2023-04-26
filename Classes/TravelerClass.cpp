#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class traveler{  //class type
  public:
  string name;
  int energy;
  int money;

  traveler (){  // constructor
    cout << "The traveler approaches\n";
    name = "Ethan";
    energy = 100;
    money = rand() % 30;
  }

  traveler(string givenName, int givenEnergy){
    cout << "\nA new traveler approaches\n";
    name = givenName;
    energy = givenEnergy;
    money = rand() % 20 + 1;
    status();
  }

  void status() {
    cout << "\nThe travelers name is " << name << " their energy level is at " << energy << " and they have " << money << " gold.\n";
  }
  
};

traveler travelers[5];

void nextDay() {
  cout << "\nAnother adventure ends.\n";
  for(int i = 0; i < 5; i++) {
    travelers[i].energy -= 10;
    if(travelers[i].energy == 0) {
      cout << travelers[i].name << " has run out of energy, their adventuring days are over\n";
    }
    else if (travelers[i].energy <= 0) {
      continue;
    }
    travelers[i].status();
  }
}

int main() {
  srand(time(0));

  // create new traveler variable
  traveler wizard;
  wizard.status();

  // set up wizard
  wizard.name = "Atlas";
  wizard.energy = 150;

  cout << "\nThe new traveler's name is: " << wizard.name << ".\n";
  cout << wizard.name << "'s energy is " << wizard.energy << ".\n";

  traveler soldier("Nestor", 200);
  soldier.status();

  cout << "\n------------\n";

  // create array of different travelers
  // give them all random names and energy
  
  string travelerNames[] = {"Everest", "Halea", "Kenai", "Ranier", "Zion"};

  for(int i = 0; i < 5; i++) {
    travelers[i] = traveler(travelerNames[rand() % 6], rand() % 100 + 5);
  }

  for(int i = 0; i <5; i++){
    travelers[i].status();
  }

  cout << "\n------------\n";

  nextDay();
  nextDay();
  nextDay();
  nextDay();
  

  
}  // end of main