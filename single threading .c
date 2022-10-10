#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void *myThreadfun(void*vargp)
{
	sleep(3);
	printf("hello");
	return NULL;
}
int main()
{
	pthread_t thread_id;
	printf("\nfirst thread");
	pthread_create(&thread_id,NULL,&myThreadfun,NULL);
	pthread_join(thread_id,NULL);
	exit(0);
}