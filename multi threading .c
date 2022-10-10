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
	pthread_t thread_id2;
	printf("\nfirst thread");
	pthread_create(&thread_id,NULL,&myThreadfun,NULL);
	printf("\nsecond thread:");
	pthread_create(&thread_id2,NULL,&myThreadfun,NULL);
	pthread_join(thread_id2,thread_id);
	exit(0);
}