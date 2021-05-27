#include <stdio.h>
#include<sys/types.h> //used for process id
#include<unistd.h> //fork call is defined here
void main(){
fork();
printf("Demonstration of fork()  call \n");
}	
