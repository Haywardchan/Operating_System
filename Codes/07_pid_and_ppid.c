#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {

    pid_t pid = getpid();
    pid_t ppid = getppid();

    printf("Current PID: %d\n",pid);
    printf("Parent PID: %d\n",ppid);

    return 0;
}
