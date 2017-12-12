#ifndef ABSTRACT_BASIC_PLAYER_H
#define ABSTRACT_BASIC_PLAYER_H
#include "AbstractPlayer.h"
#include <string>

class AbstractBasicPlayer: public AbstractPlayer {

    /****************/
    /*    Fields    */
    /****************/
  public:
    static const int HEALTH_MAX = 100;
    static const int HUNGER_MAX = 100;
    static const int THIRST_MAX = 100;
    static const int SLEEP_MAX = 16;
    static const int HEALTH_MIN = 0;
    static const int HUNGER_MIN = 0;
    static const int THIRST_MIN = 0;
    static const int SLEEP_MIN = 0;
    static const double MONEY_MIN = 0.0;

    /****************/
    /* Constructors */
    /****************/
  public:
    AbstractBasicPlayer(const int& health, const int& hunger, const int& thirst,
        const int& sleep, const double& money, const std::string& name):
        AbstractPlayer{health, hunger, thirst, sleep, money, name} {}
    AbstractBasicPlayer(const std::string& name, const double& money):
        AbstractPlayer{HEALTH_MAX, HUNGER_MAX, THIRST_MAX, SLEEP_MAX, money,
        name} {}
    AbstractBasicPlayer(const std::string& name): AbstractPlayer{HEALTH_MAX,
        HUNGER_MAX, THIRST_MAX, SLEEP_MAX, 5.00, name} {}
    AbstractBasicPlayer(): AbstractPlayer{HEALTH_MAX, HUNGER_MAX, THIRST_MAX,
        SLEEP_MAX, 5.00, ""} {}
    virtual ~AbstractBasicPlayer() = 0;

    /****************/
    /*    Methods   */
    /****************/
  private:
    /* Setters */
    void doSetHealth(const int& newHealth) override;
    void doSetHunger(const int& newHunger) override;
    void doSetThirst(const int& newThirst) override;
    void doSetSleep(const int& newSleep) override;
    void doSetMoney(const double& newMoney) override;

};

#endif
