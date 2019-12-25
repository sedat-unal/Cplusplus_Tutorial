#include <iostream>
using namespace std;

	class ogrenci{
		private:
			string adi;
			int no;
			static int sira;
		public:
			ogrenci(string s, int n):adi(s),no(n){
				this->sira++;
			}
			void yaz(){
				std::cout<<this->sira<<"\t"<<this->no<<"\t"<<this->adi<<endl;
			}
	};
	
int ogrenci::sira=0;
	
int main(int argc, char** argv){

	ogrenci* ogr[5];
	ogr[0]= new ogrenci("Sedat",123);
	ogr[0]->yaz();
	ogr[1]= new ogrenci("Berkay",345);
	ogr[1]->yaz();
	ogr[2]= new ogrenci("Housma",567);
	ogr[2]->yaz();
	ogr[3]= new ogrenci("Fucking",789);
	ogr[3]->yaz();
	ogr[4]= new ogrenci("World",912);
	ogr[4]->yaz();

	return 0;
}
