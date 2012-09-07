APPLICATION_NAME=nmu_sample_POK
APPLICATION_VERSION=0
APPLICATION_BUILD=0
CFLAGS_INCLUDE_DIRS=-I../../nmu
LIB_DEPENDS=
CFLAGS_DEP=
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
-Woverlength-strings \
-pedantic-errors 
#-Wextra 

SRC_DIR=.
LDFLAGS=$(LDFLAGS_DEP) $(GCC_LD_EXTRAFLAGS)
CFLAGS=$(CFLAGS_DEP) $(CFLAGS_INCLUDE_DIRS) $(SYMBOL_ADDONS) $(GCC_EXTRAFLAGS) $(GCC_COMMON_FLAGS)
NAME=$(APPLICATION_NAME)
CC=gcc

OBJ = nmu_sample_POK.o 

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

nmu_sample_POK.o : ./nmu_sample_POK.c
	$(CC) -o ./nmu_sample_POK.o -c ./nmu_sample_POK.c  $(CFLAGS) 



clean:
	find -name "*.o" -exec rm {} \;
