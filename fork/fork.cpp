#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t fork_pid;
	fork_pid = fork();
	printf("fork_pid:\t%d\n", fork_pid); 
	printf("pid:\t\t%d\n", getpid()); 
	printf("ppid:\t\t%d\n", getppid()); //father's pid
//	printf("%d\n", fork()); 

}
