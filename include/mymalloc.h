#ifndef _MALLOC_H
#define _MALLOC_H



#include <unistd.h>

       int brk(void *addr);
       void *sbrk(intptr_t increment);

void *mymalloc(size_t size);

#endif