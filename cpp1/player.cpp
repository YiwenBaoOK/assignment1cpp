#include "player.h"
#include <string>

std::string player::names[] = { "Sam", "Billy", "Jen", "Bob", "Sally", "Joe", "Sue",
"Sasha", "Tina", "Marge" };

std::string player::_names()
{
	std::string value = "";
	value = std::string(names[rand() % 10]);
	return  value;
}
void player::addCardToTableau(card* card, CardCollection* hand) {
	;

}