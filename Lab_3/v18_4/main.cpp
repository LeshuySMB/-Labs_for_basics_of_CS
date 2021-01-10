#include <iostream>
using namespace std;

int main() {
  int n;

  cout<<"Введите порядок (n) матрицы А:"<<endl;
  cin>>n;

  int a[n][n],k=n;

  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(i == j){
        a[i][j] = k;
        k -=1;
      }
      else{a[i][j] = 0;}
    }
  }
  cout<<"Полученная матрица: "<<endl;

  for(int i = 0;i<n;++i){
    for(int j = 0;j<n;++j){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
