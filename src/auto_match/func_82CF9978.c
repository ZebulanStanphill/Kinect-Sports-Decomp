typedef struct Obj Obj;
struct Obj { struct VT *v; };
struct VT { void *a, *b; void (*f)(Obj *, void *, int); };
typedef struct { char pad[8]; int count; int pad2; Obj *o; } P;
void fn_82CF9978(P *p, void *a, int n) { p->count -= n; p->o->v->f(p->o, a, n); }
