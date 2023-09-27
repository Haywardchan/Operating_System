#include <stdio.h>
#include <unistd.h>

// Assume that each command line has at most 256 characters (including NULL)
#define MAX_CMDLINE_LENGTH 256

// Assume that each segment has at most 256 characters (including NULL)
#define MAX_SEGMENT_LENGTH 256

int main()
{
	// Same as running "ls -l -h"
	char command[MAX_CMDLINE_LENGTH] = "ls";
	char *args[MAX_SEGMENT_LENGTH] = {"ls", "-l", "-h", NULL};
	// execvp(command, args);
	execvp(args[0], args); // okay to use args[0] instead of command
	return 0;
}
