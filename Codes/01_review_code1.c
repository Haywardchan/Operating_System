// Command: ./a.out | wc -l
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {  

    fork(); 
  
    
    printf("%d\n", getpid());
    fflush(stdout);
    return 0;
}