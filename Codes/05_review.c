// ./a.out | wc -l
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main()  {  
    int i;
    // The outer for loop cannot be easily visualize
    // Too many processes for i<10, only test small values (e.g., 1, 2, 3)
    for (i=0; i<10; i++) {
      // Let's visualize only the inner part
      if(fork()) { // parent
        fork();
        fork();
      }
      else
        fork(); // child
    }
    printf("%d\n", getpid());
    return 0;
}
