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

using namespace std;

class card
{
    public:
      card();
      card(int, string); //value and suit
      void setValue(int);
      void setSuit(string);
      int getValue(&card c);
      string getSuit(&card c);
      friend ostream& operator<< (ostream &ostr, const card& c);

    private:
      int value;
      string suit;
};

// ***********************************************************
//      card class implementation
// ***********************************************************

card::card()
{
  value = 0;
  suit = "";
}

struct Card
{
  int value;
  string suit;
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
