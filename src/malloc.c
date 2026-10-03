#include"stdlib.h"
#include"stdio.h"
   #include <unistd.h>
#include"mymalloc.h"
      

void *mymalloc(size_t size){
   
void *ptr = NULL;
if(size == 0){
return NULL;    }


ptr = sbrk(size+sizeof(metadata));

if(ptr==(void*)-1){
return NULL;
}
    metadata *meta = (metadata*)ptr;
    
meta->size = size;
meta->free = 0;

return meta+1;
}