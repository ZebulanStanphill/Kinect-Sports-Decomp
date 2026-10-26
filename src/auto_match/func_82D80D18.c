typedef struct O O;
typedef struct { void *f[6]; } Vt;
struct O { Vt *vt; };
typedef struct { char pad[0x5c]; O *o; } S;
void fn_82D80D18(S *s)
{
  if (s->o != 0) {
    ((void (*)(O *, int))s->o->vt->f[5])(s->o, 0);
  }
}
