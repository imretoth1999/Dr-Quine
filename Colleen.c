#include <stdio.h>
void f(void){
char *s = "#include <stdio.h>%cvoid f(void){%cchar *s = %c%s%c;%cprintf(s,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10,10,10);%c}%c/*%c	Dedic torpila asta care distruge tot%c*/%cint main(void){%c/*%c	Piesa asta distruge tot ca si tornada de la Timisoara%c*/%cf();%creturn 0;%c}%c";
printf(s,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10,10,10);
}
/*
	Dedic torpila asta care distruge tot
*/
int main(void){
/*
	Piesa asta distruge tot ca si tornada de la Timisoara
*/
f();
return 0;
}
