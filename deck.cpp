#ifndef SDI_DECK_CPP
#define SDI_DECK_CPP

#include <vector>
#include <algorithm>
#include <cassert>

#include "card.h"
#include "deck.h"


namespace SDI_REVIEW
{

		Deck::Deck()
		{
			for (int cardNum = 0; cardNum < 52; ++cardNum)
				theDeck_.push_back(Card(cardNum));
		}

		void Deck::shuffle()
		{
			std::random_shuffle(theDeck_.begin(), theDeck_.end());
		}

		Card Deck::nextCard()
		{
			assert(! theDeck_.empty());
			Card result = theDeck_.back();
			theDeck_.pop_back();
			return result;
		}

}  //namespace
#endif