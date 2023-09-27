/* Q1: fork() with wait()
P1 creates P2 using fork(), P2 creates P3 using fork()
In other words, 
- P1 is the original process,
- P2 is a child process of P1 yeeeeee
- P3 is a child process of P2
P3 MUST print "P3 exits" first
P2 MUST print "P2 exits" first
P1 MUST print "P1 exits" first
*/
/*
hi there<3
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    if (fork()){
        wait(0);
        printf("P1 exits\n");
    }
    else if (fork()){
        wait(0);
        printf("P2 exits\n");
    }
    else{
        printf("P3 exits\n");
    }
    return 0;
}


// the point is I don't know where to do it now that someone is already working in main()
// lmao 
