#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <dlfcn.h>

void(*massage)(const char *);

bool init_lib()
{
	void *hdl = dlopen("./libHello.so",RTLD_LAZY);
	if(hdl==NULL) return false;
	
	massage = (void(*)(const char *))dlsym(hdl,"hello_massage");
	if(massage==NULL) return false;

	return true;
}

int main()
{
	if(init_lib()) massage("Ariel");
	else printf("Library wasn't loaded \n");

	return 0;
}

