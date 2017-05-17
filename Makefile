CC=cc
CFLAGS=-lncurses -I.
DEPS = main.h balance.h
OBJ = main.o loops.o boxes.o render.o updaters.o
.PHONY: clean

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

kittencremental: $(OBJ) 
	$(CC) -o $@ $^ $(CFLAGS)
	@echo Run make clean to make directory 99.9% pure.
clean:
	rm -f ./*.o
	@echo Clean. 
