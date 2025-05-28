#include <iostream>
#include <src/car.h>
#include <src/lorry.h>

 int count(const car &car)
{
    return car.count_;
}
int main()
{
    car Renault(
        "Clio",
        4,
        101);

    std::cout << "car: " << Renault.getTrademark() << " has power " << Renault.getPower() << " on " << Renault.getCylinder() << " cylinders" << std::endl;
    car Scoda (
        " Scenic",
        4);

    std::cout << "car: " << Scoda.getTrademark() << " has power " << Scoda.getPower() << " on " << Scoda.getCylinder() << " cylinders" << std::endl;

    Lorry Next(
        "Valday",
        16,
        133,
        3000);

        std::cout << "lorry: " << Next.getTrademark() << " has power " << Next.getPower() << " on " << Next.getCylinder() << " cylinders"
              << " and can carry " << Next.getCarrying() << " tonnes" << std::endl;
// создаем грузовик на основе Next
              Lorry Gazel{Next};
    // count
    std::cout << "make " << count(Next) << " cars" << std::endl;
   return 0;
}