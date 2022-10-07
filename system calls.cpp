#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	fork( );
	printf("process id:%d\n",getpid());
	printf("parent process id:%d\n",getppid());
	return 0;
}
