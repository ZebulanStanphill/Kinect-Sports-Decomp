typedef struct Obj Obj; struct Obj { unsigned char (**vt)(Obj *); };
typedef struct { unsigned int type; int pad[8]; Obj *p; } S;
unsigned char fn_82415550(S *s) { return s->type == 10 && s->p->vt[0](s->p); }
