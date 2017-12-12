#ifndef ABSTRACT_PLAYER_H
#define ABSTRACT_PLAYER_H
#include <string>

class AbstractPlayer {
    /****************/
    /*    Fields    */
    /****************/
  protected:
    int health, hunger, thirst, sleep;
    double money;
    std::string name;

    /****************/
    /* Constructors */
    /****************/
  public:
    AbstractPlayer(const int& health, const int& hunger, const int& thirst,
        const int& sleep, const double& money, const std::string& name):
        health{health}, hunger{hunger}, thirst{thirsts}, sleep{sleep},
        money{money}, name{name} {}
    virtual ~AbstractPlayer() = 0;

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
    void setHealth(const int& newHealth) { doSetHealth(newHealth); }
    void setHunger(const int& newHunger) { doSetHunger(newHunger); }
    void setThirst(const int& newThirst) { doSetThirst(newThirst); }
    void setSleep(const int& newSleep) { doSetSleep(newSleep); }
    void setMoney(const double& newMoney) { doSetMoney(newMoney); }

    /* Other */
    virtual const bool operator==(const AbstractPlayer& other) inline const {
        return (health == other.health) && (hunger == other.hunger) &&
            (thirst == other.thirst) && (sleep == other.sleep) &&
            (money == other.money) && (name == other.name);
    }

  private:
    /* Setters */
    virtual void doSetHealth(const int& newHealth) = 0;
    virtual void doSetHunger(const int& newHunger) = 0;
    virtual void doSetThirst(const int& newThirst) = 0;
    virtual void doSetSleep(const int& newSleep) = 0;
    virtual void doSetMoney(const double& newMoney) = 0;
};

#endif
