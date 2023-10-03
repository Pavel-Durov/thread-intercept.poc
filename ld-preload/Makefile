BIN_OUT=./dist


export LD_PRELOAD = ${PWD}/dist/pthread_intercept.so

build:
	mkdir -p ${BIN_OUT}
	clang++ -shared -o ${BIN_OUT}/pthread_intercept.so pthread_intercept.cpp -ldl
	clang++ -o ${BIN_OUT}/my_program main.cpp

run: build
	${BIN_OUT}/my_program
