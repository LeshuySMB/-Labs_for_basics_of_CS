#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x,y=0;
  for(x = 9.1;          x<15.7;
      x+=0.2){
        y = (exp(-1*abs(x))+7,8*pow(sin(pow(x,2)), 3))/(0,5 + sqrt(x+x/3));
        cout<<"x = "<<x<<"; y = "<<y<<endl;
      }
}
