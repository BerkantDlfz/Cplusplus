#include <iostream>
using namespace std;


class ComplexT{ /* A class to define complex numbers */
    float re,im;
public:
    ComplexT(double n,double p){
        re=n; im=p;
    }
     // other member functions
       bool operator>(const ComplexT&) const ; // header of operator> function


    friend ostream &operator<<( ostream &output, const ComplexT &D ) {
        output  <<D.re << ","<<  D.im <<endl;
        return output;
    }
};
/* The Body of the function for operator + */
bool ComplexT::operator>(const ComplexT& z) const
{
    float f1 = re * re + im * im;
    float f2 = z.re * z.re + z.im * z.im;
    if (f1 > f2) return true;
    else return false;
}
// template function
template <class type>
const type & MAX(const type &v1, const type & v2)
{
    if (v1 > v2) return v1;
    else return v2;
}

int main()
{
    int i1=5, i2= -3;
    char c1='D', c2='N';
    float f1=3.05, f2=12.47;
    ComplexT z1(1.4,0.6), z2(4.6,-3.8);
    cout << MAX(i1,i2) << endl;
    cout << MAX(c1,c2) << endl;
    cout << MAX(f1,f2) << endl;
    cout << MAX(z1,z2) << endl;

}