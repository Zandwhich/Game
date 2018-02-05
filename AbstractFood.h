#ifndef ABSTRACT_FOOD_H
#define ABSTRACT_FOOD_H

#include <string>
#include "AbstractObject.h"

class AbstractFood: public AbstractObject {

    /****************/
    /*    Fields    */
    /****************/
  private:
    int calories;

    /****************/
    /* Constructors */
    /****************/
  public:
    AbstractFood(const std::string& name, const double& value,
         const int& calories): AbstractObject{name, value}, calories{calories} {}

    /****************/
    /*    Methods   */
    /****************/
    // Getters
  public:
    const double& getCaolries() const inline { return calories; }

    // Setters
  public:
    virtual void setCalories(const int& calories);

    // Others
  public:
    virtual void use(AbstractPlayer& player);


};

#endif
