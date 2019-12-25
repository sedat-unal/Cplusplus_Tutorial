#include <iostream>
using namespace std;

class ogrenci {
	private:
		
		string adi;
		int numara;
		float vize;
		float final;
		float ort;
		float ortalamaHesapla(){
			return 0.4*this->vize+0.6*this->final;
		}
	public:
		void degerAta(string , int , float , float );
		void degerYaz();
		
};

void ogrenci::degerAta(string a, int n, float v, float f){
		this->adi=a;
		this->numara=n;
		this->vize=v;
		this->final=f;
		this->ort=this->ortalamaHesapla();
}
void ogrenci::degerYaz(){
	cout<<"Adi:"<<this->adi<<endl;
	cout<<"Numarasi:"<<this->numara<<endl;
	cout<<"Ortalama:"<<this->ort<<endl;
}

typedef class ogrenci OGRENCI;
int main(int argc, char** argv){
	OGRENCI OGR1;
	OGR1.degerAta("Ahmet", 123, 67, 76);
	OGR1.degerYaz();
	return 0;
}
