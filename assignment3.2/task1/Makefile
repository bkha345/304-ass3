# template Makefile
# refer to https://makefiletutorial.com/ for more info
# !! Adjust for the different tasks as necessary !!!

# GCC optimisation level
OPT = -O1 				

# the default target: add here all the targets that should be built when make
# is called without parameter
# use with `make`
default: cachetest1 cachetest2

# use different targets for the different assignment tasks, see first paragraph of assignment specification
# below a pair of example targets that can be used for one task

# example target: building cachetest1
# will invoke the compiling target below, because it depends on 'cachetest1.o'
cachetest1: cachetest1.o 
	gcc $(OPT) -o cachetest1 cachetest1.o

# example target: compiling cachetest1
cachetest1.o: cachetest1.c
	gcc $(OPT) -c cachetest1.c

# example target: building cachetest2
# will invoke the compiling target below, because it depends on 'cachetest2.o'
cachetest2: cachetest2.o 
	gcc $(OPT) -o cachetest2 cachetest2.o

# example target: compiling cachetest2
cachetest2.o: cachetest2.c
	gcc $(OPT) -c cachetest2.c
	
	
# cleanup target
# use with 'make clean'
clean:
	rm -f *.o
	rm -f cachetest1 cachetest2
