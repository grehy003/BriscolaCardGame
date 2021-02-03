#ifndef GAME_H
#define GAME_H

#include <deck.h>
#include <vector>
#include <QString>
class Game
{
public:
    Game();
    ~Game();
    void initialize();
    std::vector<Card> playerHand();
    QString getBottomCard();
    QString getBottomCardSuit();
    void setHands();
    void playCard(Card card);
    void pickUpCard();
private:
    Deck* _deck;
    std::vector<Card> _playerHand;
    std::vector<Card> _AIHand;
};

#endif // GAME_H
