#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>


int g_int = 1;  //global variable
int main(int argc, char const *argv[])
{
    int l_int = 1;  //local variable
    int *m_int = (int *)malloc(sizeof(int));

    *m_int = 1;

    pid_t pid = fork();

    if(pid == 0){  //is fork
        g_int = 0;
        l_int = 0;
        *m_int = 0;
        printf("%s\n", "[Child] child change global & local & malloc value!");
        free(m_int);

        sleep(3);
        printf("%s\n", "[Child] child exit");

        exit(0);
    }
    else if (pid < 0){
    	printf("%s\n", "fork err");
    	return 1;
    }

    printf("%s\n", "[Parent] wait child exit ...");
    waitpid(pid, NULL, 0);
    printf("%s\n", "[Parent] child have exit");
    printf("%s%d\n", "[Parent] g_int = ", g_int);
    printf("%s%d\n", "[Parent] l_int = ", l_int);
    printf("%s%d\n", "[Parent] m_int = ", *m_int);

    free(m_int);
	return 0;
}