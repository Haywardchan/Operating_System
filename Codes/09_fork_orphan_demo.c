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
    } else  { // child
        sleep(10);
        for (i=0;i<10;i++)
            printf("Child %d\n", i);
    }
    return 0;
}
