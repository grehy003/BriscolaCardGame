#include "mainwindow.h"

#include <QApplication>
#include <QtUiTools>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QLabel* ui_BriscolaSuit = w.findChild<QLabel*>("BriscolaSuit");
    ui_BriscolaSuit->setText("Horse man");
    w.update();


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
