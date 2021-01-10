#include <iostream>

int main() {
  double a,b;
  std::cout<<"Введите числа: "<<std::endl;
  std::cin>>a>>b;
  if(a<=b){
    a=0;
    
  }
  std::cout<<"Изменённые числа: "<<std::endl<<a<<" "<<b;
}
