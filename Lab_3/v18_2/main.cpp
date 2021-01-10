#include <iostream>
using namespace std;

double summ(double a[],int n){
  double s=0;
  for(int i=0;i<n;++i){
    if(a[i]>0){
      s+= a[i];
    }
  }
  return s;
}

int main() {
  int m,n;
  cout<<"Введите количество строк(m) и столбцов(n) матрицы B: "<<endl;
  cin>>m>>n;
  double b[m][n];
  for(int i=0;i<m;++i){
    for(int j=0;j<n;++j){
      cout<<"Введите элемент "<<i+1<<"  строки "<<j+1<<" столбца: "<<endl;
      cin>>b[i][j];
    }
  }
  cout<<endl;
  cout<<"Введённая матрица: "<<endl;
  cout<<endl;
  for(int i = 0;i<n;++i){
    for(int j = 0;j<n;++j){
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
  double a[n-1],sum,s;
  for(int i=0;i<m;++i){
    if(b[i][0]<0){
      for(int j=1;j<n;++j){
        a[j-1] = b[i][j];
      }
      s = summ(a,n-1);
      if(s!=0){cout<<"Сумма положительных элементов "<<i+1<<" строки: "<<endl<<s;
      sum += s;
      cout<<endl;}
    }
  }
  cout<<"Сумма положительных элементов строк, начинющихся с отрицательного элемента: "<<endl<<sum;
}
