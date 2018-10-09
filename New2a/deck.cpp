#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;
#include "card.h"
#include "deck.h"

deck::deck()
{
	card two(0, "last");
	first = new node<card>(two);

	for (int i = 2; i < 15; i++)
	{
		card cd(i, "club");
		first = new node<card>(cd, first);
	}

	for (int i = 2; i < 15; i++)
	{
		card cd(i, "heart");
		first = new node<card>(cd, first);
	}

	for (int i = 2; i < 15; i++)
	{
		card cd(i, "diamond");
		first = new node<card>(cd, first);
	}

	for (int i = 2; i < 15; i++)
	{
		card cd(i, "spade");
		first = new node<card>(cd, first);
	}





}

void deck::shuffle()
{
	node<card> *one;
	node<card> *two;
	node<card> *three;
	node<card>*four;
	node<card> *temp;
	node<card> *second;
	temp = first->next;
	one = first->next;
	second = first->next;
	int x = rand() % 48;

	for (int i = 0; i < x; i++)
	{
		temp = one;
		one = one->next;
	}
	first->next = one;
	temp->next = first;
	first = second;
	two = one->next;
	three = two->next;
	four = three->next;
	one->next = three;
	two->next = four;
	three->next = two;

}

ostream& operator<<(ostream& os, const deck& dk)
{
	node<card> *front;
	front = dk.first;
	while (front != NULL)
	{
		os << front->nodeValue;
		front = front->next;
	}

	return os;
}
