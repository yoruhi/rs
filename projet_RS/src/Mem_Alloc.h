#ifndef MEM_ALLOC_H
#define MEM_ALLOC_H
	typedef struct simpleChainedList {
		int size;
		struct simpleChainedList *next;
	};
	void * Mem_Alloc(int size) ;
	
#endif