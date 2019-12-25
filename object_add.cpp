#include <iostream>
using namespace std;
 
class Zaman
{
private:
    int saat;
    int dakika;
    int saniye;
 
public:
    void zamanEkle(Zaman T1,Zaman T2);
};
 
 
void Zaman::zamanEkle(Zaman T1,Zaman T2)
{
    T1.saat=12;
    T1.dakika=12;
    T1.saniye=12;
    T2.saat=12;
    T2.dakika=12;
    T2.saniye=51;
     
     
     
    this->saniye=T1.saniye+T2.saniye;
    this->dakika=T1.dakika+T2.dakika + (this->saniye/60);
    this->saat= T1.saat+T2.saat + (this->dakika/60);
    this->dakika %=60;
    this->saniye %=60;
    
    
    cout << "Z3 :\t"<< saat << ":" << dakika << ":" << saniye << endl;
}
 
 
int main()
{
    Zaman T1,T2,T3;
    T3.zamanEkle(T1,T2);
     
    return 0;
}
