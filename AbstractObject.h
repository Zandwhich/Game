#ifndef ABSTRACT_OBJECT_H
#define ABSTRACT_OBJECT_H
#include <string>
class AbstractPlayer;

class AbstractObject {

    /****************/
    /*    Fields    */
    /****************/
  private:
    std::string name;
    double value;

  public:
    const double VALUE_MIN = 0.0;

    /****************/
    /* Constructors */
    /****************/
  public:
    AbstractObject(const std::string& name, const double& value): name{name},
        value{value} {}
    AbstractObject(const std::string& name): name{name}, value{0.0} {}

    /****************/
    /*    Methods   */
    /****************/
  public:
    /* Getters */
    const std::string& getName() inline const { return name; }
    const double& getValue() inline const { return value; }

    /* Setters */
    void setName(const std::name& newName) inline { name = newName; }
    void setValue(const std::double& newValue);

    /* Other */
    const bool equals(const Object& other) inline const {
        return (name == other.name) && (value == other.value);
    }
    virtual void use(AbstractPlayer& player) = 0;

};

#endif
