//5. WAP which illustrates the use of public and private access modifiers.
#include<iostream>
#include<string.h>
using namespace std;

class Student{
	public:
		int id;
		char name[100];
		int age;
	private:
		int absent_number;
		int present_number;
		char behaviour;	
};

int main()
{
	Student s1;
	
	cout<<"Enter your id number:"<<endl;
	cin>>s1.id;
	
	cout<<"Enter your name:"<<endl;
	cin>>s1.name;
	
	cout<<"Enter your age:";
	cin>>s1.age;
	
	cout<<s1.id<<endl;
	cout<<s1.name<<endl;
	cout<<s1.age;
	
	return 0;
}