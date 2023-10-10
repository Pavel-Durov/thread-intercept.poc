## (WIP) Intercepting pthread_create from shared library using ld --wrap flag

Use `ld` wrapper function for `pthread_create` inorder to intercept thread creation.  

Using `--wrap=pthread_create`, `pthread_create` calls will be resolved to `__wrap_pthread_create`.

## Run
```shell
$ make run
mkdir -p ./dist
gcc -shared -fPIC -o ./dist/thread.o thread.c -pthread
gcc -o ./dist/main ./main.c -Wl,--wrap=pthread_create
./dist/main
thread_function is running.
make: *** [Makefile:8: run] Error 1
```
