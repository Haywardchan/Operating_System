#include <stdio.h>
#include <unistd.h>
int main() {
	// Same as running "ls -l -h"
	execlp("ls", "ls", "-l", "-h", NULL);
    // Note: It won't return
    printf("It won't return. Nothing is shown here\n");
	fflush(stdout);
	return 0;
}
