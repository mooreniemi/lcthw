CLFALGS=-Wall -g

all:
	cc     ex3.c   -o ex3
	cc     ex3_test.c   -o ex3_test

clean:
	rm -f ex3
	rm -f ex3_test
