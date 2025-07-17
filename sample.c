#include<stdio.h>

int main(){
  int arr[10];
  int i = 0, n, d, pos;
  
  //input into array
  printf("Enter no. of elements: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("Enter the element %d", i+1);
    scanf("%d", &arr[i]);
    printf("\n");
  }

  //for delecting a element
  printf("enter the element that needed to be deleted: ");
  scanf("%d", &d);

  for(i = 0; i < n; i++){
    if(arr[i] == d){
      pos = i;
    }
  }

  for(i = pos; i<n; i++){
    arr[i] = arr[i+1];
  }

  n = n-1;

  //printing the elements
  printf("Elements inside the array: \n");
  for(i = 0; i < n; i++){
    printf("%d\n", arr[i]);
  }
}
