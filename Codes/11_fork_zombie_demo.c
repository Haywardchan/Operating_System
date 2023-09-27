#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    int i;
    pid = fork();
    if ( pid > 0 ) { // parent
        for (i=0;i<10;i++)
            printf("Parent %d\n", i);
	    sleep(10); // sleep for 10 seconds
	    wait(0);   // take care of the child
	printf("The parent takes care of the child process. No zombie process!\n");
    } else  { // child
	    sleep(1); // make sure the parent print 10 lines first
        for (i=0;i<10;i++)
            printf("Child %d\n", i);
	    printf("Now, the child process becomes zombie\n");
    }
    return 0;
}
