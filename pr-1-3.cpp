//3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.
#include <iostream>
using namespace std;

class Time {
	public:
    	int second;
    	int minute;
    	int hour;
};
int main(){
	Time t;
	
	cout<<"Enter seconds:";
	cin>>t.second;
	cout<<"enter minutes:";
	cin>>t.minute;
	cout<<"enter hours:";
	cin>>t.hour;
	
	if(t.second>=60){
		t.minute++;
		t.second=t.second-60;
	}
	if(t.minute>=60){
		t.hour++;
		t.minute=t.minute-60;
	}
	
	cout<<"second = "<<t.second<<endl;
	cout<<"minute = "<<t.minute<<endl;
	cout<<"hour = "<<t.hour;
	return 0;
}