#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include "Mem_Init.h"

void * Mem_Alloc(int size) {
	void *ptrAlloc;
	/*if(sizeDec<size){
		return -1;
		printf("T'en a trop pris !!!!")
	}*/
	if(memInitDone !=1){
		//~ blabla
		memInitDone =1;
		Mem_Init(100000);
	}
		
	return ptrAlloc;
}
