#include<stdio.h>
int main()
{
    int a;
    int AT=0;
    scanf("%d",&a);
    int p[a];
    printf("process");
    for(int i=0;i<a;i++)
    {
        scanf("\n%d",&p[i]);
    }
    int BT[a];
    printf("burst time");
    for(int i=0;i<a;i++)
    {
        scanf("\n%d",&BT[i]);
    }
    int WT[a];
    WT[0]=0;
    for(int i=0;i<a;i++)
    {
        WT[i+1]=BT[i]+WT[i];
        
    }
    printf("waiting time");
    for(int i=0;i<a;i++)
    {
        printf("\n%d ",WT[i]);
    }
    int TAT[a];
    for(int i=0;i<a;i++)
    {
        TAT[i]=WT[i]+BT[i];
    }
    printf("\nturn around time");
    for(int i=0;i<a;i++)
    {
        printf("\n%d ",TAT[i]);
    }
}
