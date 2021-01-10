#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  double y,sum=0,z;
  cout<<"Введите значение n..."<<endl;
  cin>>n;
  for(int i =0;i<n;++i){
    cout<<"Введите значение y..."<<endl;
    cin>>y;
    if(y>0 && y<15){z = y;}
    else{z = 2.7;}
    sum+= pow(sqrt(z)-z,2);
    cout<<"Полученное значение на данный момент: "<<sum<<endl;
  }
  cout<<endl<<"Финальное полученное значение: "<<endl<<sum<<endl;
}
