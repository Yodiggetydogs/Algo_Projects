/*
Algorithms 9/28/18
Project #2 Part A deck.h file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include <stdlib.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class deck
{
    public:
      deck();
      friend ostream& operator<< (ostream &ostr, const deck& d);
      void shuffle(deck);

    private:
      struct Node *next;
      struct Node *head;
};

// ***********************************************************
//      deck class implementation
// ***********************************************************

deck::deck()
{
  for (int i = 1; i < 14; i++)
  {
    *card(i, "club");
    *card(i, "diamond");
    *card(i, "heart");
    *card(i, "spade");

  }
}

deck::shuffle(deck)
{
  
}
