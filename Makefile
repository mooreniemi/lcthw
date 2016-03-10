# http://www.gnu.org/software/make/manual/html_node/Standard-Targets.html
# https://www.gnu.org/software/make/manual/html_node/Makefile-Contents.html
CLFALGS=-Wall -g

all: ex1 ex2 gcd

gcd:
	cc unity.c gcd.c gcd_test.c gcd_test_Runner.c -o gcd_test
	ruby Unity/auto/generate_test_runner.rb  gcd_test.c

clean:
	rm -f ex1
	rm -f ex2
	rm -f gcd
	rm -f gcd_test
	rm -f gcd_test_Runner
