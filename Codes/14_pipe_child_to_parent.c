#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {

	int pfds[2];
	char buf[30];

	pipe(pfds);
	pid_t pid = fork();

	if ( pid == 0 ) {
		printf("CHILD: writing to pipe\n");
		close(pfds[0]);
		write(pfds[1],"test", 5);
		printf("CHILD: exiting\n");
	} else {
		printf("PARENT: reading from pipe\n");
		close(pfds[1]);
		wait(NULL);
		read(pfds[0], buf, 5);
		printf("PARENT: read %s\n", buf);
	}
	return 0;
}
