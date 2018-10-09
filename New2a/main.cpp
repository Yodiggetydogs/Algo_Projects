#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;
#include "card.h"
#include "deck.h"
int main()
{
	int x;
	srand(time(NULL));
	deck d1;
	cout << "original deck: " << endl;
	cout << d1;
	for (int j = 0; j < 20; j++)
	{
		d1.shuffle();
	}
	cout << "shuffled deck:" << endl;
	cout << d1;
	cin >> x;
}
