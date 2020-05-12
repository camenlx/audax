//
// Created by Kolby on 6/19/2019.
//


#include <startoptions.h>
#include <ui_startoptions.h>




StartOptions::StartOptions(QWidget *parent)
        : QWidget(parent), ui(new Ui::StartOptions)
        {
    ui->setupUi(this);

    ui->welcomeLabel2->setText(tr(
        "The 24 word recovery phrase is the master key generated by your "
        "wallet. "
        "All of your private keys in Audax are generated from and tied to "
        "the 24 word recovery phrase."
        "<br><br>Remember that the Audax team has <b>no way to restore lost "
        "passwords or seeds!</b> "
        "It's very important that you store these safely yourself."
        "<br><br>Note: Your passphrase can always unlock uncorrupted wallet files, "
        "but in the event of corruption only a seed phrase can restore the "
        "wallet. "
        "Your seed word recovery phrase will always be able to restore the "
        "wallet from scratch (without the passphrase or wallet file) by "
        "choosing Restore Wallet below and re-entering your 24 word recovery "
        "phrase."));
}

int StartOptions::getRows(){
    rows = 4;
    return rows;
};

StartOptions::~StartOptions() {
    delete ui;
}
