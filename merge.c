#include<stdio.h>
void main()
{
int m,n,array1[30],array2[30],array3[60],i,j,k=0;
printf("Enter the size of first array\n");
scanf("%d",&m);
printf("Enter the size of second array\n");
scanf("%d",&n);
printf("Enter the elements of sorted array\n");
for(i=0;i<m;i++)
{
scanf("%d",&array1[i]);
}
for(i=0;i<n;i++)
{
scanf("%d",&array2[i]);
}
i=0;
j=0;
while(i<m && j<n)
{
  if(array1[i]<array2[j])
  {
   array3[k]=array1[i];
   i++;
  }
  else
  {
    array3[k]=array2[j];
    j++;
  }
  k++;
}	
if(i>=m)
{
 while(j<n)
  {
    array3[k]=array2[j];
    j++;
    k++;
  }
}
if(j>=n)
{
 while(i<m)
 {
   array3[k]=array1[i];
   i++;
   k++;
 }
}
printf("After Merging:\n");
for(i=0;i<m+n;i++)
{
 printf("%d\n",array3[i]);
}
}
