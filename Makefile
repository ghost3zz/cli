# cli
CC = gcc
FILES = main.c cli.c handler.c
OUT = cli

build:
	$(CC) $(FILES) -o $(OUT)
