#$@ Le nom de la cible
#$< Le nom de la première dépendance
#$^ La liste des dépendances
#$? La liste des dépendances plus récentes que la cible
#$* Le nom du fichier sans suffixe

CFLAGS =
LDFLAGS =

C_SRCS =
CPP_SRCS = \
	main.cpp
OBJS = \
	../build/main.o
LIBS = \
	../build/libComponent.a

.PHONY: all

all: test.bin

test.bin: $(OBJS)
	$(CXX) $(CFLAGS) $(LDFLAGS) -o ../build/$@ $(OBJS) $(LIBS)

%.o: $(C_SRCS) $(CPP_SRCS)
	$(CXX) $(CFLAGS) $(LDFLAGS) -c $(C_SRCS) $(CPP_SRCS) -o $@

clean:
	#rm $(OBJS)