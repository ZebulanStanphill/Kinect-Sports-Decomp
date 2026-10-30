typedef struct Obj Obj; struct Obj { void (**vt)(Obj *); };
typedef struct { int pad; Obj **p; int pad2[3]; void *active; } S;
void fn_82493E00(S *s) { if (s->active) { Obj *o = *s->p; o->vt[3](o); } }
