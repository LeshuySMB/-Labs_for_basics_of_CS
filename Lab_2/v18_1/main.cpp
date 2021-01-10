#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int a[20] = {1,2,3,4,5,
                  6,7,8,9,10,
                  11,12,13,14,15,
                  16,17,18,19,20};
  cout<<"Нечётыйе элементы массива: "<<endl;
  for(int i = 0;i<20;i+=2){
    cout<<"a["<<i+1<<"]="<<a[i]<<"; ";
    if(i%4 == 2){
      cout<<endl;
    }
  }
  cout<<endl;
  cout<<"Чётные элементы массива: "<<endl;
  for(int i = 1;i<20;i+=2){
    cout<<"a["<<i+1<<"]="<<a[i]<<"; ";
    if(i%4 == 3){
      cout<<endl;
    }
  }
}
