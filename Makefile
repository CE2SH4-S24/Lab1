CC=gcc
CFLAGS=-I. -lm
DEPS = *.h
OBJ = AllTests.o testCases.o CuTest.o Questions.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Lab1: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

#testCompile: AllTests.c testCases.c CuTest.c Questions.c
#	gcc -o testLab1 AllTests.c testCases.c CuTest.c Questions.c

test:	testLab1
testLab1:
# next line must start with a real TAB (ASCII 9)
	./run.sh

.PHONY: clean

clean:
	$(RM) *.o 
