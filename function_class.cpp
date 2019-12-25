#include <iostream>
#include <string.h>
using namespace std;

class ders{
	
	public:
		string dAdi;
		string dKodu;
		float vize;
		float final;
		float ortalama;
		
	public: 
		ders(string a, string k,float v,float f):dAdi(a),dKodu(k),vize(v),final(f){
			ortalama = ortalamaHesap();
		};
		float ortalamaHesap(){
			return 0.4*this->vize+0.6*this->final;
		}
	};

class ogrenci{
	private:
		string adi;
		int numara;
		ders *Dersler;
		float ort;

	public:
		ogrenci(string a,int n, ders *d):adi(a), numara(n), Dersler(d){
			ortalamaHesap();
		};
		
	void ortalamaHesap(){
		this->ort = (Dersler[0].ortalama + Dersler[1].ortalama + Dersler[2].ortalama + Dersler[3].ortalama)/4;
		}
	void degerYaz();		
};

void ogrenci::degerYaz(){
	cout<<"Adi:\t"<<this->adi<<endl;
	cout<<"Numarasi:\t"<<this->numara<<endl;
	cout<<"Ortalama:\t"<<this->ort<<endl;
}

typedef class ogrenci OGRENCI;
int main(int argc, char** argv){
	ders D[4]={ders("Bilg Prog","EBLG102",65,78),ders("NYP","EBLG202",65,58),ders("Web Prog","EBLG302",65,48),ders("Isl Sist","EBLG502",65,78),};
	
	OGRENCI ogr1("Ahmet",123,D);
	ogr1.degerYaz();

	
	return 0;
}
