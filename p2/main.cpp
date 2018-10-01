/*
Algorithms 9/28/18
Project #2 Part A main.cpp file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include "deck.h"

using namespace std;

int main()
{
  deck mainDeck();  //create object which makes empty deck of size 52
  mainDeck.fillDeck();  //fill the deck with all the 52 cards in order
  mainDeck.printDeck();  //print deck to screen (ordered)

  for (int j = 0; j < 3; j++)
  {
    mainDeck.shuffle();  //shuffle the deck
    mainDeck.printDeck();  //print deck to screen
  }

  return  0;
}
