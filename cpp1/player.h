#pragma once
#include "card.h"
class player {
public:
	static std::string names[];
	static std::string _names();
	typedef std::vector<card*> CardCollection;
	std::vector<card::CardType> hand;
	void addCardToTableau(card* card, CardCollection* hand);

};