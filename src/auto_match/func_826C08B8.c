typedef struct Obj { int a, b, refs; } Obj;
typedef struct Sub { Obj *o; int pad; int x; } Sub;
typedef struct T { int v; int pad; Sub s; } T;
extern void fn_826C0080(void *d, void *s);
static void Sub_copy(Sub *d, Sub *s) { d->o = s->o; d->o->refs++; fn_826C0080(&d->x, &s->x); }
T *fn_826C08B8(T *p, Sub *src, int v) { p->v = v; Sub_copy(&p->s, src); return p; }
