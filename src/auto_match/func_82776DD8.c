typedef struct Node { struct Node *prev,*next; void *value; } Node;
typedef int (*Method)();
typedef struct { int a; void *obj; char pad[0x10]; unsigned char flag; char pad2[0x1f]; Node root; } Obj;
extern void fn_82775EB0(void *,int);
extern void fn_827B8018(void *);
void fn_82776DD8(Obj *o) { Node *n=o->root.next; while(n!=&o->root) { void **p=&n->value; if(*p) fn_82775EB0(*p,1); n=n->next; *p=0; } fn_827B8018((char*)o+0x40); if(o->obj && o->flag) { (*(Method *)((*(int*)o->obj)+0x88))(o->obj,(char*)o+0x10); o->obj=0; } }
