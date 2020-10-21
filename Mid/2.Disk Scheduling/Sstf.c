#include<stdio.h>
#include<math.h>
int main()
{
    int n,head,i,j,Total_distance=0,diff=0,Position_value=0,position=0,sec_min=0;
    printf("Enter number of queue : ");
    scanf("%d",&n);
    int queue[n];
    printf("\nEnter the elements :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&queue[i]);
    }
    printf("\nEnter the head position : ");
    scanf("%d",&head);
    printf("\nPath : ");
    printf("%d ",head);
    for(i=0; i<n; i++)
    {
        int min=111111,diff=0;
        for(j=0; j<n; j++)
        {
            diff= abs(queue[j]-head);
            if(diff<min && diff!=0 && diff!=head )
            {
                min=diff;
                Position_value=queue[j];
                position=j;
            }
        }
        printf("%d ",Position_value);
        queue[position]=NULL;
        sec_min=min;
        head=Position_value;

        Total_distance+=min;
    }
    printf("\n\nTotal distance : %d\n",Total_distance);
    return 0;
}
