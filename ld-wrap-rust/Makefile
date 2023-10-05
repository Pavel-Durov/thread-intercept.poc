BIN_OUT=./dist

build: build-lib build-c

build-lib:
	# mkdir -p ${BIN_OUT}
	# rustc --crate-type cdylib -o ./${BIN_OUT}/pthread_intercept ./src/pthread_intercept.rs
	cargo build

build-c:
	cc -o ${BIN_OUT}/my_program ./src/main.c ./target/debug/deps/libld_wrap_rust.so -Wl,--wrap=pthread_create

run: build-lib build-c
	./dist/my_program