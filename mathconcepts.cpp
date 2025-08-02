#include<iostream>
#include<bits/stdc++.h>

bool checkPalindrome(int number){
  int res = 0;
  int num = number;
  int digits = (log10(number)+1);
  while(num > 0){
    int temp = num%10;
    res += (pow(temp,digits));
    num /= 10;
  }
  if(res != number){
    return false;
  }
  return true;
}

int main(){
  int number;
  std::cout << "Enter a number: " << '\n';
  std::cin >> number;
  bool result = checkPalindrome(number);
  if(result){
    std::cout << "the number is a armstrong number." << '\n';
  }else{
    std::cout << "the number is not a armstrong number." << '\n';
  }
  return 0;
}
