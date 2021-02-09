#ifndef PLAYER_H
#define PLAYER_H

#include "vector"
#include "card.h"

class Player
{
public:
    Player();
    Card playCard();
    void pickUpCard(Card card);
    bool hasFullHand();
private:
    std::vector<Card> _hand;
};

#endif // PLAYER_H
