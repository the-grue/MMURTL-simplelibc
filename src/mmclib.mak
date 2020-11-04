#  Makefile for static library of MMURTL C Standard Library

CC = gcc
AS = gcc
CFLAGS = -std=gnu99 -O0 -nostdlib -m32 -march=i386 -ffreestanding -fno-pie -fno-common -fno-asynchronous-unwind-tables -I../include

SRC =	ctype/isalnum.c ctype/isalpha.c ctype/iscntrl.c ctype/isdigit.c \
	ctype/isgraph.c ctype/islower.c ctype/isprint.c ctype/ispunct.c \
	ctype/isspace.c ctype/isupper.c ctype/isxdigit.c ctype/tolower.c \
	ctype/toupper.c errno/errno.c stdio/fputs.c string/strlen.c \
	stdlib/exit.c stdio/stdfiles.c stdio/puts.c stdio/fopen.c \
	stdio/rename.c stdio/remove.c stdio/fclose.c stdio/fgetc.c \
	stdio/fgets.c stdio/ftell.c stdio/rewind.c stdio/fseek.c \
	stdio/fread.c stdio/fwrite.c stdio/fputc.c string/strcmp.c \
	string/strncmp.c string/strcpy.c string/strncpy.c string/strcat.c \
	string/strncat.c string/strchr.c fmt/print.c stdlib/rand.c \
	stdlib/srand.c

SRC2 =	startup/stdentry.c startup/procparm.c

OBJ = $(SRC:.c=.o)

OBJ2 = $(SRC2:.c=.o)

libc.a: $(OBJ)
	@echo "[Linking MMURTL Standard C Library]"
	@ar rcs $@ $^

stdentry.o: $(OBJ2)
	@echo "[Building Startup Library]"
	cp -p startup/stdentry.o .
	cp -p startup/procparm.o .

.c.o:
	@echo "[Compiling]" $<
	@$(CC) -c $(CFLAGS) $< -o $@

.s.o:
	@echo "[Assembling]" $<
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(OBJ2) libc.a procparm.o stdentry.o ../lib/libc.a ../lib/stdentry.o ../lib/procparm.o

all: libc.a stdentry.o

install:	libc.a stdentry.o
		cp -p libc.a ../lib
		cp -p stdentry.o ../lib
		cp -p procparm.o ../lib
