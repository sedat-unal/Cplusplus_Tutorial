#include <iostream>

using namespace std;
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
	 ders[] dersler=new ders[3];
	
};

int main(int argc, char** argv) {
	akademik per1("Ahmet",123,10,"Prof");
	per1.yaz();
	return 0;
}
