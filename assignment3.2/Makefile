# template Makefile
# refer to https://makefiletutorial.com/ for more info
# !! Adjust for the different tasks as necessary !!!

# GCC optimisation level
OPT = -O1 				

# the default target: add here all the targets that should be built when make
# is called without parameter
# use with `make`
default: matrix1

# use different targets for the different assignment tasks, see first paragraph of assignment specification
# below a pair of example targets that can be used for one task

# example target: building matrix1
# will invoke the compiling target below, because it depends on 'matrix1.o'
matrix1: matrix1.o
	gcc $(OPT) -o matrix1 matrix1.o

# example target: compiling matrix1
matrix1.o: matrix1.c
	gcc $(OPT) -c matrix1.c

# cleanup target
# use with 'make clean'
clean:
	rm -f *.o
	rm -f matrix1 
