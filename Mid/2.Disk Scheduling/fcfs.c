#include<stdio.h>
#include<math.h>
int main()
{
    int n,head,i,Total_distance=0,diff;
    printf("Enter num of queue : ");
    scanf("%d",&n);
    int queue[n];
    printf("\nEnter the elements of queue : ");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&queue[i]);
    }
    printf("\nEnter the initial head position: ");
    scanf("%d",&head);

    queue[0]=head;
    printf("\nChart: ");
    for(i=0; i<=n-1; i++)
    {
        diff= abs(queue[i+1]-queue[i]);
        Total_distance+=diff;
        if(i==0)
        {
            printf("%d",queue[i]);
        }
        printf(" - %d",queue[i+1]);
    }

    printf("\nTotal distance : %d \n",Total_distance);

    return 0;
}
