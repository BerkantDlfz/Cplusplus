//
// Created by berkant on 23.11.2016.
//

#ifndef DENEME2_DENEME2_H
#define DENEME2_DENEME2_H

#endif //DENEME2_DENEME2_H

#include <iostream>
#include <string>
using namespace std;

class Calisan{
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
