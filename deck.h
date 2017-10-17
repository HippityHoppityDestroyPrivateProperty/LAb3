#ifndef SDI_DECK_H
#define SDI_DECK_H

#include <vector>

#include "card.h"

namespace SDI_REVIEW
{
	class Deck
	{
	private:
		std::vector<Card> theDeck_;

	public:
		Deck();
		void shuffle();
		Card nextCard();
	};

}  //namespace
#endif