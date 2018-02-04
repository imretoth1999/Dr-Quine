#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#define FLAGS O_WRONLY|O_CREAT|O_TRUNC
int main(void)
{
	int i=5;
	char *env=getenv("_");
	if (!strstr(env, "./Sully_"))
	{i++;}
	char *filename;
	if(i<=0)
	{return (0);}
	asprintf(&filename,"Sully_%d.c",--i);
	int fd=open(filename,FLAGS,0644);
	char *binary;asprintf(&binary,"./Sully_%d",i);
	char *command;asprintf(&command,"clang -Wall -Wextra -Werror %s -o %s",filename,binary);
	char *s="#define _GNU_SOURCE%c#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c#include <fcntl.h>%c#include <string.h>%c#define FLAGS O_WRONLY|O_CREAT|O_TRUNC%cint main(void)%c{%c%cint i=%d;%c%cchar *env=getenv(%c_%c);%c%cif (!strstr(env, %c./Sully_%c))%c%c{i++;}%c%cchar *filename;%c%cif(i<=0)%c%c{return (0);}%c%casprintf(&filename,%cSully_%%d.c%c,--i);%c%cint fd=open(filename,FLAGS,0644);%c%cchar *binary;asprintf(&binary,%c./Sully_%%d%c,i);%c%cchar *command;asprintf(&command,%cclang -Wall -Wextra -Werror %%s -o %%s%c,filename,binary);%c%cchar *s=%c%s%c;%c%cdprintf(fd,s,10,10,10,10,10,10,10,10,10,9,i,10,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,10,9,34,34,10,9,10,9,34,34,10,9,34,34,10,9,34,s,34,10,9,10,9,10,10);%c%cclose(fd);system(command);system(binary);return (0);%c}%c";
	dprintf(fd,s,10,10,10,10,10,10,10,10,10,9,i,10,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,10,9,34,34,10,9,10,9,34,34,10,9,34,34,10,9,34,s,34,10,9,10,9,10,10);
	close(fd);system(command);system(binary);return (0);
}
