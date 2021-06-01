# Exec system call
The exec() family of function replaces the current image with the new process image.When exec is called the previous executable file is replaced with the new executable file.The exec system call will replace old file or program from the process with the new file or program.The entire content of the process is replaced with the new program.
The userdata segment which executes the exec() system call is replaced with the data file whose name is provided in the argument calling the exec() system call.The new program is loaded in the same process space hence the new process has the sampe process id. Exec() function call replaces the process with another process, the current process is turned into new process.

If the current process contains more than one thread then all of the threads are terminated and the new process image is loaded and executed.There are no destructor function that terminates the thread of current process.

While the PID of the process is not changed but the data, code, stack, heap etc. of the process are changed and are replaced with those of newly loaded process.The new process is executed from the entry point.

The exec system call are the collection of function and in **C programming language** the standard name of the function are as follows:
1. ececl
2. execle
3. execlp
4. ececv
5. execve
6. execvp

