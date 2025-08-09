#include<bits/stdc++.h>

int main(){
  int arr[] = {73, 12, 99, 58, 39, 85, 27, 6, 41, 94};
  int sizeIteration = 0;
  for(int i = 0; i<10; i++){
    if(arr[i] > arr[i+1]){
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }
  }
  for(int i: arr){
    std::cout << i << '\n';
  }
  return 0;
}
