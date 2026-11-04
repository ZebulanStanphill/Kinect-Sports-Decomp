typedef struct Node_82271780 { struct Node_82271780 *next,*prev; unsigned key; int unk; void *ref; char pad[0x10a0]; int flag; } Node_82271780;
typedef struct List_82271780 { Node_82271780 *head; unsigned size; } List_82271780;
extern void fn_82271830(void *,void *);
extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);
static __forceinline int Want(Node_82271780 *n, unsigned key) { return n->flag != 0 && n->key != key; }
static __forceinline Node_82271780 *Adv(Node_82271780 *n) { return n->next; }
void fn_82271780(char *self,unsigned key) {
 List_82271780 *list=(List_82271780 *)(self+0xa8);
 Node_82271780 *it=list->head->next;
 Node_82271780 *next;
 while(it!=list->head) {
  if(!Want(it,key)) it=Adv(it);
  else {
   fn_82271830(self,&it->key);
   next=it->next;
   if(it!=list->head) {
    it->prev->next=next;it->next->prev=it->prev;
    if(it->ref) fn_822315A0(it->ref);
    fn_8265CA20(it);list->size--;
   }
   it=next;
  }
 }
}
