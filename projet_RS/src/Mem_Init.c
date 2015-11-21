#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include "Mem_Init.h"


int Mem_Init(int sizeOfRegion){
	int nbrPage = 1+sizeOfRegion*getpagesize(); // permet de connaître la taille d'une page dans l'architecture utilisée
	int fd =open("/dev/zero", O_RDWR);
	
	ptr = mmap(NULL, nbrPage * getpagesize(), PROT_READ | PROT_WRITE, MAP_PRIVATE, fd,0);
	if (ptr == MAP_FAILED){
		perror ("mmap");
		return -1;
	}
	int tab [nbrPage*getpagesize()];
	close(fd);	
	return 0;
}
