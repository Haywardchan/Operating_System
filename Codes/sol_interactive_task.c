/*
Q1: fork() with wait()
P1 creates P2 using fork()
P2 creates P3 using fork()

In other words, 
P1 is the original process,
P2 is a child process of P1
P3 is a child process of P2

P3 MUST print "P3 exits" first
P2 MUST print "P2 exits" first
P1 MUST print "P1 exits" first

*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();//
    
    if ( pid > 0 ) {
        wait(0);
        printf("P1 exits\n"); fflush(stdout);
    } else {
        pid_t pid2 = fork();
        if ( pid2 > 0 ) {
            wait(0);
            printf("P2 exits\n"); fflush(stdout);
        } else {
       
            printf("P3 exits\n"); fflush(stdout);
        }
    }
    return 0;
}