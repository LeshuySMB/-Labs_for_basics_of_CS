#include <iostream>
using namespace std;

int main() {
  
  int n;

  cout<<"Введите порядок (n) матрицы А:"<<endl;
  cin>>n;

  double a[n][n];
  
  for(int i = 0;i<n;++i){
    for(int j = 0;j<n;++j){
      cout<<"Введите элемент "<<i+1<<"  строки "<<j+1<<" столбца: "<<endl;
      cin>>a[i][j];
    }
  }

  cout<<"Введённая матрица: "<<endl;

  for(int i = 0;i<n;++i){
    for(int j = 0;j<n;++j){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

  int k;
  cout<<"Введите значение k:"<<endl;
  cin>>k;
  k-=1;
  double b;
  for(int i = 0;i<n;++i){
    b = a[i][k];
    a[i][k] = a[k][i];
    a[k][i] = b;
  }

  cout<<"Изменённая матрица: "<<endl;

  for(int i = 0;i<n;++i){
    for(int j = 0;j<n;++j){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
