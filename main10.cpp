
#include <iostream>
#include <string>

using namespace std;

class Calisan{
public:
    Calisan(string adVer,float OdemeMiktari ){
        isim=adVer;
        odemeOrani=OdemeMiktari;
    }
    string AdVer() const{
        return isim;
    }
    float OdemeOraniVer() const{
        return odemeOrani;
    }
    float Odeme(float CalisilanSaat) const{
        return CalisilanSaat*odemeOrani;
    }

protected:
    string isim;
    float odemeOrani;
};

class Yonetici:public Calisan {
public:
         Yonetici(string Ad, float OdemeYuzdesi, bool Ayliklimi):Calisan(Ad,OdemeYuzdesi){
             aylikli=Ayliklimi;
         }

         bool Ayliklidir() const{
             return aylikli;

         }
         float Odeme(float CalisilanSaat){
             if(aylikli)
                 return odemeOrani;

                 return Calisan::Odeme(CalisilanSaat);
         }



protected:
         bool aylikli;
};



int main(){

    Calisan isci("Berkant Dilfaz",20.0);
    Yonetici Bey("Ali Bey",12000, true);
    cout << "Calisan Kisi    "<<isci.AdVer()<<endl;
    cout <<"maasi  =   "<<isci.Odeme(20.0)<<endl;

    cout <<"Calisan Kisi  "<<Bey.AdVer()<<endl;
    cout << "maasi =   "   << Bey.Odeme(10)<< endl;
}