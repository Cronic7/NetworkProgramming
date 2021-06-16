#include<stdio.h>
#include<unistd.h> //This header file includes exec calls
#include<stdlib.h>
int main (int argc, char *argv[]){
printf("The process id of the caller is %d\n",getpid());
char *args[]={"./exec_called",NULL};
execv(args[0],args);
printf("Exec system call have been executed");//this will not execute
return 0;

}

