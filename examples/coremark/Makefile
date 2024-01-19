LDFLAGS += -lm -L../../../w2c2/wasi/build/ -lw2c2wasi
CFLAGS += -O3
W2C2 ?= ../../w2c2/build//w2c2

coremark: coremark.o main.o
	$(CC) $^ -o coremark $(LDFLAGS)

%.c: %.wasm
	$(W2C2) $< $@

%.o: %.c
	$(CC) -I../../w2c2 -c $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o coremark coremark.c coremark.h
