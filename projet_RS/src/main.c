#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include "Mem_Init.h"
#include "Mem_Alloc.h"

int main() {
	Mem_Alloc(64);
return 0;
}