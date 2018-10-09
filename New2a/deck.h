#ifndef DECK_H
#define DECK_H
class deck
{
public:
	node<card> *first;
	deck();
	void shuffle();
	friend ostream& operator <<(ostream& os, const deck& dk);
};
#endif

