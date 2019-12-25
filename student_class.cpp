#include <iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		float salary;
		
		Student(int i, string n, float s){
			id = i;
			name = n;
			salary = s;
		}
		
		void display(){
			cout<<"id : "<<id<<"\tName : "<<name<<"\tSalary : "<<salary<<endl;
		}
		
};

int main(void){
		Student s1 = Student(101,"Sedat", 3000);
		Student s2 = Student(102, "Ali", 2500);
		s1.display();
		s2.display();
return 0;
}
