APPLICATION_NAME=nminut_example
APPLICATION_VERSION=0
APPLICATION_BUILD=0
CFLAGS_INCLUDE_DIRS="../nminunit"
LIB_DEPENDS=
#CFLAGS_DEP=$(shell pkg-config --cflags $(LIB_DEPENDS) )
#LDFLAGS_DEP=$(shell pkg-config --libs $(LIB_DEPENDS) )
GCC_COMMON_FLAGS= \
-Wall \
-Wdouble-promotion \
-Winit-self \
-Wmissing-include-dirs \
-Wswitch-default \
-Wdeclaration-after-statement \
-Wshadow \
-Wunsafe-loop-optimizations \
-Wbad-function-cast \
-Wcast-qual \
-Wcast-align \
-Wwrite-strings \
-Wjump-misses-init \
-Wlogical-op \
-Wstrict-prototypes \
-Wold-style-definition \
-Wmissing-prototypes \
-Wmissing-declarations \
-Wmissing-format-attribute \
-Wredundant-decls \
-Wnested-externs \
-Winline \
-Winvalid-pch \
-Wdisabled-optimization \
-Woverlength-strings 
#-pedantic-errors 
#-Wextra 

SRC_DIR=.
LDFLAGS=$(LDFLAGS_DEP) $(GCC_LD_EXTRAFLAGS)
CFLAGS=$(CFLAGS_DEP) $(CFLAGS_INCLUDE_DIRS) $(SYMBOL_ADDONS) $(GCC_EXTRAFLAGS) $(GCC_COMMON_FLAGS)
NAME=$(APPLICATION_NAME)
CC=gcc

OBJ = nminut_example.o 

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

nminut_example.o : ./nminut_example.c
	$(CC) -o ./nminut_example.o -c ./nminut_example.c  $(CFLAGS) 



clean:
	find -name "*.o" -exec rm {} \;
