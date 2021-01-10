#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, x;
  int n;
  cout<<"Введите значение а..."<<endl;
  cin>>a;
  if(a<=1){
    if(2*a >0.95){
      x = 0.95;
    }else{
      x = 2*a;
    }
  }else if(a>1 && a<25){
    x = a/5;
  }else{
    x = a/25;
  }
  cout<<"Введите зачение n..."<<endl;
  cin>>n;
  for(int i = 0; i<n;++i){
    x = (4*x)/5 + a/(5*pow(x,4));
  }
  cout<<"Полученное значение: "<<endl;
  cout<<x;
}
