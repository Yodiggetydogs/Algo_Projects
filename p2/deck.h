/*
Algorithms 9/28/18
Project #2 Part A deck.h file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include "d_node.h"
#include "card.h"
#include "d_except.h"

#include <cstdlib>
#include <random>
#include <algorithm>
#include <utility>

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

      //starts the game
      void playFlip();

      //overloaded operator that prints the cards in the deck
      friend ostream& operator<< (ostream &ostr, const deck& d);

      //prints the entire deck
      void printDeck();

      ~deck();

    private:

      //deck list
      node<card> *game_deck;
      node<card> *card_deck;
      node<card> *current;
      node<card> *next;
      card *first_card;

      //length of the deck and suit cards
      int length;
      int suits;

      //card suits
      string clubs, spades, hearts, diamonds;

};

// ***********************************************************
//      deck class implementation
// ***********************************************************

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
      card card;
      card.setSuit(clubs);  //set the suit
      card.setValue(i);     //set the value
      game_deck->push_back(card);

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
      game_deck->push_back(card);
  }

  //hearts suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(hearts);
      card.setValue(i);
      game_deck->push_back(card);
  }

  //diamonds suit
  for (int i = 1; i <= suits; i++)
  {
      card card;
      card.setSuit(diamonds);
      card.setValue(i);
      game_deck->push_back(card);

      try
      {
          game_deck->push_back(card);
      }
      catch (rangeError &ex)
      {
          cout << "exception error: ";
          cerr << ex.what() << endl;
      }
  }

}//END

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
        game_deck->push_back(card);

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
        game_deck->push_back(card);
    }

    //hearts suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(hearts);
        card.setValue(i);
        game_deck->push_back(card);
    }

    //diamonds suit
    for (int i = 1; i <= suits; i++)
    {
        card card;
        card.setSuit(diamonds);
        card.setValue(i);
        game_deck->push_back(card);
    }
}//END

void deck::shuffle()
{
  //int i, j;
  //srand(time(0));
  swap(game_deck.front(), game_deck.back());
}

void deck::playFlip()
{
    cout << "Cards to be shuffled.\n";
    printDeck();
    cout << "Shuffling first time.\n";

    shuffle();
    cout << "cards after first shuffle.\n";
    printDeck();
    cout << "Shuffing second time.\n";

    shuffle();
    cout << "Cards after second shuffle.\n";
    printDeck();
    cout << "Shuffling third time.\n";

    shuffle();
    cout << "Cards after third shuffle.\n";
    printDeck();
    cout << "Done shuffling.\n\n";
}

void deck::printDeck()
{
  //display deck to the screen
  // i don't know if this is correct
  for (list<card>::iterator it = game_deck.begin(); it != game_deck->end(); ++it)
      card_deck->nodeValue.printCard();
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
