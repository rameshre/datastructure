#include<stdio.h>
int main()
{
int n,i,a[50];
printf("To Read and Display elements of an array \n");
printf("Enter the size of array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Elements of array are");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return(0);
}

