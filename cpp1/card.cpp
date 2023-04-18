#include "card.h"

std::string str(card::CardType cardType) {
    switch (cardType) {
    case card::Tempura:
        return "Tempura";
        break;
    case card::Sashimi:
        return "Sashimi";
        break;
    case card::Nigiri_egg:
        return "Nigiri(Egg)";
        break;
    case card::Nigiri_Salmon:
        return "Nigiri(Salmon)";
        break;
    case card::Nigiri_Squid:
        return "Nigiri(Squid)";
        break;
    case card::MakiRoll_1:
        return "MakiRoll(1)";
        break;
    case card::MakiRoll_2:
        return "MakiRoll(2)";
        break;
    case card::MakiRoll_3:
        return "MakiRoll(3)";
        break;
    case card::Dumpling:
        return "Dumpling";
        break;
    }
};
