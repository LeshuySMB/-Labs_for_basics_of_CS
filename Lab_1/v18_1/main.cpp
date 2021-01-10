#include <iostream>

using namespace std;

int main(){
  double x,y;
  cout<<"Введите x и y "<<endl;
  cin>>x>>y;
  if((x>=-1 && x<=1) &&
     (y>=-1 && y<=1)){
       if((y == (-1*(x-1))) ||
          (y == (-1*(x+1)))){
            cout<<"Точка принадлежит";
          }else{
            cout<<"Точка не принадлежит";
          }
     }else{
            cout<<"Точка не принадлежит";
          }
}
