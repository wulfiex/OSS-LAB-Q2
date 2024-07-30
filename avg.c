#include<stdio.h>
#include <stdlib.h>
int main(){
int n,i;
int *ptr;
float avg,sum=0;
printf("Number of elements to be averaged.");
scanf("%d",&n);
ptr = (int*)malloc(n * sizeof(int));
printf("Enter the elements");

for(i=0;i<n;i++){
    scanf("%d",&ptr[i]);
}
for(i=0;i<n;i++){
   sum+=ptr[i];
}
avg= sum/n;
printf("Average of the numbers is %f",avg);
}
