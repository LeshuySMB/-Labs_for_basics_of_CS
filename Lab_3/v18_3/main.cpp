#include <iostream>
using namespace std;
double max(double a[], int k){
  double max = a[0];
  for(int i = 1;i<k;++i){
    if(a[i]>max){
      max = a[i];
    }
  }
  return max;
}

int main() {
  int m,n;
  cout<<"Введите количество строк(m) и столбцов(n) матрицы C: "<<endl;
  cin>>m>>n;
  double c[m][n];
  for(int i=0;i<m;++i){
    for(int j=0;j<n;++j){
      cout<<"Введите элемент "<<i+1<<"  строки "<<j+1<<" столбца: "<<endl;
      cin>>c[i][j];
    }
  }

  cout<<endl;
  cout<<"Введённая матрица: "<<endl;
  cout<<endl;
  for(int i = 0;i<m;++i){
    for(int j = 0;j<n;++j){
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
  int k=0;
  double a[m*n],maks;

  for(int i = 0;i<m;++i){
    for(int j = 0;j<n;++j){
      if(c[i][j]<0){
        a[k] = c[i][j];
        k+=1;
      }
    }
  }
  maks=max(a,k);
  cout<<"Искомывй элемент: "<<endl<<maks;
}
