CLFALGS=-Wall -g

all:
	cc     ex3.c   -o ex3
	cc     unity.c ex3.c ex3_test.c ex3_test_Runner.c -o ex3_test

clean:
	rm -f ex3
	rm -f ex3_test
