#include "AbstractFood.h"

void AbstractFood::setCalories(const int& newCalories) {
    if (newCalories < 0) calories = 0;
    else calories = newCalories;
}
