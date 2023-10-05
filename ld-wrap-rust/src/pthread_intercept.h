// custom_pthread.h
#ifndef CUSTOM_PTHREAD_H
#define CUSTOM_PTHREAD_H

#include <pthread.h>

// Declare the C function to be intercepted
extern int custom_pthread_create(pthread_t* thread, const pthread_attr_t* attr,
                                 void* (*start_routine)(void*), void* arg);

// Declare the Rust function to be called from C with the desired signature
extern int __wrap_pthread_create(pthread_t* thread, const pthread_attr_t* attr,
                                 void* (*start_routine)(void*), void* arg);

#endif // CUSTOM_PTHREAD_H
