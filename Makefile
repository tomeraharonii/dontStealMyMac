#
# Makefile for lab 4 part 1
#

CC  = gcc
CXX = g++

CFLAGS   = -g -Wall $(INCLUDES)
CXXFLAGS = -g -Wall $(INCLUDES)


.PHONY: default
default: pipeProg 

mdb-lookup: pipeProg.o

.PHONY: run
run:
	/bin/bash run.sh

.PHONY: clean
clean:
	rm -f *.o *~ a.out core pipeProg 

.PHONY: all
all: clean default

