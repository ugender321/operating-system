#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    scanf("%d %d",&m,&n);
    int allocation[m][n];
    printf("allocation");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("\n%d",&allocation[i][j]);
        }
    }
    int maximum[m][n];
    printf("maximum");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("\n%d",&maximum[i][j]);
        }
    }
    
    printf("need");
    int need[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            need[i][j]=maximum[i][j]-allocation[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",need[i][j]);
        }
        printf("\n");
    }
    int available[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&available[i]);
    }
     int f[m],a[m],ind=0;
     for(k=0;k<m;k++)
     {
         f[k]=0;
     }
     int y=0;
     for(k=0;k<m;k++)
     {
         for(i=0;i<m;i++)
         {
             if(f[i]==0)
             {
                 int flag=0;
                 for(j=0;j<n;j++)
                 {
                     if(need[i][j]>available[i])
                     {
                         flag=1;
                         break;
                     }
                 }
                 
                 if(flag==0)
                 {
                     a[ind++]=i;
                     for(y=0;y<n;y++)
                         available[y]+=allocation[i][y];
                    f[i]=1;
                 }
             }
         }
     }
     
     int flag=1;
     for(int i=0;i<m;i++)
     {
         if(f[i]==0)
         {
             flag=0;
             printf("deadlock");
             break;
         }
     }
     if(flag==1)
     {
         printf("its a safe sequence\n");
         for(i=0;i<m-1;i++)
         {
             printf("%d",a[i]);
         }
         printf("%d",a[m-1]);
     }
     
    
    
}

