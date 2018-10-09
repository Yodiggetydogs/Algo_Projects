/*
Algorithms 9/28/18
Project #2 Part A deck.h file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/
//#include "d_node.h"
#include "card.h"
//#include "d_except.h"

/*#include <cstdlib>
#include <stdlib.h>
#include <random>
#include <algorithm>
#include <utility>
*/
using namespace std;

class deck
{
    //this class will store the cards in a deck in order.
    //deck = a linked list of 52 nodes.
    //the deck object should be an object of the card class?
    public:

      //constructor creates the empty linked list
      deck();

      //copy constructor
      deck(deck &obj);

      void shuffle();

      //overloaded operator that prints the cards in the deck
      friend ostream& operator<< (ostream &ostr, const deck& d);

      ~deck();

    private:

      //deck list
      node<card> *game_deck;
      node<card> *card_deck;
      node<card> *current;
      node<card> *next;
      card *first_card;
      node<card> *front;
      node<card> *new_node;
      card c(int value, string suit);

      //length of the deck and suit cards
      int length;
      int suits;

      //card suits
      string clubs, spades, hearts, diamonds;

};

// ***********************************************************
//      deck class implementation
// ***********************************************************

/*
friend ostream& operator<<(ostream& os, const Date& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}
*/



deck::deck()
{
  //create the linked list EMPTY (NULL) with 52 OR 24 nodes
  //create a deck of cards
  //deck properties
  length = 52;
  suits = 13;
  clubs = "clubs";
  spades = "spades";
  hearts = "hearts";
  diamonds = "diamonds";
  //club suit
  
  for (int i = 1; i <= suits; i++)
  {
      card cd;
      cd.setSuit(clubs);  //set the suit
      cd.setValue(i);     //set the value
      //set first card
      if (i == 1)
      {
          front = new node<card>;
          front->nodeValue = cd;
          card_deck = front;
      }
      else
      { 
   
      	card_deck->next = new node<card>;
      	card_deck->next->nodeValue = cd;
      	card_deck = card_deck->next;
	  }
  }
   for (int i = 1; i <= suits; i++)
  {
      card cd;
      cd.setSuit(hearts);  //set the suit
      cd.setValue(i);     //set the value
      card_deck->next = new node<card>;
      card_deck->next->nodeValue = cd;
      card_deck = card_deck->next;
  }
   for (int i = 1; i <= suits; i++)
  {
      card cd;
      cd.setSuit(diamonds);  //set the suit
      cd.setValue(i);     //set the value
      //set first card
   
      card_deck->next = new node<card>;
      card_deck->next->nodeValue = cd;
      card_deck = card_deck->next;
  }
   for (int i = 1; i <= suits; i++)
  {
      card cd;
      cd.setSuit(spades);  //set the suit
      cd.setValue(i);     //set the value
      //set first card
  }
}



/*
  //spades suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(spades);
      card.setValue(i);
      game_deck->nodeValue = card;
  }

  //hearts suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(hearts);
      card.setValue(i);
      game_deck->nodeValue = card;
  }

  //diamonds suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(diamonds);
      card.setValue(i);
      game_deck->nodeValue = card;

      /*try
      {
          game_deck->nodeValue = card;
      }
      catch (rangeError &ex)
      {
          cout << "exception error: ";
          cerr << ex.what() << endl;
      }*/
  //}
//}//END




deck::deck(deck &obj)
{
    length = 52;
    suits = 13;
    clubs = "clubs";
    spades = "spades";
    hearts = "hearts";
    diamonds = "diamonds";

    //club suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(clubs);
        card.setValue(i);
        game_deck->nodeValue = card;

        //set first card
        if (i == 1)
        {
            card_deck->nodeValue = card;
        }

        //set next card
        if (i == 2)
        {
            card_deck->nodeValue = card;
            card_deck->next = next;
        }
    }

    //spades suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(spades);
        card.setValue(i);
        game_deck->nodeValue = card;
    }

    //hearts suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(hearts);
        card.setValue(i);
        game_deck->nodeValue = card;
    }

    //diamonds suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(diamonds);
        card.setValue(i);
        game_deck->nodeValue = card;
    }
}//END

void deck::shuffle()
{
  int index;
  for(int i = 0; i < 52; i++)
  {
    index = rand() % 52;
    for (int i = 0; i < index-1; i++)
    {
      current = front->next;
    }
    front = current -> next;
  }
}

ostream & operator<<(ostream & os, const deck & d)//figure out how to print nodes..
{
  node <card> *current;
  node <card> *next;
  cout<<"here"<<endl;
  for(current = d.front; current != NULL; current = current->next)
  {
     os << current->nodeValue;
  }
  return os;
}



deck::~deck()
{
    cout << "Deck destroyed\n";
}


/* Right now i don't know where this goes, but it
doesn't go in the constructor

for (int i = 1; i < 14; i++)
  {
    *card(i, "club");
    *card(i, "diamond");
    *card(i, "heart");
    *card(i, "spade");

  }
  */
