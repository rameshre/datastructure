#include<stdio.h>
struct DisjSet
{
int parent[10];
int rank[10];
int n;
}dis;
void makeSet()
{
int i;
for(i=0;i<dis.n;i++)
{
dis.parent[i]=i;
dis.rank[i]=0;
}
}
void displaySet()
{
int i;
printf("\n Parent Array\n");
for(i=0;i<dis.n;i++)
{
printf("%d",dis.parent[i]);
}
printf("\n Array Rank\n");
for(i=0;i<dis.n;i++)
{
printf("%d",dis.rank[i]);
}
printf("\n");
}
int find(int x)
{
if(dis.parent[x]!=x)
{
dis.parent[x]=find(dis.parent[x]);
}
return dis.parent[x];
}
void Union(int x,int y)
{
int xset=find(x);
int yset=find(y);
if(xset==yset)
return;
if(dis.rank[xset]<dis.rank[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=-1;
}
else if(dis.rank[xset]>dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[yset]=-1;
}
else
{
dis.parent[yset]=xset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=-1;

}
}
int main()
{  
int x,y,n,ch,wish;
printf("How many elements?");
scanf("%d",&dis.n);
makeSet();
do
{
printf("\n---Menu----\n");
printf("1.Union\n 2.Find\n 3.Display\n");
printf("Enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case1: printf("Enter the Elements to perform union:");
       scanf("%d%d",&x,&y);
       Union(x,y);
       break;
case2: printf("Enter the Elements to check if connected components:");
       scanf("%d%d",&x,&y);
       if(find(x)==find(y))
        printf("Connected components");
       else
        printf("Not Connected components");
       break;
case3: displaySet();
       break;
}
printf("\nDo you wish yo continue?(1/0)\n");
scanf("%d",&wish);
}
while(wish==1);
return(0);
}

