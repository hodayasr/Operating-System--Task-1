
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <unistd.h>


//main2_4 - app 


int main()
{

	pid_t pid1 = fork();
	if (pid1 == 0)
	{
		printf("\npid1 Number of Id: %d\n", getpid());
		printf("main2_1:\n\n");

		char *args[] = {"./Fork", NULL};
		execvp(args[0], args); 
	}
	else
	{
		sleep(5);
	}
	pid_t pid2 = fork();
	if (pid2 == 0)
	{
		printf("\npid2 Number of Id: %d\n", getpid());
		printf("main2_2:\n\n");

		char *args[] = {"./Clone", NULL};
		execvp(args[0], args); 
	}
	else
	{
		sleep(5);
	}
	pid_t pid3 = fork();
	if (pid3 == 0)
	{
		printf("\npid3 Number of Id: %d\n", getpid());
		printf("main2_3:\n\n");

		char *args[] = {"./Daemon", NULL};
		execvp(args[0], args); 
	}
	else
	{
		sleep(5);
	}

	return 0;
}