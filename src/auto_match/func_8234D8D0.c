typedef struct { int f0; unsigned f4; } Ent_8234D8D0;
typedef struct { void *vt; char f4[4]; char f8[4]; } Sub_8234D8D0;
typedef struct {
  char pad0[0x14];
  Ent_8234D8D0 *first;
  Ent_8234D8D0 *last;
  Ent_8234D8D0 *end;
  char pad20[0xa8 - 0x20];
  Sub_8234D8D0 sub;
} Obj_8234D8D0;
extern void fn_822315A0(unsigned);
extern void fn_82359C18(void *);
extern void fn_8265CA20(void *);
extern char lbl_821C7FB8[];

static __inline void Destroy(Ent_8234D8D0 *p, Ent_8234D8D0 *e)
{
  for (; p != e; p++) {
    if (p->f4 != 0) fn_822315A0(p->f4);
  }
}

void fn_8234D8D0(Obj_8234D8D0 *o)
{
  Sub_8234D8D0 *s = &o->sub;
  fn_82359C18(s->f8);
  s->vt = lbl_821C7FB8;
  if (o->first != 0) {
    Destroy(o->first, o->last);
    fn_8265CA20(o->first);
  }
  o->first = 0;
  o->last = 0;
  o->end = 0;
}
