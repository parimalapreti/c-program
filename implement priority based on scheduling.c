#include<stdio.h>
struct process {
int pid;
int burst;
int priority;
};
int main()
{
    int n,i,j,k;
    printf("enter number of process:");
    scanf("%d",&n);
    struct process p[n];
    for(i=0;i<n;i++)
    {
        p[i].pid=i+1;
        printf("process %d burst time: ");
        scanf("%d",&p[i].burst);
        printf("process%d priority(lower value=higher value):",i+1);
        scanf("%d",&p[i].priority);
    }
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++)
            if(p[j].priority<p[min].priority)
            min=j;
        if(min!=i)
        {
            struct process temp=p[i];
            p[i]=p[min];
            p[min]=temp;
        }
    }
    int time=0;
    printf("\nschedule order:\n");
    printf("PID\tburst\tpriority\tcompletion time\n");
    for(i=0;i<n;i++)
    {
time+=p[i].burst;
printf("p%d\t%d\t%d\t\t%d\n",p[i].burst,p[i].priority,time);

    }
    return 0;
}
