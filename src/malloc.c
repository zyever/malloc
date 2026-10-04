#include"stdlib.h"
#include"stdio.h"
   #include <unistd.h>
#include"mymalloc.h"
 metadata *head = NULL;
void *mymalloc(size_t size){
   

void *ptr = NULL;
if(size == 0){
return NULL; }





if(head==NULL){
    ptr=sbrk(size+sizeof(metadata));
    if(ptr==(void*)-1){
        return NULL;
    }
   metadata *meta = (metadata*)ptr;
    meta->next=NULL;
    meta->size = size;
    meta->free = 0;
    head=meta;
    return meta+1;
}


else{
    metadata *temp=head;
   metadata *temp1;
    while(temp!=NULL){
        if(temp->free && temp->size >= size){
            temp->free = 0;
            return temp+1;
        }
     temp1=temp;
        temp=temp->next;
        
    }


         ptr=sbrk(size+sizeof(metadata));
          if(ptr==(void*)-1){
             return NULL;
         }
         metadata *meta = (metadata*)ptr;
        
         meta->next=NULL;
    meta->size = size;
    meta->free = 0;
        temp1->next=meta;
        return meta+1;





    
}



}