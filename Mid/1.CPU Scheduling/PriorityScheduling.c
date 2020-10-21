#include <stdio.h>
int main()
{
    int bt[20],wt[20],p[20],tat[20],priority[20],i,j,n,temp,key;
    float avwt=0,avtat=0;

    printf("Enter Total Number of Processes: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nBurst Time of P[%d]: ",i);
        scanf("%d",&bt[i]);
        printf("Priority of P[%d]: ",i);
        scanf("%d",&priority[i]);
        p[i]=i;
    }

    for(i=0; i<n; i++)
    {
        key=i;
        for(j=i+1; j<n; j++)
        {
            if(priority[j]<priority[key])
            {
                key=j;
            }
        }
        temp=bt[i];
        bt[i]=bt[key];
        bt[key]=temp;

        temp=priority[i];
        priority[i]=priority[key];
        priority[key]=temp;

        temp=p[i];
        p[i]=p[key];
        p[key]=temp;
    }

    wt[0]=0;

    for(i=1; i<n; i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        avwt+=wt[i];
    }

    printf("\n");
    printf("0");

    for(i=0; i<n; i++)
    {
        wt[i] = bt[i] + wt[i];
        printf(" P%d %d",p[i],wt[i]);
    }

    avwt=avwt/n;
    printf("\n\nAverage waiting time: %.2f ms\n\n",avwt);

    return 0;

}
