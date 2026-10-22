typedef void (*Free)(void *,void *,void *);
typedef struct Alloc { void *owner; int x; } Alloc;
typedef struct P { unsigned *begin,*end,*limit; Alloc allocator; } P;
static void release(Alloc *a,void *p) { (*(Free *)(*(int *)a->owner+0x18))(a->owner,p,&a->x); }
void fn_827D8C70(P *p) {
 unsigned *q=p->begin;
 if(q) { unsigned *i; for(i=q;i!=p->end;++i){} release(&p->allocator,q); }
 p->begin=0; p->end=0; p->limit=0;
}
