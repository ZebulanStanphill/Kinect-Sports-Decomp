typedef void (*Dtor)(void *,int);
typedef struct Child Child;
typedef struct { char pad[0x110]; void *context; char p1[0x50]; void *data; char p2[8]; int a,b,c,d; void *ready; } Item;
struct Child { Dtor *vt; char pad[0x188]; unsigned count; Item **items; };
typedef struct { char pad[12]; void *resource; Child *children; } Sub;
extern void fn_82563400(void *,int,void *,int,int,int);
void fn_8252D020(char *p,int flag) {
 Sub *s=(Sub *)(p+0x180); Child *list; unsigned i;
 if(s->resource) { void *obj=*(void **)(p+0x8c0); (*(void (**)(void *,void *))(*(int *)obj+0x54))(obj,s->resource); s->resource=0; }
 list=s->children;
 if(list) {
  if(flag) for(i=0;i<list->count;i++) { Item *e=list->items[i]; if(e->ready && e->data && e->context) fn_82563400(e->context,e->d,e->data,e->a,e->b,e->c); }
  list=s->children; if(list) list->vt[0](list,1); s->children=0;
 }
}
