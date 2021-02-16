#include "card.h"

Card::Card(int value, Suit suit)
    :  _value(value), _suit(suit)
{

}



Card::~Card(){

}

//Coverts card value to points based on Briscola rules
int Card::points()
{
    if(value() == 9){ //Ace
        return 11;
    }
    if(value() == 8){ //Three
        return 10;
    }
    if(value() == 8){ //King
        return 4;
    }
    if(value() == 6){ //Queen
        return 3;
    }
    if(value() == 5){ //Jack
        return 2;
    }
    return 0;
}

const QString Card::suit(){
    if(_suit == 0){
        return "Swords";
    }
    else if(_suit == 1){
        return "Club";
    }
    else if(_suit == 2){
        return "Cups";
    }
    else {
        return "Coins";
    }
}

const QString Card::toString(){
    QString cardDescription;
    if(_value == 0){
        cardDescription = "2";
    }
    if(_value == 1){
        cardDescription = "4";
    }
    if(_value == 2){
        cardDescription = "5";
    }
    if(_value == 3){
        cardDescription = "6";
    }
    if(_value == 4){
        cardDescription = "7";
    }
    if(_value == 5){
        cardDescription = "Jack";
    }
    if(_value == 6){
        cardDescription = "Queen";
    }
    if(_value == 7){
        cardDescription = "King";
    }
    if(_value == 8){
        cardDescription = "Three";
    }
    if(_value == 9){
        cardDescription = "Ace";
    }
    cardDescription += " of ";

    if(_suit == 0){
        cardDescription += "Swords";
    } 
    if(_suit == 1){
        cardDescription += "Clubs";
    }
    if(_suit == 2){
        cardDescription += "Cups";
    }

    if(_suit == 3){
        cardDescription += "Coins";
    }
    return cardDescription;
}

int Card::value()
{
    return _value;
}
