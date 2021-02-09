#include "deck.h"
#include <ctime>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

Deck::Deck()
{
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            _cards.push_back(Card(j,(Suit)i));
        }
    }
}

Deck::~Deck(){

}

void Deck::shuffle(){
    srand((unsigned) time(0));
    for(int i = 0; i < 200; i++){
        int random = rand() % 39;
        Card c = _cards.at(random);
        _cards.erase(_cards.begin() + random);
        _cards.push_back(c);
    }
}

QString Deck::toString(){
    QString deckString;
    for(Card &card: _cards){
        deckString += card.toString();
    }
    return deckString;
}

Card Deck::popTopCard(){
    Card c = Card(_cards.front());
    _cards.erase(_cards.begin());
    return c;
}

Card* Deck::popBottomCard(){
    return &_cards.back();
}

bool Deck::isEmpty(){
    return _cards.empty();
}

