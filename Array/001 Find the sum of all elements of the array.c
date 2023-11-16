#include <stdio.h>
int main() {
 int num[100],i,size,j,sum=0;
 printf("Enter the size of array : ");
 scanf("%d",&size);
 printf("Enter the elements : \n");
 for(i=0;i<size;i++){
     scanf("%d",&num[i]);
 }
 for(j=0;j<size;j++){
     sum=sum+num[j];
 }
 printf("The sum of elements are %d",sum);
return 0;
}

// Using one loop
// for(i=0;i<size;i++){
//      scanf("%d",&num[i]);
//      sum=sum+num[i];
//  }
