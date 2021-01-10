#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n=0;
  for(float j = -3;j<=1;j+=0.1){
    n+=1;
  }
  double a[n];
  int k = 0;
  for(float x = -3;x<=1;x+=0.1){
    a[k] = 3*x*x*x-2*x*x+5;
    k+=1;
  }
  cout<<"Полученные значения: "<<endl;
  for(int i = 0; i<n;++i){
    cout<<"a["<<i<<"]="<<a[i]<<"; ";
    if(i%3 == 2){cout<<endl;}
  }
}
