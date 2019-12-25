#include <iostream>
#include <string.h>
using namespace std;

class araba {
    private:
        
        string marka;
        int model;
        float km;
        float yakit;
        float kacyakar;
        float yakitHesapla(){
            return (this->yakit*6,80)/100;
        }

    public:
        void degerAta(string, int, float, float, float);
        void degerYaz();
};

void araba::degerAta(string a, int b, float c, float d, float e){

    this->marka = a;
    this->model = b;
    this->km = c;
    this->kacyakar = d;
    this->yakit = e;
    this->kacyakar = this->yakitHesapla();
}

void araba::degerYaz(){
    cout<<"Marka :"<<this->marka<<endl;
    cout<<"Model :"<<this->model<<endl;
    cout<<"Yakit :"<<this->yakit<<endl;
    cout<<"Kaç Yakar ? :"<<this->kacyakar<<endl;
}

typedef class araba ARABA;

int main(int argc, char** argv){

    ARABA ARB1;
    ARB1.degerAta("Mercedes",2000,350789,25,50);
    ARB1.degerYaz();
    return 0;
}
