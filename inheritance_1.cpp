#include <iostream>

using namespace std;
class ders{
	public:
		string adi;
		int kodu;
		ders():adi(""), kodu(0){
		}
		ders(string ad, int k):adi(ad),kodu(k){
		}
};
class personel{
	protected:
		string adi;
		int sicil;
  		int saat;
    	int maas;
    	personel(int h){// constructor
        	saat=h;
        	maas=maasHesap();
    	}
    	int maasHesap(){
        	return 10*saat;
    	}
    public:
    	personel(string a, int h):personel(h){// constructor	
        	adi=a;   
    	}
    	personel(string a, int s, int h):personel(a,h){// constructor
        	sicil=s;   
    	}    	
    	void yaz(){
       	 cout<<"Adi:"<<adi<<"\t"<<"Sicil:"<<sicil<<"\t"<<"Maas:"<<maas<<endl;
    	}	
};

class akademik:public personel{
	protected:
		string unvan;
	public:
		akademik(string a,int s, int h, string u ):personel(a,s,h){
        	//using personel::personel(a,s,h);
        	unvan=u; 
    	}
    	void yaz(){
       	 this->personel::yaz();
       	 cout<<"Unvan:"<<unvan<<endl;
    	}
};
class idari:public personel{
	protected:
		string deparman;
	public:
		idari(string a,int s, int h, string d ):personel(a,s,h){
			deparman=d;
		}
		void yaz(){
       	 this->personel::yaz();
       	 cout<<"Deparman:"<<deparman<<endl;
    	}
};
class asistan:public akademik, idari{
	public:
	 ders dersler[3];
	asistan(string a,int s, int h, string d, string u, ders x[]):
	akademik(a,s,h,u),idari(a,s,h,d) {
			*dersler=*x;
	}
		void yaz(){
			this->akademik::yaz();
			this->idari::yaz();
			
			for(int i=0;i<3;i++)
				cout<<dersler[i].adi;
		}
	
};

int main(int argc, char** argv) {
	akademik per1("Ahmet",123,10,"Prof");
	per1.yaz();
	ders dersler[3];
	dersler[0].adi="NYP";
	dersler[0].kodu=111;
	asistan ast("Ahmet",123,10,"Prof","ogr isl", dersler);
	ast.yaz();
	
	return 0;
}
