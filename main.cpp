#include <string>
#include <iostream>

#include "card.h"
#include "deck.h"

using namespace std;
using namespace SDI_REVIEW;

int main(int argc, char* argv[])
{
	Deck myDeck;
	myDeck.shuffle();
	for (int c = 0; c < 52; ++c)
	{
		cout << myDeck.nextCard().toString() << endl;
	}
}