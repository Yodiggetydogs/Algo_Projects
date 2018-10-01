/*
Algorithms 9/28/18
Project #2 Part A deck.h file
Flipcard Game
Rebekah Davis and Andrea Matellian
Group ID: DAVMAT
*/

#include "card.h"

using namespace std;

class deck
{
    //this class will store the cards in a deck in order.
    //deck = a linked list of 52 nodes.
    //the deck object should be an object of the card class?
    public:
      deck(); //constructor creates the empty linked list
      card c(v, s);  //card object
      node<card> *front;  //creates the node
      //overloaded operator that prints the cards in the deck
      friend ostream& operator<< (ostream &ostr, const deck& d);
      void shuffle(node *front);
      void printDeck(node *front);

    private:
      struct Node *next;
      struct Node *head;
};

// ***********************************************************
//      deck class implementation
// ***********************************************************

deck::deck()
{
  //create the linked list EMPTY (NULL) with 52 OR 24 nodes


}

void deck::shuffle(node *head)
{
  //int i, j;
  //srand(time(0));

  for (int k = 0; k < 52; k++)
  {

  }

}

void deck::printDeck(node *front);
{
  //display deck to the screen
  // i don't know if this is correct
  node *temp; //temporary node
  temp = head;   //set equal to first element
  cout << "The elements of the deck are: \n";
  for (int i = 0; i < 53; i++)
  {
    cout << temp->getValue, temp->getSuit << "\n";

    temp = temp->next;   //go to the next element
  }

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
