#ifndef CARD_H
#define CARD_H

enum Suit {Swords, Clubs, Cups, Coins};


class Card
{
public:
    Card(int points, int value, Suit suit);
    ~Card();
    int _points;
    int _value;
    Suit _suit;
};

#endif // CARD_H
