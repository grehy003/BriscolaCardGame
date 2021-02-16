#include "game.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "iostream"

Game::Game()
{

}

Game::~Game()
{
    delete _deck;
}

void Game::play()
{
    initialize();
    determineFirstPlay();
    bool firstTurn = true;
    //Game loop
    while(!_deck->isEmpty()){
        while(!_player->hasFullHand()){
            pickUpCard(_player);
            pickUpCard(_AI);
        }
        if(firstTurn){
            flipACoin();
            firstTurn = false;
        }
        //Human goes first
        if(playerWonLastHand){ //TODO roll for first to play at start
            Card playerCard = _player->playCard();
            Card AICard = _AI->playCard();
            determineHandWinner(playerCard,AICard);
        }
        //AI plays first
        else{
            Card AICard = _AI->playCard();
            //TODO: update UI here
            Card playerCard = _player->playCard();
            determineHandWinner(playerCard,AICard);
        }
    }
    determineWinner();
}

void Game::initialize()
{
    _deck = new Deck;
    _deck->shuffle();
}

QString Game::getBottomCard()
{
    return _deck->popBottomCard()->toString();
}

QString Game::getBottomCardSuit()
{
    return _deck->popBottomCard()->suit();
}

void Game::pickUpCard(Player* player)
{
    player->pickUpCard(_deck->popTopCard());
}

void Game::determineFirstPlay()
{

}

void Game::determineHandWinner(Card playerCard, Card AICard)
{
    if(cardsSameSuit(playerCard, AICard)){
        if(playerCard.value() > AICard.value()){
            _player->addScore(playerCard.points() + AICard.points());
        }
        _AI->addScore(playerCard.points() + AICard.points());
    }
    else if(isCardBrisc(playerCard)){
        _player->addScore(playerCard.points() + AICard.points());
    }
    else if(isCardBrisc(AICard)){
        _AI->addScore(playerCard.points() + AICard.points());
    }
    else{
        if(playerCard.value() > AICard.value()){
            _player->addScore(playerCard.points() + AICard.points());
        }
        _AI->addScore(playerCard.points() + AICard.points());
    }
}

bool Game::isCardBrisc(Card card)
{
    return card.suit() == getBottomCardSuit();
}

bool Game::cardsSameSuit(Card playerCard, Card AICard)
{
    return playerCard.suit() == AICard.suit();
}

void Game::flipACoin()
{
    int randomNum;
    srand(time(NULL));
    randomNum = rand() % 1;
    if(randomNum == 0){
        std::cout << randomNum  << " rolled"<< std::endl;
    }
    else if(randomNum == 1) {
        std::cout << randomNum  << " rolled"<< std::endl;
    }
    else{
        std::cout << randomNum  << " Other"<< std::endl;

    }
}

void Game::determineWinner()
{
    if(_player->points() > _AI->points()){
        //Player wins
    }
    else if(_player->points() < _AI->points()){
        //AI wins
    }
    else{
        //Draw
    }
}
