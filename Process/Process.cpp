#include <stdio.h>
#include <unistd.h>

void processPrint(pid_t &fork_pid){  //print ID
	printf("pid:\t\t%d\n", getpid()); 
	printf("ppid:\t\t%d\n", getppid()); 
	printf("pgid:\t\t%d\n", getpgrp()); 
	printf("sid:\t\t%d\n", getsid(getpid())); 
	printf("fork_pid:\t%d\n", fork_pid); 
	printf("\n");
}

int main(int argc, char const *argv[]){
	pid_t fork_pid;
	fork_pid = fork();  //fork process ID

	processPrint(fork_pid);

    if(fork_pid==0){  //is fork
    	setpgid(0,0);
    	printf("setpgid success!\n");
    	processPrint(fork_pid);
    }

}
