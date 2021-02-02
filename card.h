#ifndef CARD_H
#define CARD_H

#include <string>
enum Suit {Swords = 0, Club = 1, Cups = 2, Coins = 3};


class Card
{
public:
    Card(int value, Suit suit);
    ~Card();
    std::string ToString();
    int _value;
    Suit _suit;

};

#endif // CARD_H
