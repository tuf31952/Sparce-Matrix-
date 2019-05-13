# define a target for the application
#
all: Example.exe
#
Example.exe: Example.cc example_00.cc
  g++ -g -O2 -lm Example.cc mytest_00.cc -o mytest.exe
#
Example.o: Example.cc Example.h Makefile
  g++ -O2 -c Example.cc -o Example.o
#
example.o: example_00.cc Example.h Makefile
  g++ -O2 -c example_00.cc -o example_00.cc.o
#
clean:
  rm -f Example.o example_00.o Example.exe
#
# end of file