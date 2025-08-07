#include<bits/stdc++.h>

void checkandChange(std::string* str){
  std::string s[std::size(str)];
  for(int i = 0; i<std::size(str); i++){
    char get[] = str[i];
    if((sizeof(get)/sizeof(char))>10){
      
    }
  }

}


int main(){
  int n;
  std::cin >> n;
  std::string str[n];
  for(int i = 0; i<n; i++){
    std::cin >> str[i];
  }
  checkandChange(str);
  return 0;
}
