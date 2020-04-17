#include <stdio.h>
#include<stdio.h>
int a[10][10],visited[10],s;
void DFS(int v)
{
 int i;
 visited[v]=1;
 for(i=1;i<=s;i++)
  if(a[v][i] && !visited[i])
  {
   printf("s %d->%d",v,i);
   DFS(i);
  }
}
void main()
{
 int i,j,count=0;
 printf(" Enter the number of vertices:");
 scanf("%d",&s);
 for(i=1;i<=s;i++)
 {
  visited[i]=0;
  for(j=1;j<=s;j++)
   a[i][j]=0;
 }
 printf(" Enter the adjacency matrix:");
 for(i=1;i<=s;i++)
  for(j=1;j<=s;j++)
   scanf("%d",&a[i][j]);
 DFS(1);
 printf("s");
 for(i=1;i<=s;i++)
 {
  if(visited[i])
   count++;
 }
 if(count==s)
  printf("s It is a connected graph");
 else
  printf("s It is not a connected graph");
}


