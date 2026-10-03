#ifndef _MALLOC_H
#define _MALLOC_H
#include <unistd.h>

void *mymalloc(size_t size);
typedef struct {
size_t size;
} metadata;

#endif