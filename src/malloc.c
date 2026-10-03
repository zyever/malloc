#include"stdlib.h"
#include"stdio.h"
   #include <unistd.h>
#include"mymalloc.h"
 metadata *head = NULL;
void *mymalloc(size_t size){
   

void *ptr = NULL;
if(size == 0){
return NULL;    }



 


ptr = sbrk(size+sizeof(metadata));

if(ptr==(void*)-1){
return NULL;
}
    metadata *meta = (metadata*)ptr;

     meta->next=NULL; 
meta->size = size;
meta->free = 0;
if(head==NULL){
head=meta;}
else{
    metadata *temp=head;
   
    while(temp->next!=NULL){
        
       
        temp=temp->next;}
        
        temp->next=meta;
        while(temp!=NULL){
            
            printf(" temp :%p ,temp->next:%p\n",temp,temp->next);
        temp=temp->next;
        }
}


   
 
return meta+1;
}