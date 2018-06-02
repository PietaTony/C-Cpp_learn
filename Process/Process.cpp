#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t fork_pid;
	fork_pid = fork();

	printf("pid:\t\t%d\n", getpid()); 
	printf("ppid:\t\t%d\n", getppid()); 
	printf("pgid:\t\t%d\n", getpgrp()); 
	printf("sid:\t\t%d\n", getsid(getpid())); 
	printf("fork_pid:\t%d\n", fork_pid); 
	printf("\n");

}
