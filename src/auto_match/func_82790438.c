typedef struct { int x, y; } Sub; typedef struct { int x; Sub a,b; int c,d,e,f,g; char i; } O;
extern void fn_8268C3A8(Sub *, void *);
O *fn_82790438(O *p, void *q) { p->x=0; fn_8268C3A8(&p->a,q); fn_8268C3A8(&p->b,q); p->c=0; p->d=0; p->e=0; p->f=0; p->g=-1; p->i=0; return p; }
