#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>

int main () {
int z = getpagesize();
	printf("%d \n",z);
	return z;
}