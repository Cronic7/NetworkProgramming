#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main(){
int id=fork();
if(id==0){
printf("This is child process with process id:%d \n",getpid());
}else{
printf("This is parent process with process id:%d \n",getpid());
}
}
