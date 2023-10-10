#include <stdio.h>
#include <pthread.h>
#include <dlfcn.h>

int __wrap_pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg) {
    printf("Intercepted pthread_create!\n");
    return 0;
}

int main()
{
    void* handle = dlopen("./dist/thread.o", RTLD_LAZY | RTLD_GLOBAL);
    if (!handle) {
        fprintf(stderr, "Error: %s\n", dlerror());
        return 1;
    }
    typedef void (*ThreadFunctionType)();
    ThreadFunctionType create_thread_func = (ThreadFunctionType)dlsym(handle, "create_thread");
    if (!create_thread_func) {
        fprintf(stderr, "Error: %s\n", dlerror());
        dlclose(handle);
        return 1;
    }
    create_thread_func();
    dlclose(handle);
    return 0;
}
