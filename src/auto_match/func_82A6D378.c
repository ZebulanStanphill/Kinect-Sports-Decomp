typedef struct { unsigned short v; short pad[5]; unsigned short *q; int pad2[3]; } T; /* 0x1c */
typedef struct { char pad[0x1a8]; T *t; char pad2[0x6f0 - 0x1ac]; } U;
typedef struct { char pad[0x22]; unsigned short n; char pad2[0x140 - 0x24]; U *u; } O;

void fn_82A6D378(O **pp, int idx)
{
  O *o = *pp;
  int i;

  for (i = 0; i < o->n; i++) {
    U *u = &o->u[i];
    T *t = &u->t[idx];
    t->v = 0;
    *t->q = 0;
  }
}
