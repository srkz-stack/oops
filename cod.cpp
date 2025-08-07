#include<bits/stdc++.h>

bool checkWeight(int w){
  if(w%2 == 0 && w>2){return true;}
  return false;
}

int main(){
  int watermelonWeight;
  std::cin >> watermelonWeight;
  if(checkWeight(watermelonWeight)) std::cout << "YES" <<'\n';
  else std::cout << "NO" << '\n';
  return 0;
}
