#include<bits/stdc++.h>

void printArr(int* arr, int n){
  for(int i = 0; i<n ; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << "\n" ;
}

int main(){
  int arr[] = {1,2,3,4,2,6};
  int n = sizeof(arr)/sizeof(int);
  printArr(arr,n);
  int* pos1 = &arr[0];
  int* pos2 = &arr[n-1];
  while(pos1 != pos2){
    if(pos2 < pos1){
      break;
    }
    int temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
    pos1++;
    pos2--;
  }
  printArr(arr,n);
  return 0;

} 
