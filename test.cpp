#include <iostream>
using namespace std;

class Space{
  int x;
  int y;
  int z;
public:
  void getdata(int a, int b, int c);
  void display();
  void operator-(); 
};

void Space::getdata(int a, int b, int c){
  x = a;
  y = b;
  z = c;
}

void Space::display(){
  cout << x << " ";
  cout << y << " ";
  cout << z << "\n";
}

void Space::operator-(){
  x = -x;
  y = -y;
  z = -z;
}

int main(){
  Space S;
  S.getdata(10,-20,30);
  cout << "S: " ;
  S.display();
  -S;
  cout << "S: ";
  S.display();
  return 0;
}
  
