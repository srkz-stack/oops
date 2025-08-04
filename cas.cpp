#include<iostream>

int main(){
  int arr[] = {1,2,1,3,2};
  int n = sizeof(arr)/sizeof(int);
  std::vector<int> hash;

  int max = std::max(arr, arr+n);

  for(int i = 0; i<max; i++){
    hash.push_back(i);
  }


}
