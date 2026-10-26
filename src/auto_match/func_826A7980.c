typedef struct Obj { int a, b, refs; } Obj;
typedef struct Sub { Obj *o; int pad; int x; } Sub;
typedef struct T { int v; int pad; Sub s; } T;
extern void fn_82695DA0(void *d, void *s);
static void Sub_copy(Sub *d, Sub *s) { d->o = s->o; d->o->refs++; fn_82695DA0(&d->x, &s->x); }
T *fn_826A7980(T *p, Sub *src, int v) { p->v = v; Sub_copy(&p->s, src); return p; }
