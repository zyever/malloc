#ifndef _MALLOC_H
#define _MALLOC_H
#include <unistd.h>

void *mymalloc(size_t size);
typedef struct metadata {
    size_t size;
    int free;
    struct metadata *next;
} metadata;
void myfree(void *ptr);
#endif