#include"stdlib.h"
#include"stdio.h"
   #include <unistd.h>
#include"mymalloc.h"
      

void *mymalloc(size_t size){
void *ptr = NULL;
if(size == 0){
return NULL;    }
metadata meta;
meta.size=size;
ptr = sbrk(size+sizeof(metadata));
if(ptr==(void*)-1){
return NULL;
}
return ptr+sizeof(metadata);
}