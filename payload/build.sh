gcc -c -Wall -Werror -fpic poc.c
gcc -shared -o libpoc.so poc.o