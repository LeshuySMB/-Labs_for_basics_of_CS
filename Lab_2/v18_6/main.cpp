#include <iostream>
using namespace std;

int main() {
  int n,a,k;
  cout<<"Введите значение n..."<<endl;
  cin>>n;
  k = -1;
  for(int i = 0; i<n;++i){
    cout<<"Введите значение a["<<i+1<<"]..."<<endl;
    cin>>a;
    if(abs(a%2) == 1){
      k = i+1;
    }
  }
  if(k == -1){
    cout<<"Нечётных чисел нет. "<<endl;
    cout<<n+1;
  }else{
    cout<<"Найденный результат: "<<endl;
    cout<<k;
  }
}
