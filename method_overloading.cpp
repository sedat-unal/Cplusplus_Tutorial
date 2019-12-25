#include <iostream>
using namespace std;

class cokgen{
	private:
		int kenar1;
		int kenar2;
		int kenar3;
		int kenar4;
		int kenar5;
		int cevre;
	
	public:
		cokgen(int a, int b, int c):kenar1(a),kenar2(b),kenar3(c),kenar4(0),kenar5(0){
			cevreHesap();
		}
		cokgen():kenar1(0),kenar2(0),kenar3(0),kenar4(0),kenar5(0){
			cevreHesap();
		}
		cokgen(int a, int b, int c, int d):kenar1(a),kenar2(b),kenar3(c),kenar4(d),kenar5(0){
			cevreHesap();
		}
		void cevreHesap(){
			this->cevre = this->kenar1 + this->kenar2 + this->kenar3 + this->kenar4 + this->kenar5;
		}
		
		void yaz(){
			cout<<"Cevre:\t"<<cevre<<endl;
		}
};


int main(){
	
	cokgen x();
	cokgen ucgen(10,20,30);
	cokgen dortgen(10,20,30,40);
	ucgen.yaz();
	dortgen.yaz();
		
	
	
	return 0;
}
