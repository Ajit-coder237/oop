#include<iostream>
using namespace std;

class Time{
private:
	int hours;
	int minutes;

public:
	Time(){
		hours = 0;
		minutes = 0;
	}
	Time(int h, int m){
		hours = h; minutes = m;
	}
	void displaytime(){
		cout<<"H: "<<hours<<" M: "<<minutes<<endl;
	}

	Time operator++(){
		++minutes;
		if(minutes>=60){
			++ hours;
			minutes -=60;
	
		}
		return Time(hours, minutes);
	}
	Time operator++(int){
		++minutes;
		if(minutes>=60){
			++ hours;
			minutes -=60;
	
		}
		return Time(hours, minutes);
	}

};
int main(){
	Time T1(11,59),T2(5,6);
	++T1;
	T1.displaytime();
	T1++;
	T1.displaytime();
	T2.displaytime();
	return 0;
}