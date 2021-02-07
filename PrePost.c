/* **node must be contain  Zero(0)**.
eg. 0 1
 1 4
 3 5
 9 4
 0 5*/
 #include <stdio.h>
#include<stdlib.h>
#define n 5
int v;
int visited[n];
int t=0;

int a[n][n];
 void times(int pre[],int post[]);

void DFS(int u,int pre[],int post[]);
void create_empty();
void print();
void add_edge(int s,int dest);
int main()
{
int s,dest;
    int p,i;
    create_empty();
    printf("\nplease enter number of the pairs of source and destination vertices\n");
    scanf("%d",&p);
     for(i=0;i<p;i++)
       { 
        scanf("%d %d",&s,&dest);  
         add_edge(s,dest);
       }
       print();
       int pre[n];
    int post[n];
   

      
       int u;
    for(v=0; v<n; v++)
      visited[v]=0;
    
     printf("enter the starting vertex:");
    scanf("%d",&u);
      DFS(u,pre,post);
      printf("\n");
       times(pre,post);
 

       return 0;
}

void DFS(int u,int pre[],int post[])
{
    if(visited[u]==0)
   {
     printf("%d",u);
     pre[u]=t++;
      visited[u]=1;
        for(int v=0;v<n;v++)
       {
         if(visited[v]==0 && a[u][v]==1)
         
          DFS(v,pre,post);
          
         
       }
        post[u]=t++;
       
   }
  
}

    void times(int pre[],int post[])
    {
         for(int i=0;i<n;i++)
      {
          printf(" %d ||%d ",pre[i],post[i]);
          printf(" \n ");

      }
    }
    

void create_empty()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
}
void add_edge(int s,int dest)
{  
   a[s][dest]=1;
}
 void print()
 {
   int i,j;
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    } 
 }


 

