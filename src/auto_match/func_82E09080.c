typedef struct Obj Obj; typedef struct Vt { void *a,*b,*c; void (*f)(Obj *, void *); } Vt; struct Obj { Vt *v; };
void fn_82E09080(Obj *o, void **p) { while (*p) { o->v->f(o,*p); ++p; } }
