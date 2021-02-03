#ifndef DECK_H
#define DECK_H

#include <card.h>
#include <vector>
#include <string>

class Deck
{
public:
    Deck();
    ~Deck();
    void shuffle();
    Card* popTopCard();
    Card* popBottomCard();
    QString toString();
private:
    std::vector<Card> _cards;
};

#endif // DECK_H
