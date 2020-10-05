#include "Card.h"
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	std::array<Card, 52> deck;

	int card(0);

	for (int suit = 0; suit < MAX_SUITS; ++suit)
		for (int rank = 0; rank < MAX_RANKS; ++rank)
		{
			deck[card].suit = static_cast<CardSuit>(suit);
			deck[card].rank = static_cast<CardRank>(rank);
			++card;
		}

	shuffleDeck(deck);

	if (playBlackjack(deck))
	{
		std::cout << "You win!" << std::endl;
	}
	else
	{
		std::cout << "You lose!" << std::endl;
	}

	return 0;
}

