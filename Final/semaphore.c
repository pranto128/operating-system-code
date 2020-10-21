#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <semaphore.h>


sem_t m;

int main()
{
    int n = 5;
    int i;
    FILE *file;
    file = fopen("test1.txt","w");

    int c= fork();
    int d= fork();

    printf("Fork created\n");

    sem_init(&m,0,1);
    sem_wait(&m);
    for (i=0; i<n; i++)
    	fprintf(file, "I am process %d and my P_id is %d\n",c,getpid());
    sem_post(&m);
return 0;
}