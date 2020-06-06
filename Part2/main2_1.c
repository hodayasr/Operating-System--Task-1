#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


//main2_1 - using fork()


void print(const char *text)
{
	int i;
	for(i=0; i<20;i++)
{
		printf("Hello from %s \n",text);
		usleep(1000000);
	}
}

int main()
{
	pid_t pid1= fork();

	if(pid1==0)
{
		pid_t pid2=fork();
		if(pid2==0){
			print("grand child");
		}
		else{
      		print("child");
		}
	}
	else{
		print("parent");
	}
	return 0;
}
