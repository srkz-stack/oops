#include<bits/stdc++.h>

void printallDivisors(int number){
  int count = 1;
  std::vector<int> v;
  while(count <= sqrt(number)){
    if((number%count) == 0){
      v.push_back(count);
      if(count != (number/count)){
        v.push_back((number/count));
      }
    }
    count++;
  }
  std::sort(v.begin(), v.end());
  if(v.size() == 2){
    std::cout << number << " is a prime number.";
  }
}


int main(){
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  printallDivisors(number);
  return 0;
}
