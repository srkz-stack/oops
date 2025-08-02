#include<bits/stdc++.h>

void printallDivisors(int number){
  int count = 1;
  while(count <= number){
    if((number%count) == 0){
      std::cout << count << " ";
    }
    count++;
  }
}


int main(){
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  printallDivisors(number);
  return 0;
}
