#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void signal_callback(int sig)
{
        printf("The user terminates the program by press Ctrl-C\n");
        exit(1);
}

int main()
{
        printf("Press Ctrl-C to terminate or wait for 5 seconds\n");
        signal(SIGINT, signal_callback); // overwrite the SIGINT handler
        sleep(5); // sleep for 5 seconds
        printf("The program terminates without signal handling\n");
        return 0;
}

