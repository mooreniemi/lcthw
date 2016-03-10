# http://www.gnu.org/software/make/manual/html_node/Standard-Targets.html
# https://www.gnu.org/software/make/manual/html_node/Makefile-Contents.html
CLFALGS=-Wall -g

all: ex1 ex2 lcd

lcd:
	cc unity.c ex3.c ex3_test.c ex3_test_Runner.c -o ex3_test
	ruby Unity/auto/generate_test_runner.rb  ex3_test.c

clean:
	rm -f ex1
	rm -f ex2
	rm -f ex3
	rm -f ex3_test
	rm -f ex3_test_Runner
