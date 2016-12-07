//
// Created by berkant on 22.11.2016.
//
#ifndef DENEME2_DENEME_H
#define DENEME2_DENEME_H

#endif //DENEME2_DENEME_H


#include <iostream>
using namespace std;
class Calisan{
public:
    Calisan(){}
    Calisan(string nm){
        isim=nm;

    }

    void isimyazdir(){
        cout<<isim<<endl;
    }

protected:

    string isim;
};



class UcretliCalisan : public  Calisan
{ public:
    UcretliCalisan(){}
    UcretliCalisan( string nm){
        isim=nm;



    };
    float UcretBelirle(float x){
        ucret = x;
        return ucret;
    }
    float SureBelirle(float y){
        saat = y;
        return saat;}
    virtual float odemehesapla(){


        return saat * ucret;
    }

    virtual void isimyazdir(){
        cout<<isim<<endl;
    }
protected:
    float ucret,saat;

};

class Satis:public UcretliCalisan{
protected:
    float komisyon,satis_sayisi;
public:
    Satis(string nm){
        isim=nm;
    }
    float komsyonBelirle(float a){
        komisyon=a;
    }
    float satisBelirle(float b){
        satis_sayisi=b;
    }
    float odemehesapla(){

        return UcretliCalisan::odemehesapla()+komisyon*satis_sayisi;
    }

    void isimyazdir(){
        cout<<isim<<endl;
    }

};

