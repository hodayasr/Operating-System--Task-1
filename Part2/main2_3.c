#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <syslog.h>

//main2_3 - using daemon 


int main()
{

	pid_t pid= fork();

	if(pid==0)
{
		chdir("/"); // move to root dir 

		setsid(); // move the child to another session

		printf("starting my daemon \n");

		close(stdout);
		close(stdin);
		close(stderr);

		openlog("myDaemon",LOG_PID,LOG_DAEMON);
		syslog(LOG_NOTICE,"daemon started");
		usleep(1000000);
        	syslog(LOG_NOTICE,"daemon working");
        	usleep(2000000);
        	syslog(LOG_NOTICE,"daemon finished");
        	usleep(1000000);
	}
	else
{
		printf("daemon pid is :%d ",pid);
	}
return 0;
}
