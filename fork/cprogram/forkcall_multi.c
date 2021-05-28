#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main(){
fork();
fork();
fork();
printf("Parent process id:%d,Child process id:%d \n",getppid(),getpid());

}
