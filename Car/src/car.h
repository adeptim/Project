#pragma once
#include <string>

using namespace std;
/// @brief базовый класс
class car
{
private:
    /// @brief счетчик объектов класса
    static int count_;

protected:
    /// @brief марка
    string trademark_;
    /// @brief число цилиндров
    int cylinder_;
    /// @brief мощность
    int power_;

public:
    /// @brief конструктор по умолчанию
    /// @brief список иницилизации
    car()
        : trademark_("Лада"), cylinder_(2), power_(110)
    {
        ++count_;
    }
    /// @brief конструктор c параметрами
    /// @param trademark
    /// @param cylinders
    car(const string &trademark, int cylinder)
        : trademark_(trademark), cylinder_(cylinder), power_(115)
    {
        ++count_;
    }
    /// @brief конструктор c параметрами
    /// @param the_trademark
    /// @param cylinders
    /// @param powers
    car(const string &the_trademark, int cylinder, int power)
        : trademark_(the_trademark), cylinder_(cylinder), power_(power)
    {
        ++count_;
    }
    /// @brief конструктор копирования
    ///  @param new_car
    car(const car &new_car)
        : trademark_(new_car.trademark_), cylinder_(new_car.cylinder_), power_(new_car.power_)
    {
        ++count_;
    }
    /// @brief деструктор
    ~car()
    {
        --count_;
    };
    /// @brief количество созданых объектов
    /// @return
    friend int count();
    
    car &operator--()
    {
        count_ -= 1;
        return *this;
    }
friend int count(const car& car);
    
     
   
/// @brief назначить марку
/// @param trademark
/// cсылка на перемнную которая не меняет переменную
void setTrademark(const string &trademark);

/// @brief получить марку
/// @return
/// возвращаем константную ссылку функция констатная
const string &getTrademark() const;

/// @brief назначить количество цилиндров
/// @param Cylinder
void setCylinder(int cylinder);

/// @brief получить количество цилиндров
/// @return
int getCylinder() const;

/// @brief назначить мощность
/// @param power
void setPower(int power);

/// @brief получить значение мощности
/// @return
int getPower() const;
}
;
/// определение счетчика
inline int car::count_ = 0;