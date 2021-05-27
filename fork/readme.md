# Fork System Call
Fork system call is used for creating child process the runs cocurently with the parent process.After a new child process is created, both processes will execute the next instruction following the fork() system call. A child process uses the same pc(program counter), same CPU registers, same open files which use in the parent process.
The child process is exactly the same as its parent but there is difference in the processes ID’s:

   * The process ID of the child process is a unique process ID which is different from the ID’s of all other existing processes.
   * The Parent process ID will be the same as that of the process ID of child’s parent.


![](img/fork_call.png)
It returns an integer value but dosent take any argument.
**Negative value:** If child process creation was unsucessful.
**Positive value:** Returned to parent or caller.
**Zero:** Returned to newly created child process.

###### Properties of Child Process

The following are some of the properties that a child process holds:

    1. The CPU counters and the resource utilizations are initialized to reset to zero.
    2. When the parent process is terminated, child processes do not receive any signal because PR_SET_PDEATHSIG attribute in prctl() is reset.
    3. The thread used to call fork() creates the child process. So the address of the child process will be the same as that of parent.
    4. The file descriptor of parent process is inherited by the child process. For example the offset of the file or status of flags and the I/O attributes will be shared among the file descriptors of child and parent processes. So file descriptor of parent class will refer to same file descriptor of child class.
    5. The open message queue descriptors of parent process are inherited by the child process. For example if a file descriptor contains a message in parent process the same message will be present in the corresponding file descriptor of child process. So we can say that the flag values of these file descriptors are same.
    6. Similarly open directory streams will be inherited by the child processes.
    7. The default Timer slack value of the child class is same as the current timer slack value of parent class.





