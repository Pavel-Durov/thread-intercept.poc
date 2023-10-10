BIN_OUT=./dist

run: build
	./dist/main

build:
	mkdir -p ${BIN_OUT}
	gcc -shared -fPIC -o ${BIN_OUT}/thread.o thread.c -pthread
	gcc -o ${BIN_OUT}/main ./main.c -Wl,--wrap=pthread_create
