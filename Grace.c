#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define N "Grace_kid.c"
#define FLAGS O_WRONLY|O_CREAT|O_TRUNC
#define F(x) int main(void){char *s="#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#define N %cGrace_kid.c%c%c#define FLAGS O_WRONLY|O_CREAT|O_TRUNC%c#define F(x) int main(void){char *s=%c%s%c;int fd=open(x,FLAGS,0644);dprintf(fd,s,10,10,10,34,34,10,10,34,s,34,10,10,9,10,10,10);close(fd);}%c/*%c%cMi oleaca foame,nu stiu de tine%c*/%cF(N)%c";int fd=open(x,FLAGS,0644);dprintf(fd,s,10,10,10,34,34,10,10,34,s,34,10,10,9,10,10,10);close(fd);}
/*
	Mi oleaca foame,nu stiu de tine
*/
F(N)
