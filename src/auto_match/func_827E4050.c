typedef struct Node_827E4050 {struct Node_827E4050 *next,*prev;unsigned val;}Node_827E4050;
typedef struct HeapRef_827E4050 {void *heap;int tag;}HeapRef_827E4050;
typedef struct List_827E4050 {Node_827E4050 *head;unsigned size; HeapRef_827E4050 alloc;}List_827E4050;
static __forceinline void freeNode(HeapRef_827E4050 *h,void *p) {(*(void(**)(void*,void*,void*))(*(unsigned*)h->heap+24))(h->heap,p,&h->tag);}
void fn_827E4050(List_827E4050 *l,unsigned *key) {Node_827E4050 *head=l->head;unsigned value=*key;Node_827E4050 *n=head->next;while(n!=head) {if(n->val==value){Node_827E4050 *p=n;Node_827E4050 *prev=n->prev;n=n->next;prev->next=n;n->prev=prev;freeNode(&l->alloc,p);--l->size;}else n=n->next;}}