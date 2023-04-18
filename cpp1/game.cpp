#include "game.h"
#include <iostream>
#include <vector>
#include "card.h"
#include "player.h"

void game::startgame() {
	std::vector<card::CardType> _gameDeck;
	//		typedef std::vector<card*> CardCollection;
	//		std::vector<card*> shuffleDeck{ _gameDeck.begin(), _gameDeck.end() };
	//		std::shuffle(shuffleDeck.begin(), shuffleDeck.end(), std::mt19937{ std::random_device{}() });
	//		_gameDeck = CardCollection{ shuffleDeck.begin(), shuffleDeck.end() };
	for (int a = 0; a < 14; a++) {
		_gameDeck.push_back(card::CardType::Tempura);
		_gameDeck.push_back(card::CardType::Dumpling);
		_gameDeck.push_back(card::CardType::Sashimi);
	}
	for (int a = 0; a < 5; a++) {
		_gameDeck.push_back(card::CardType::Nigiri_egg);
		_gameDeck.push_back(card::CardType::Nigiri_Squid);
	}
	for (int a = 0; a < 10; a++) {
		_gameDeck.push_back(card::CardType::Nigiri_Salmon);
	}
	for (int a = 0; a < 12; a++) {
		_gameDeck.push_back(card::CardType::MakiRoll_2);
	}for (int a = 0; a < 8; a++) {
		_gameDeck.push_back(card::CardType::MakiRoll_3);
	}
	for (int a = 0; a < 6; a++) {
		_gameDeck.push_back(card::CardType::MakiRoll_1);
	}

	player player1, player2;
	for (int i = 0; i < 3; i++) {
		std::cout << "~~~ round" << i + 1 << "/3 ~~~\n";
		std::cout << "PLAYER " << player1._names << " TURN\n";
		std::cout << "Tableau:\n";
		std::cout << "Current Hand:\n";
		std::vector<card::CardType> currentHand1;
		std::vector<card::CardType> currentHand2;

		std::vector<card::CardType> tableu1;
		std::vector<card::CardType> tableu2;

		currentHand1.reserve(10);
		int x = 0;
		int y = 0;
		for (x = 0; x < 10; ++x) {
			currentHand1.emplace_back(_gameDeck[(rand() % 88)]);
			std::cout << x + 1 << "." << currentHand1[x] << "\n";
		}
		int a = 0;
		int b = 0;

		std::cout << "Select a card to add to your tableau : ";
		cin >> a;
		while (a < 1 || a > 10)
		{
			std::cout << "Select a card to add to your tableau : ";
			cin >> a;
		}
		//tableu1.emplace_back(currentHand1[a]);
		//currentHand1.emplace_back(a);
		//currentHand1.pop_back();
		std::cout << "PLAYER " << player2._names << " TURN\n";
		std::cout << "Tableau:\n";
		std::cout << "Current Hand:\n";
		for (y = 0; y < 10; ++y) {
			currentHand2.emplace_back(_gameDeck[(rand() % 88)]);
			std::cout << y + 1 << "." << currentHand2[y] << "\n";

		}
		std::cout << "Select a card to add to your tableau : ";
		cin >> b;
		while (b < 1 || b > 10)
		{
			std::cout << "Select a card to add to your tableau : ";
			cin >> b;
		}

		//tableu2.emplace_back(currentHand1[b]);
		//currentHand2.emplace_back();
		//currentHand2.pop_back();
		std::cout << "~~~ end of round scoring ~~~\n";
		std::cout << "PLAYER " << player1._names << "round score: \n";
		std::cout << "PLAYER " << player2._names << "round score: \n";




	}
	std::cout << "~~~ End of game! ~~~\n";
	std::cout << "PLAYER" << player1._names << " final score:\n";
	std::cout << "PLAYER" << player2._names << " final score:\n";

};
