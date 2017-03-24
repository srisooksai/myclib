LDIR = $(PWD)/lib
LIBout = libmydev.so.1.0
LIBso1 = $(LDIR)/libmydev.so.1
LIBso1o = $(LDIR)/$(LIBout)
CC = gcc
ODIR = ./obj
SDIR = ./src

INC = -I./include

OFLAGES = -Wall -fPIC -c

LFLAGES = -shared -Wl

SRC = $(wildcard $(SDIR)/*.c)
OBJS = $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRC))

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) $(OFLAGES) $(INC) $< -o $@  $(CFLAGS) 

all: $(OBJS) 
	$(CC) $(LFLAGES),-soname,$(LIBso1) -o $(LIBso1o) $^
	ln -sf $(LIBout) $(LDIR)/libmydev.so
	ln -sf $(LIBout) $(LDIR)/libmydev.so.1

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(LDIR)/libmydev* cprog
