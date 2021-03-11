#$@ Le nom de la cible
#$< Le nom de la première dépendance
#$^ La liste des dépendances
#$? La liste des dépendances plus récentes que la cible
#$* Le nom du fichier sans suffixe

CFLAGS =
LDFLAGS =

C_SRCS =
CPP_SRCS = \
	src/component.cpp
OBJS = \
	build/component.o

.PHONY: all

all: libComponent.a test.bin

libComponent.a: $(OBJS)
	ar -r "build/$@" $(OBJS) $(LIBS)

test.bin:
	cd test && $(MAKE)

%.o: $(C_SRCS) $(CPP_SRCS)
	$(CXX) $(CFLAGS) $(LDFLAGS) -c $(C_SRCS) $(CPP_SRCS) -o $@

clean:
	#rm $(OBJS)
	#cd test && $(MAKE) clean