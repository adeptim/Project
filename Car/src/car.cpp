#include <src/car.h>
#include "car.h"

void car::setTrademark(const string &trademark)
{
    trademark_ = trademark;
}

const string &car::getTrademark() const
{
    return trademark_;
}

void car::setCylinder(int cylinder)
{
    cylinder_ = cylinder;
}

int car::getCylinder() const
{
    return cylinder_;
}

void car::setPower(int power)
{
    power_ = power;
}

int car::getPower() const
{
    return power_;
}