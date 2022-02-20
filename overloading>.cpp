#include<iostream>
using namespace std;

class Sample{
private:
	int greater;
public:
	Sample(int r){
		greater = r;
	}
	void operator>(Sample &obj){
		if(greater>obj.greater){
			cout<< "Greater number is: "<<greater;

		}
		else{
			cout<<" Greater number is: "<<obj.greater;
		}
	}
	void test(const char *str){
		printf("%s\n", str);
	}
};
int main(){
	Sample c1(10);
	Sample c2(2);
	c1>c2;
	c1.test("\n 100");
	return 0;
}