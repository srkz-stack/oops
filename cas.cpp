#include<iostream>

int main(){
  int arr[] = {1,2,1,0,5,7,7,5,3,2};
  int hash[10] = {0};
  
  for(int i = 0; i<(sizeof(arr)/sizeof(int)); i++){
    hash[arr[i]]++;
  }

  for(int i = 0; i<10; i++){
    std::cout << i << ": " << hash[i] << '\n';
  }
  return 0;
  
}

