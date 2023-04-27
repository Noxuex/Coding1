#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));

  string favGames[100];
  int index = 0;

  cout << "\nThis program allows you to make a list of your favorite games!\n";

  while (true) {
    cout << "\nWhat would you like to add to the list\n";
    cout << "\nType 'show' to show the list.\n";
    cout << "\nType 'add' to add a game.\n";
    cout << "\nType 'bulkAdd' to add multiple games at a time\n";
    cout << "\nType 'find' to locate and edit a game in the list.\n";
    cout << "\nType 'quit' to quit.\n";

    string input;
    cin >> input;

    if (input == "quit") {
      cout << "\nList is over.\n";
      break;
    }

    if (input == "add") {
      cout << "\nWhat game would you like to add to the list?\n";
      cin >> input;
      favGames[index] = input;
      index++;
      cout << "\nYou have added " << input << "!\n\n";
    }

    if (input == "show") {
      cout << "\nHere is the list of far:\n\n";
      for (int i = 0; i < index; i++) {
        cout << i + 1 << ". " << favGames[i] << "\n\n";
      }
    }

    if (input == "bulkAdd") {
      cout << "\nWhat games would you like to add? Type 'quit' to return to options\n";
      while (input != "quit") {
        index += 0;
        cin >> input;
        if (input == "quit") {
          break;
        }
        favGames[index] = input;
        index++;
      }
    }

    if (input == "find") {
      cout << "\nWhat game would you like to find?\n";
      cin >> input;
      for (int i = 0; i < index; i++) {
        if (favGames[i] == input) {
          cout << "\nI found it!\n";
          cout << "\nWhat would you like to change it to?\n";
          cin >> input;
          favGames[i] = input;
        }
      }
    }
  }
}