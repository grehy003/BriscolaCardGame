#include "game.h"

Game::Game()
{

}

Game::~Game()
{
    delete _deck;
}

void Game::initialize()
{
    _deck = new Deck;
    _deck->shuffle();
}

void Game::pickUpCard(Player* player)
{
    player->pickUpCard(_deck->popTopCard());
}

void Game::play()
{
    initialize();
    determineFirstPlay();

    //Game loop
    while(!_deck->isEmpty()){
        while(!_player->hasFullHand()){
            pickUpCard(_player);
            pickUpCard(_AI);
        }
        //Human goes first
        if(playerWonLastHand){
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


void Game::determineHandWinner(Card playerCard, Card AICard)
{
    if(cardsSameSuit(playerCard, AICard)){
        if(playerCard.value() > AICard.value()){
            //Player win
        }
        //AI win
    }
    else if(isCardBrisc(playerCard)){
        //Player win
    }
    else if(isCardBrisc(AICard)){
        //AI win
    }
    else{
        if(playerCard.value() > AICard.value()){
            //Player win
        }
        //AI win
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

void Game::determineWinner()
{

}
