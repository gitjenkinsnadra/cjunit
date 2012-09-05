APPLICATION_NAME=cunit_TEST
APPLICATION_VERSION=0
APPLICATION_BUILD=0
CFLAGS_INCLUDE_DIRS=
LIB_DEPENDS=cunit
CFLAGS_DEP=$(shell pkg-config --cflags $(LIB_DEPENDS) )
LDFLAGS_DEP=$(shell pkg-config --libs $(LIB_DEPENDS) )
GCC_COMMON_FLAGS=
#-Wall \
#-Wextra \
#-pedantic-errors \
#-Wdouble-promotion \
#-Winit-self \
#-Wmissing-include-dirs \
#-Wswitch-default \
#-Wdeclaration-after-statement \
#-Wshadow \
#-Wunsafe-loop-optimizations \
#-Wbad-function-cast \
#-Wcast-qual \
#-Wcast-align \
#-Wwrite-strings \
#-Wjump-misses-init \
#-Wlogical-op \
#-Wstrict-prototypes \
#-Wold-style-definition \
#-Wmissing-prototypes \
#-Wmissing-declarations \
#-Wmissing-format-attribute \
#-Wredundant-decls \
#-Wnested-externs \
#-Winline \
#-Winvalid-pch \
#-Wdisabled-optimization \
#-Woverlength-strings \
#-mmmx \
#-m3dnow \
#-msse

# -O2
# -Wtraditional-conversion
# -Waggregate-return
# -Wpadded
# -Wunsuffixed-float-constants

SRC_DIR=.
LDFLAGS=$(LDFLAGS_DEP) $(GCC_LD_EXTRAFLAGS)
CFLAGS=$(CFLAGS_DEP) $(CFLAGS_INCLUDE_DIRS) $(SYMBOL_ADDONS) $(GCC_EXTRAFLAGS) $(GCC_COMMON_FLAGS)
NAME=$(APPLICATION_NAME)
CC=gcc

OBJ = cunit_TEST.o 

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

cunit_TEST.o : ./cunit_TEST.c
	$(CC) -o ./cunit_TEST.o -c ./cunit_TEST.c  $(CFLAGS) 



clean:
	find -name "*.o" -exec rm {} \;
	find -name "*.~" -exec rm {} \;
