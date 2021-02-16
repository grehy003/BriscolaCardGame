#include "player.h"

Player::Player()
{

}

Card Player::playCard()
{
    return Card(0,(Suit)0);
}

void Player::pickUpCard(Card card)
{
    _hand.push_back(card);
}

bool Player::hasFullHand()
{
    return _hand.size() == 3;
}

void Player::addScore(int score)
{
    _points += score;
}

int Player::points()
{
    return _points;
}
