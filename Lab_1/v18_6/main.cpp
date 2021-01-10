#include <iostream>
#include <cmath>
using namespace std;
int fact(int i){
  if(i == 1){
    return(1);
  }else if(i == 2){
    return(2);
  }else{
    return(fact(i-1)*i);
  }
}
int main() {
  int n;
  double p = 0;
  cout<<"Введите значение n... "<<endl;
  cin>>n;
  for(int i = 1;i<n+1;++i){
    p +=(pow(2,i)+1/fact(i));
  }
  cout<<"Полусенное значение: "<<endl;
  cout<<p;
}
