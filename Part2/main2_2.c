#define _GNU_SOURCE

#include <stdio.h>
#include<stdlib.h>
#include <sched.h>
#include <unistd.h>

#define STACK_SIZE 10000
#define CYCLES 1000

//main2_2 - using clone()


char child_stack[STACK_SIZE+1] ;

void print(const char *text)
{
    int i;
    for (size_t i = 0; i <CYCLES; i++)
    {
        printf("Hello from %s\n",text);
        usleep(1000000);
    }   
}
int child(void *params)
{
print("child_thread");
return 0;

}
int main()
{
    int result = clone(child,child_stack+STACK_SIZE,CLONE_PARENT,0);
    printf("clone result %d\n",result);
    print("parent");
    return 0;

}