CC = gcc
CFLAGS = -W -Wall
TARGET = project
DTARGET = project_debug
OBJECTS = product.o manager.c main.c

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@  $^

clean:
	rm *.o project project_debug

