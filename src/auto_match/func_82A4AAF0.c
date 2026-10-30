extern void fn_82A411B8(void *);
extern int lbl_82089C10;
typedef struct { void *v; char pad[4]; char a[0x48]; char b[0x24]; } Sub;
typedef struct { int n; Sub s; } S;
void fn_82A4AAF0(S *p) { Sub *s=&p->s; p->n=0; s->v=&lbl_82089C10; p->s.v=0; fn_82A411B8((char *)s+0x50); fn_82A411B8((char *)s+8); }
