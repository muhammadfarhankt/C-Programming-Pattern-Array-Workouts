#include <stdio.h>
int main() {
   int num[20],size,i;
   float sum=0,avg;
   printf("Enter Array Size : ");
   scanf("%d",&size);
   printf("Enter the elements : ");
   for(i=0;i<size;i++){
        scanf("%d",&num[i]);
        sum=sum+num[i];
   }
   avg=sum/size;
   printf("Average of the number is : %f",avg);
   return 0;
}
