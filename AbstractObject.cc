#include "AbstractObject.h"

void AbstractObject::setValue(const std::double& newValue) {
    if (newValue < VALUE_MIN) value = VALUE_MIN;
    else value = newValue;
}
