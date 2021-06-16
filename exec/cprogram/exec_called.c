#include<stdio.h>
#include<unistd.h> //This header file includes exec calls
#include<stdlib.h>
int main (int argc, char *argv[]){
printf("This is a statement from the called process\n");
printf("The process id of the called is %d",getpid());
return 0;


}
