#include "game.h"

Game::Game()
{

}

Game::~Game(){
    delete _deck;
}

void Game::initialize(){
    _deck = new Deck;
    _deck->shuffle();
}

void Game::setHands(){
    for(int i = 0; i < 3; i++){
        _playerHand.push_back(*_deck->popTopCard());
        _AIHand.push_back(*_deck->popTopCard());
    }
}
