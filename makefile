CC = gcc
CFLAGS = -Wall -g -c
INCLUDE = -l.
LIBS = -L. -lm

OBJS = phoneBookMain.o register.o printAll.o search.o delete.o

all : main
%.o : %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
main : $(OBJS)
	$(CC) -o main $(OBJS) $(LIBS)
clean:
	rm -f main $(OBJS)
