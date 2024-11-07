CFLAGS := $(shell pkg-config --cflags sdl2)
LIBS := $(shell pkg-config --libs sdl2)

game: ./src/main.c
	gcc $(CFLAGS) ./src/main.c $(LIBS) -o game

clean:
	rm -f game
