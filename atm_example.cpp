#include <iostream>
using namespace std;

class Musteri {

		float kartnum;
		float pin = 1234;
	
	public:
		string adi = "Sedat";
		string adres = "uskudar";
		void sifreDogrula();
		int i;
};

class Hesap {
	
	float bakiye = 1000;
	
	public:
		int a;
		float numara;
		void paraYatir();
		void paraCek();
		float islem;
	
};
void Musteri::sifreDogrula(){

	cout<<"Pin Giriniz :\t"<<endl;
	cin>>this->i;
	if(this->i == pin){
		cout<<"Pin Dogru\n\n"<<endl;
	} else {
		cout<<"Pin Yanlis\n\n"<<endl;
		exit(-1);
		}
}

void Hesap::paraYatir(){
	
		
	cout<<"Yatirilacak tutari giriniz :"<<endl;
	cin>>this->a;
	bakiye=bakiye+this->a;
	cout<<"Islem basarili. Yeni bakiye :"<<this->bakiye<<endl;
}			

void Hesap::paraCek(){

	cout<<"Cekilecek tutari giriniz :"<<endl;
	cin>>this->a;
	
	if(this->a > bakiye){
	
		cout<<"Yetersiz bakiye tekrar deneyiniz\n"<<endl;
    }	else {
		
		bakiye=bakiye-this->a;
		cout<<"Islem basarili. Yeni bakiyeniz :"<<this->bakiye<<endl;
	}
}	
		
typedef class Musteri MUSTERI;
typedef class Hesap HESAP;

int main(int argc, char** argv){
	int islem;
	
	MUSTERI MR1;
	HESAP HSP1;
	MR1.sifreDogrula();
	
	cout<<"Yapmak istediginiz islemi seciniz.\n1) Para Yatirma\n2) Para Cekme\n"<<endl;
	cin>>islem;		
	if(islem ==1)
	{
		HSP1.paraYatir();
	}else 
	{
		HSP1.paraCek();
	}
	
	return 0;
}		
