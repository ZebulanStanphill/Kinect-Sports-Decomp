typedef struct Obj Obj; typedef struct Vt { void *a,*b; void (*f)(Obj *, void *); } Vt; struct Obj { Vt *v; };
void fn_82FE4220(void **p, Obj *o) { if (p[1]) { o->v->f(o,p[1]); p[1]=0; } p[0]=0; }
