typedef struct Node_82D01840 { struct Node_82D01840 *next; unsigned key; int unused; int size; } Node_82D01840;
typedef struct Allocator_82D01840 { void (**vt)(); } Allocator_82D01840;
typedef struct Pool_82D01840 { char pad[16]; Node_82D01840 *head; char pad2[20]; int used, total; Allocator_82D01840 *allocator; } Pool_82D01840;
void fn_82D01840(Pool_82D01840 *self,unsigned limit) {
 Node_82D01840 *node=self->head; Node_82D01840 **link=&self->head;
 while(node) {
  if(node->key <= limit) {
   Node_82D01840 *next=node->next;
   int used;
   Allocator_82D01840 *alloc;
   *link=next;
   used=self->used; alloc=self->allocator;
   self->total -= node->size;
   self->used=used-node->size;
   alloc->vt[2](alloc,node);
   node=next;
  } else {link=&node->next;node=node->next;}
 }
}
