#ifndef MEM_ALLOC_H
#define MEM_ALLOC_H
	typedef struct simpleChainList {
		int size;
		struct simpleChainedList *next;
	};
	void * Mem_Alloc(int size) ;
	
#endif