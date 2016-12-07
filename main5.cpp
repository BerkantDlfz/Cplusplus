#include <iostream>

using namespace std;

class nokta
{
public:
    nokta()
    {

    }
    nokta(int px,int py)
    {x=px; y=py;
    }

    friend ostream &operator<<( ostream &output, const nokta &D ) {
        output << "x : " << D.x << " y : " << D.y;
        return output;
    }
    nokta operator+(nokta p)
    {
        nokta donecek;
        donecek.x=x+p.x;
        donecek.y=y+p.y;
        return donecek;
    }
private:
    int x,y;
};


int main()
{
    nokta n1(10,10);
    nokta n2(20,20);
    nokta toplam;
    toplam=n1+n2;
    cout<<toplam;
}


