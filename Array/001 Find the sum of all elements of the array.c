#include <stdio.h>
int main() {
 int a[100];
 int i,n,j,sum=0;
 printf("Enter the size of array:");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
 for(j=0;j<n;j++){
     sum=sum+a[j];
 }
 printf("The sum of elements are %d",sum);
return 0;
}

// Using one loop
// for(i=0;i<n;i++){
//      scanf("%d",&a[i]);
//      sum=sum+a[j];
//  }
