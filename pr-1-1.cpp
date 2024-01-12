//1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

#include <iostream>
using namespace std;

class Distance {
	public:
    	int feet;
    	int inch;
    	int sum;
};

int main() {
	Distance d1,d2,sum;
	
	cout<<"Enter for 1st distance"<<endl;
    cout<<"Enter feet: ";
    cin>>d1.feet;
    cout<<"Enter inch: ";
    cin>>d1.inch;

    cout<<"Enter for 2nd distance"<<endl;
    cout<<"Enter feet: ";
    cin>>d2.feet;
    cout<<"Enter inch: ";
    cin>>d2.inch;

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

if(sum.inch>12) {

        sum.feet +=sum.inch/12;
        sum.inch -=sum.inch/12*12;
    } 
    cout<<endl<<"Sum ="<<sum.feet<<"feet "<<sum.inch<<"inch";
    return 0;
}
