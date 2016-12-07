#include <iostream>

using namespace std;

/* A class to define complex numbers */
class ComplexT{
    float real,img;
public:
     // Member functions
    ComplexT operator+(ComplexT&); // header of operator+ function
};
/* The Body of the function for operator + */
ComplexT ComplexT::operator+(ComplexT& z)
{
    ComplexT result;
    result.real = real + z.real;
    result.img = img + z.img;
    return result;
}
void main()
{
    ComplexT z1,z2,z3;
     // Other operations
    z3=z1+z2;
}
like z3 = z1.operator+(z2);