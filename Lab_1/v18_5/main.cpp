#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double sum=0,x,e;
  cout<<"Введите значения х и е: "<<endl;
  cin>>x>>e;
  int i=1;
  while(abs(pow(x,i)/i) >= e){
    sum+=pow(x,i)/i;
    i+=1;
  }
  cout<<sum;
}
