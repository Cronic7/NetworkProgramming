
//Spawn any number of process
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main(){
int id=fork();
if(id==0){
printf("Process is spawned with process id:%d \n",getpid());
}else{
fork();
printf("Process is spawned with process id:%d \n" ,getpid());

}
}

