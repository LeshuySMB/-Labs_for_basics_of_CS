#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x = -0.7,y,miny,minx;
  miny =sin(pow(x,2)+0.5*cos(x));
  for(x = -0.7; x<0.8;x+=0.2){
    y = sin(pow(x,2)+0.5*cos(x));
    if(miny>=y){
      miny = y;
      minx = x;
    }
    cout<<"x = "<<x<<"; y = "<<y<<";"<<endl;
  }
  cout<<endl;
  cout<<"При x = "<<minx<<", у принимает наименьшее значание: у = "<<miny;
}
