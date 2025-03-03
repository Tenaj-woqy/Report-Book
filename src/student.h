CC = gcc
CFLAGS = -Wall

all: reportbook

reportbook: main.c report.c student.c
 $(CC) $(CFLAGS) main.c report.c student.c -o reportbook

clean:
 rm -f reportbook
