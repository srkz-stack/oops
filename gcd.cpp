#include<bits/stdc++.h>

int gcd(int n1, int n2){
  if(n1 == 0){
    std::cout << n2 << " is the gcd" << '\n';
    return 0;
  }
  if(n1>n2){
    gcd(n1%n2,n2);
  }else{
    gcd(n2%n1,n1);
  }
  return 0;
}

int main(){
  int n1, n2;
  std::cout << "Enter two numbers: " << '\n';
  std::cin >> n1;
  std::cin >> n2;
  gcd(n1,n2);
  return 0;
}
