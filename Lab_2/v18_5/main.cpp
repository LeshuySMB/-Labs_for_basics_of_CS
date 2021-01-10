#include <iostream>
using namespace std;

int main() {
  int n, a,s=0,k=0;
  cout<<"Введите значение n..."<<endl;
  cin>>n;
  for(int i =0;i<n;++i){
    cout<<"Введите значение a["<<i+1<<"]..."<<endl;
    cin>>a;
    if(a%5 == 0 && a%7 != 0){
      s+=a;
      k+=1;
    }
  }
  cout<<"Полученное значение количества элементов, соответсвующих условиям:"<<k<<endl;
  cout<<"Сумма элементов, соответсвующих условиям:"<<s<<endl;
}
