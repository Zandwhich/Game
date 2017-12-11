#ifndef ABSTRACT_PLAYER
#define ABSTRACT_PLAYER
#include <string>

class AbstractPlayer {

    /****************/
    /*    Fields    */
    /****************/
  private:
    int health, hunger, thirst, sleep;
    double money;
    std::string name;

  public:
    const int HEALTH_MAX = 100;
    const int HUNGER_MAX = 100;
    const int THIRST_MAX = 100;
    const int SLEEP_MAX = 16;
    const int HEALTH_MIN = 0;
    const int HUNGER_MIN = 0;
    const int THIRST_MIN = 0;
    const int SLEEP_MIN = 0;
    const double MONEY_MIN = 0.0;

    /****************/
    /* Constructors */
    /****************/
  public:
    AbstractPlayer(const int& health, const int& hunger, const int& thirst,
        const int& sleep, const double& money, const std::string& name):
        health{health}, hunger{hunger}, thirst{thirsts}, sleep{sleep},
        money{money}, name{name} {}
    AbstractPlayer(const std::string& name, const double& money):
        health{HEALTH_MAX}, hunger{HUNGER_MAX}, thirst{THIRST_MAX},
        sleep{SLEEP_MAX}, money{money}, name{name} {}
    AbstractPlayer(const std::string& name): health{HEALTH_MAX},
        hunger{HUNGER_MAX}, thirst{THIRST_MAX}, sleep{SLEEP_MAX}, money{5.00},
        name{name} {}
    AbstractPlayer(): health{HEALTH_MAX}, hunger{HUNGER_MAX},
        thirst{THIRST_MAX}, sleep{SLEEP_MAX}, money{5.00}, name{""} {}
    ~AbstractPlayer() = default;

    /****************/
    /*    Methods   */
    /****************/
  public:
    /* Getters */
    const int& getHealth() const inline { return health; }
    const int& getHunger() const inline { return hunger; }
    const int& getThirst() const inline { return thirst; }
    const int& getSleep() const inline { return sleep; }
    const double& getMoney() const inline { return money; }
    const std::string& getName() const inline { return name; }

    /* Setters */
    void setHealth(const int& newHealth);
    void setHunger(const int& newHunger);
    void setThirst(const int& newThirst);
    void setSleep(const int& newSleep);
    void setMoney(const double& newMoney);

    const bool equals(const AbstractPlayer& other) inline const {
        return (health == other.health) && (hunger == other.hunger) &&
            (thirst == other.thirst) && (sleep == other.sleep) &&
            (money == other.money) && (name == other.name);
    }

};

#endif
