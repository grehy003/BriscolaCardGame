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
    void addScore(int score);
    int points();
private:
    std::vector<Card> _hand;
    int _points;
};

#endif // PLAYER_H
