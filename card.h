#ifndef CARD_H
#define CARD_H

#include <string>
#include <QString>
enum Suit {Swords = 0, Club = 1, Cups = 2, Coins = 3};


class Card
{
public:
    Card(int value, Suit suit);
    Card(Card &card);
    ~Card();
    const QString toString();
    const QString suit();
    int value();
    int points();
private:
    int _value;
    Suit _suit;

};

#endif // CARD_H
