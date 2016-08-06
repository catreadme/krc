# Compiles every .c file in the current directory into ./bin
# and names the binary like the source file but without the .c extension

SRCS := $(wildcard *.c)

# Substitution reference. http://www.gnu.org/software/make/manual/make.html#Substitution-Refs
BINS := $(SRCS:%.c=bin/%)

CFLAGS=-Wall -g

.PHONY: all
all: $(BINS)

bin:
    mkdir: $@

.INTERMEDIATE: $(notdir $(BINS))

.DELETE_ON_ERROR:

# Static pattern rule to tell make how to handle all the `$(BINS)` files. http://www.gnu.org/software/make/manual/make.html#Static-Pattern
$(BINS) : bin/% : % | bin
	mv $^ $@
