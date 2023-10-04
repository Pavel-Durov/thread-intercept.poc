## Intercepting pthread_create using ld --wrap flag

Use `ld` wrapper function for `pthread_create` inorder to intercept thread creation.  

Using `--wrap=pthread_create`, `pthread_create` calls will be resolved to `__wrap_pthread_create`.

## Run
```shell
$ make run
```
