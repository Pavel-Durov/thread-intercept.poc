## Intercepting pthread_create using LD_PRELOAD environment variable here

## Run
```shell
$ make run
```

With this configuration, the target program will need to be built with the `LD_PRELOAD` environment variable set to the thread interception library.
