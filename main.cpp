#include "mainwindow.h"

#include <QApplication>
#include <QtUiTools>
#include <deck.h>
#include <list>
#include <iostream>
#include <game.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QLabel* ui_CurrentSuit = w.findChild<QLabel*>("CurrentSuit");
    QLabel* ui_CurrentBottomCard = w.findChild<QLabel*>("CurrentBottomCard");
    QLabel* ui_CurrentOpponentPlay = w.findChild<QLabel*>("CurrentOpponentPlay");
    QLabel* ui_CurrentOpponentPoints = w.findChild<QLabel*>("CurrentOpponentPoints");
    QLabel* ui_CurrentYourPoints = w.findChild<QLabel*>("CurrentYourPoints");
    QPushButton* ui_ButtonCard1 = w.findChild<QPushButton*>("ButtonCard1");
    QPushButton* ui_ButtonCard2 = w.findChild<QPushButton*>("ButtonCard2");
    QPushButton* ui_ButtonCard3 = w.findChild<QPushButton*>("ButtonCard3");

    Game game;
    game.initialize();

    ui_CurrentBottomCard->setText(game.getBottomCard());
    ui_CurrentSuit->setText(game.getBottomCardSuit());
    ui_ButtonCard1->setText(game.playerHand().at(0).toString());
    ui_ButtonCard2->setText(game.playerHand().at(1).toString());
    ui_ButtonCard3->setText(game.playerHand().at(2).toString());

    //Game loop

    w.update();

    std::vector<Card> hand;





    //Game start here
    /* Deck shuffled
     * Top card picked as briscola
     * Suit set to briscola suit
     * Bottom card label set to card picked
     * Cards delt to each player
     * Human player goes first picks a card
     * AI player picks random card
     * Winning card determined
     * Points calculated
     * -number of cards added to card piles
     * Winning player goes first
     * repeat till deck runs out of cards
     * Winner decided
     * Play again?
     *
     *
     */





    return a.exec();
}
