CC = gcc
CFLAGS = -std=c99
TARGET = deater
OBJS = main.o func.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o: main.c
	$(CC) -c main.c
func.o: func.c
	$(CC) $(CFLAGS) -c func.c

clean:
	/bin/rm -f *.o $(TARGET)