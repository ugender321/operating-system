#include<stdio.h>
int main()
{
    int a,t,pos;
    int WT[a],TAT[a];
    float AWT=0,ATAT=0;
    scanf("%d",&a);
    int p[a];
    printf("process:");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("burst time:");
    int BT[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&BT[i]);
    }
    printf("priority");
    int pri[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&pri[i]);
    }
    for(int i=0;i<a;i++)
    {
        pos=i;
        for(int j=i+1;j<a;j++)
        {
            if(pri[j]<pri[pos])
            {
                pos=j;
            }
        }
        t=pri[i];
        pri[i]=pri[pos];
        pri[pos]=t;
        
        t=BT[i];
        BT[i]=BT[pos];
        BT[pos]=t;
    }
    WT[0]=0;
    printf("process\tbursttime\tpriority\twaiting time\tturn around time\n");
    for(int i=0;i<a;i++)
    {
        WT[i]=0;
        TAT[i]=0;
        for(int j=0;j<i;j++)
        {
            WT[i]=WT[i-1]+BT[j];
        }
        TAT[i]=WT[i]+BT[i];
        AWT=AWT+WT[i];
        ATAT=ATAT+TAT[i];
        printf("%d\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n",i+1,BT[i],pri[i],WT[i],TAT[i]);
    }
    AWT=AWT/a;
    ATAT=ATAT/a;
    printf("average waiting time:%f\n",AWT);
    printf("average turn around time:%f\n",ATAT);
    
    
}
