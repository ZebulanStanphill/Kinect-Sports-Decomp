typedef struct O O;
typedef struct { void *f[21]; } Vt;
struct O { Vt *vt; char pad[0x14]; unsigned short flag; };
typedef struct { int key; O *o; } Ent;
typedef struct { char pad[0x7c]; Ent *begin; Ent *end; } S;
void fn_82FAF128(S *s)
{
  Ent *e;
  for (e = s->begin; e != s->end; e++) {
    O *o = e->o;
    if (o->flag != 0) ((void (*)(O *))o->vt->f[20])(o);
  }
}
