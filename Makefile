SDL_CFLAGS := $(shell sdl-config --cflags)
SDL_LDFLAGS := $(shell sdl-config --libs)

	
build:
	$(CC) src/main.c $(SDL_LDFLAGS) $(SDL_CFLAGS) -o game
