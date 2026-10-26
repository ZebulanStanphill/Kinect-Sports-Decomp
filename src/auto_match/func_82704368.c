typedef struct Obj { int a, b, refs; } Obj;
typedef struct Sub { Obj *o; int x; } Sub;
typedef struct T { int v; Sub s; } T;
extern void fn_82702DE0(void *d, void *s);
static void Sub_copy(Sub *d, Sub *s) { d->o = s->o; d->o->refs++; fn_82702DE0(&d->x, &s->x); }
T *fn_82704368(T *p, Sub *src, int v) { p->v = v; Sub_copy(&p->s, src); return p; }
