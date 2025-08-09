#include<bits/stdc++.h>

int main(){
  int arr[] = {9,19,37,7,5,3,1,45};
  for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++){
    for(int j = i; j<(sizeof(arr)/sizeof(arr[0])); j++){
      if(arr[j] < arr[i]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp; 
      }
    }
  }
  std::cout << "printing array:" << '\n';
  for(int i: arr){
    std::cout << i << '\n';
  }
  return 0;
}
