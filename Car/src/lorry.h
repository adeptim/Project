#pragma once
#include <src/car.h>
#include <string>

using namespace std;

/// @brief грузовик - подтип класса car
class Lorry : public car
{
protected:
    /// @brief грузоподъемность тонна
    int carrying_;

public:
    /// @brief конструктор по умолчанию
    Lorry()
        : car(), carrying_(1)
{}
          // @brief конструктор c параметрами
          /// @param trademark
          /// @param cylinders
          /// @param carrying
          Lorry(const string &trademark, int cylinder, int carrying)
        : car(trademark, cylinder), carrying_(carrying)
{}
          /// @brief конструктор c параметрами
          /// @param trademark
          /// @param cylinders
          /// @param powers
          /// @param carrying
          Lorry(const string &trademark, int cylinder, int powers, int carrying)
        : car(trademark, cylinder, powers), carrying_(carrying)
{}
          /// @brief конструктор копирования
          ///  @param new_Lorry
          Lorry(const Lorry &new_Lorry)
        : car(new_Lorry.trademark_, new_Lorry.cylinder_, new_Lorry.power_), carrying_(new_Lorry.carrying_)
{

}
         /// @brief деструктор
         ~Lorry()
       
{
   operator-- ();
    
}
          /// @brief назначить грузоподъемность
          /// @param carrying
          void setCarrying(int carrying);

    /// @brief получить грузоподъемность
    /// @return
    int getCarrying() const;
};