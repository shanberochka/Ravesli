#pragma once
#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

enum CardSuit
{
	SUIT_TREFU,
	SUIT_BYBNU,
	SUIT_CHERVU,
	SUIT_PIKI,
	MAX_SUITS
};

enum CardRank
{
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_VALET,
	RANK_DAMA,
	RANK_KOROL,
	RANK_TYZ,
	MAX_RANKS
};

struct Card
{
	CardSuit suit;
	CardRank rank;
};

void printCard(const Card& card)
{
	switch (card.rank)
	{
	case RANK_2:        std::cout << "2"; break;
	case RANK_3:        std::cout << "3"; break;
	case RANK_4:        std::cout << "4"; break;
	case RANK_5:        std::cout << "5"; break;
	case RANK_6:        std::cout << "6"; break;
	case RANK_7:        std::cout << "7"; break;
	case RANK_8:        std::cout << "8"; break;
	case RANK_9:        std::cout << "9"; break;
	case RANK_10:       std::cout << "10"; break;
	case RANK_VALET:    std::cout << "V"; break;
	case RANK_DAMA:     std::cout << "D"; break;
	case RANK_KOROL:    std::cout << "K"; break;
	case RANK_TYZ:      std::cout << "T"; break;
	}

	switch (card.suit)
	{
	case SUIT_TREFU:    std::cout << "T"; break;
	case SUIT_BYBNU:    std::cout << "B"; break;
	case SUIT_CHERVU:   std::cout << "C"; break;
	case SUIT_PIKI:     std::cout << "P"; break;
	}
}

void printDeck(const std::array<Card, 52> & deck)
{
	for (const auto& card : deck)
	{
		printCard(card);
		std::cout << ' ';
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void swapCard(Card &card1, Card &card2)
{
	Card tmpCard = card1;
	card1 = card2;
	card2 = tmpCard;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array<Card, 52> &deck)
{
	for (int index = 0; index < 52; ++index)
	{
		int swapIndex = getRandomNumber(0, 51);
		swapCard(deck[index], deck[swapIndex]);
	}
}

int getCardValue(const Card &card)
{
	switch (card.rank)
	{
	case RANK_2:        return 2;
	case RANK_3:        return 3;
	case RANK_4:        return 4;
	case RANK_5:        return 5;
	case RANK_6:        return 6;
	case RANK_7:        return 7;
	case RANK_8:        return 8;
	case RANK_9:        return 9;
	case RANK_10:       return 10;
	case RANK_VALET:    return 10;
	case RANK_DAMA:     return 10;
	case RANK_KOROL:    return 10;
	case RANK_TYZ:      return 11;
	}
	return 0;
}

char getPlayerChoice()
{
	std::cout << "(h) to hit, (s) to stand: ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 's' && choice != 'h');

	return choice;
}

bool playBlackjack(std::array<Card, 52> & deck)
{
	const Card* cardPtr = &deck[0];


	int playerTotal = 0;
	int dealerTotal = 0;

	dealerTotal += getCardValue(*cardPtr++);
	std::cout << "The dealer is showing: " << dealerTotal << std::endl;

	playerTotal += getCardValue(*cardPtr++);
	playerTotal += getCardValue(*cardPtr++);

	while (true)
	{
		std::cout << "You have: " << playerTotal << std::endl;

		if (playerTotal > 21)
		{
			return false;
		}

		char choice = getPlayerChoice();
		if (choice == 's')
		{
			break;
		}

		playerTotal += getCardValue(*cardPtr++);
	}

	while (dealerTotal < 17)
	{
		dealerTotal += getCardValue(*cardPtr++);
		std::cout << "The dealer now has: " << dealerTotal << std::endl;
	}

	if (dealerTotal > 21)
	{
		return true;
	}

	return (playerTotal > dealerTotal);
}