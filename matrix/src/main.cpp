#include <src/matrix.h>
#include <iostream>

int main()
{
    math::Matrix m(3, 3);
    m(0, 0) = 1.;
    m(1, 1) = 1.;
    std::cout << m << std::endl;
    math::Matrix m1(3, 3);
    m1(0, 0) = 5.;
    m1(1, 1) = 5.;
    std::cout << m1 << std::endl;
    //  std::cout << std::endl
    //           << "Sum of matrices m and m1 is:" << std::endl;
    math::Matrix m2 = m + m1;
    std::cout << m2 << std::endl;

    math::Matrix m3 = m - m1;
    std::cout << m3 << std::endl;

    math::Matrix m4 = m * m1;
    std::cout << m4 << std::endl;
     math::Matrix m5;

    std::cout << "Enter dimensions of the matrix" << std::endl;
    std::cin>>m5;
    m5(1,1)=5;
      std::cout << m5 << std::endl;
    m4 += m5;
    std::cout << m4 << std::endl;
    m4 -= m5;
    std::cout << m4 << std::endl;
    m4 *= 2;
  std::cout << m4 << std::endl;
    return 0;
}