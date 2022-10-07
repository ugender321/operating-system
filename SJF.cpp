#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int AT=0;
    int p[a];
    printf("\nprocesss:");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nburst time:");
    int BT[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&BT[i]);
    }
    int WT[a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(BT[i]<BT[j])
            {
                int temp=BT[i];
                BT[i]=BT[j];
                BT[j]=temp;
            }
        }
    }
    printf("\nwaiting time:");
    for(int i=0;i<a;i++)
    {
        WT[i+1]=BT[i]+WT[i];
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",WT[i]);
    }
     printf("\nturn around time:");
    int TAT[a];
    for(int i=0;i<a;i++)
    {
        TAT[i]=WT[i]+BT[i];
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",TAT[i]);
    }
    
}
