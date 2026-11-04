extern void fn_8267C498(void *);
extern void fn_826824B0(void *);
extern void fn_826CD3B0(void *,int);
extern void fn_826CECC8(void *);
extern void fn_8267BE38(void *);
struct Part_82703910 { void *a, *b; unsigned char flags; };
struct Item_82703910 { int head,zero; void *a,*b; int pad[4]; struct Part_82703910 part; int p; char rest[1]; };
struct Pool_82703910 { char pad[0x4c]; struct Item_82703910 *head; int p; unsigned count; };
static __forceinline void reset(void **slot) {
 if(*slot) fn_8267C498(*slot);
 *slot=0;
}
void fn_82703910(struct Pool_82703910 *pool, struct Item_82703910 *p) {
 p->zero=0;
 reset(&p->b);
 reset(&p->a);
 {struct Part_82703910 *q=&p->part;
 if(!(q->flags &2) && q->a) fn_826824B0(q->a);
 q->a=0;
 if(!(q->flags &1) && q->b) fn_826824B0(q->b);
 q->b=0;}
 fn_826CD3B0((char *)p+0x30,0);
 if(pool->count<50) { p->head=(int)pool->head;pool->head=p;pool->count++; }
 else {fn_826CECC8(p);fn_8267BE38(p);}
}
