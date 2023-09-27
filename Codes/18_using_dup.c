#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int main() {

	int fd;
	fd = open("output.txt", 
                  O_CREAT | O_WRONLY,
                  S_IRUSR | S_IWUSR );
	close(1);
	dup(fd);
	printf("Hello World!\n");
	fflush(stdout);
	return 0;
}
