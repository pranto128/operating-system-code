#include<stdio.h>

int main()
{
    int n,bt[20],wt[20],avwt=0,i,j;
    printf("Enter total number of processes:");
    scanf("%d",&n);

    printf("Enter Process Burst Time ");
    for(i=0; i<n; i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }

    wt[0]=0;

    for(i=1; i<n; i++)
    {
        wt[i]=0;
        for(j=0; j<i; j++)
            wt[i]+=bt[j];
    }


    for(i=0; i<n; i++)
    {
        avwt+=wt[i]/n;
    }

    for(i=0; i<n; i++)
    {
        wt[i] = bt[i] + wt[i];
        printf(" %d",wt[i]);
    }

    printf("\nAverage Waiting Time:%d",avwt);


    return 0;
}
