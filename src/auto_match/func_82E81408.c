typedef struct Node { char pad[0xc]; struct Node *next; } Node; typedef struct Obj { void * vt; int x4,x8; Node *head; int x10; } Obj; extern char lbl_8215F300[]; extern void fn_82E810B0(Node *,int);

void fn_82E81408(Obj *o) { o->vt=(void *)lbl_8215F300; while(o->head) { Node *next=o->head->next; {Node *inline_destroy_0=(o->head); if(inline_destroy_0) fn_82E810B0(inline_destroy_0,1); } o->head=next; } o->x10=0; }
