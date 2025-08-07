#include<bits/stdc++.h>

int main(){
  std::string s = "aslkjhgfdsda";
  int hash[26] = {0};

  for(int i = 0; i<std::size(s); i++){
    hash[s[i] - 'a']++;
  }
  
  for(int i = 0; i<26; i++){
    std::cout << (char)(i+97) << ": "<< hash[i] << '\n';
  }
  return 0;
}
