#include <iostream>
#include <vector>
#ifndef card_H
#define card_H
#pragma once
class card {
public:
	//Contain an enum for the type of card it is.
	//	Is responsible for presenting the card type back to the player.
	//	Is responsible for scoring that type of card for a tableau.
	enum CardType {
		Tempura,
		Sashimi,
		Nigiri_egg,
		Nigiri_Salmon,
		Nigiri_Squid,
		MakiRoll_1,
		MakiRoll_2,
		MakiRoll_3,
		Dumpling
	};
	//Add a function that returns this type: const CardType & type() const
	const CardType& type(card::CardType cardType) const;

	//	Add a function that returns the type of card as a string :virtual std::string str() const = 0;
	virtual std::string str(card::CardType cardType) const;


	//Given a collection of cards, each type of card should be able to calculate a score for all the
	//	cards of its type in that collection.Use the following abstract signature in the card class :
	typedef std::vector<card*> CardCollection;
	virtual int score(CardCollection tableau, CardCollection otherPlayerTableau) const;

};


#endif
