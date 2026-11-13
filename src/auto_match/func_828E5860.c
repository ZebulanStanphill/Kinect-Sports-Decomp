extern void *fn_8265C9E0(unsigned);
extern void fn_828BDDA0(void *);
extern unsigned lbl_82027360, lbl_82027368;
typedef struct { void *v; char pad[76]; void *v2; char pad2[44]; unsigned a,b,c,d; } Obj;
typedef struct { unsigned a,b,c,d; } Tail;
static void clear(Tail *p) { p->a=0;p->b=0;p->c=0;p->d=0; }
Obj *fn_828E5860(void) {
 Obj *p=fn_8265C9E0(0x90);
 if(p) { fn_828BDDA0(p); p->v=&lbl_82027368; p->v2=&lbl_82027360; clear((Tail *)&p->a); return p; }
 return 0;
}
