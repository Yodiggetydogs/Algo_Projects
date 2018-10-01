/*
Algorithms 9/28/18
Project #2 Part A card.h file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include <stdlib.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include "d_node.h"

using namespace std;

class card
{
    //this class will store a single card with
    //value and suit.
    // c = club d = diamond h = heart s = spade.
    public:
      card(); //constructor
      card(int v, string s); //stores card value and suit
      void setValue(int v);
      void setSuit(string s);
      int getValue(card &c);
      string getSuit(card &c);
      //overload operator to print a cards value and suit
      friend ostream& operator<< (ostream &ostr, const card &c);

    private:
      int value;
      string suit;
};

// ***********************************************************
//      card class implementation
// ***********************************************************

card::card()
{ //initialize the single card which can have a value and suit
  value = 0;
  suit = "";
}

card::card(int v, string s)
{
  value = v;
  suit = s;
}

void card::setValue(int v)
{
  value = v;
}

void card::setSuit(string s)
{
  suit = s;
}

int card::getValue(card &c)
{
  return value;
}

string card::getSuit(card &c)
{
  return suit;
}
