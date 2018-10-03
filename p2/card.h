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
      //constructor
      card();

      //stores card value and suit
      card(const card &obj);

      //sets the value
      void setValue(int value);

      //sets the suit
      void setSuit(string suit);

      //returns value of card
      int getValue();

      //return suit of the card
      string getSuit();

      //prints value and suit
      void printCard();
      //overload operator to print a cards value and suit

      ~card();

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
  //value;
  //suit;
}

card::card(const card &obj)
{
  //value;
  //suit;
}

void card::setValue(int value)
{
  this->value = value;
}

void card::setSuit(string suit)
{
  this->suit = suit;
}

int card::getValue()
{
  return value;
}

string card::getSuit()
{
  return suit;
}

void card::printCard()
{
  if (this->value != 1)
    cout << "This card is the " << value << " of " << suit << ".\n";
  else
    cout << "This card is the ace of " << suit << ".\n";
}

card::~card()
{
}
