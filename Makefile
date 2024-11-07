CFLAGS := $(shell pkg-config --cflags sdl2)
LIBS := $(shell pkg-config --libs sdl2)

game: main.c
	gcc $(CFLAGS) main.c $(LIBS) -o game

clean:
	rm -f game
