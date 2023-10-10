#include "stdio.h"
#include <pthread.h>

void *thread_function(void *arg)
{
    printf("thread_function is running.\n");
    return NULL;
}

int create_thread()
{
    pthread_t thread;
    pthread_create(&thread, NULL, thread_function, NULL);
    pthread_join(thread, NULL);
    return 0;
}
