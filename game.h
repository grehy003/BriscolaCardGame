#ifndef GAME_H
#define GAME_H

#include <deck.h>
#include <vector>
#include <QString>
#include <player.h>

class Game
{
public:
    Game();
    ~Game();
    void play();
    void initialize();
    std::vector<Card> playerHand();
    QString getBottomCard();
    QString getBottomCardSuit();
    void pickUpCard(Player* player);
    void determineFirstPlay();
    void determineHandWinner(Card playerCard, Card AICard);
    void determineWinner();
    bool cardsSameSuit(Card playerCard, Card AICard);
    bool isCardBrisc(Card card);
    void flipACoin();
private:
    bool playerWonLastHand;
    Deck* _deck;
    Player* _player;
    Player* _AI;
    int _playerScore;
    int _AIScore;
};

#endif // GAME_H
