#include "AbstractPlayer.h"

/* Setters */
void AbstractPlayer::doSetHealth(const int& newHealth) {
    if (newHealth > HEALTH_MAX) health = HEALTH_MAX;
    else if (newHealth < HEALTH_MIN) health = HEALTH_MIN;
    else health = newHealth;
}

void AbstractPlayer::doSetHunger(const int& newHunger) {
    if (newHunger > HUNGER_MAX) hunger = HUNGER_MAX;
    else if (newHunger < HUNGER_MIN) hunger = HUNGER_MIN;
    else hunger = newHunger;
}

void AbstractPlayer::doSetThirst(const int& newThirst) {
    if (newThirst > THIRST_MAX) thirst = THIRST_MAX;
    else if (newThirst < THIRST_MIN) thirst = THIRST_MIN;
    else thirst = newThirst;
}

void AbstractPlayer::doSetSleep(const int& newSleep) {
    if (newSleep > SLEEP_MAX) sleep = SLEEP_MAX;
    else if (newSleep < SLEEP_MIN) sleep = SLEEP_MIN;
    else sleep = newSleep;
}

void AbstractPlayer::doSetMoney(const double& newMoney) {
    if (newMoney < MONEY_MIN) money = MONEY_MIN;
    else money = newMoney;
}
