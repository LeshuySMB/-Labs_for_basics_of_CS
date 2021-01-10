#include <iostream>
using namespace std;

int main() {
  int n,c, a=1, b=1;
  cout<<"Введите значение n..."<<endl;
  cin>>n;
  for(int i=1;i<n;++i){
    c = a;
    a = 3*b+2*a;
    b = b+2*c;
  }
  cout<<"Полученные значния: "<<endl;
  cout<<a<<" "<<b;
}
