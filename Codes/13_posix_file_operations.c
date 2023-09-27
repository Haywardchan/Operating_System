#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>

int main() {
	int fd;
	char buffer[10];

	fd = open("hello.txt",  /* output file name */
		O_CREAT | O_WRONLY, /* flag */
                 S_IRUSR | S_IWUSR  ); /* user permission: 600*/
	write(fd, "hello\n", 6);
	close(fd);
	fd = open("hello.txt", /* input file name */
		O_RDONLY, /* flag */
		S_IRUSR | S_IWUSR); /* user permission: 600*/
	read(fd, buffer, 6);
	printf("%s", buffer);
	close(fd);
	return 0;
}
