typedef struct B_82FAA150 B_82FAA150;
typedef struct A_82FAA150 A_82FAA150;
typedef struct C_82FAA150 { char pad[0x60]; unsigned v60; } C_82FAA150;
struct A_82FAA150 {
  struct { char p0[8]; A_82FAA150 *(*f8)(B_82FAA150 *); } *vt;
  char pad[0x3c];
  C_82FAA150 *c40;
};
typedef struct D_82FAA150 {
  struct { char p0[0x20]; unsigned (*f20)(struct D_82FAA150 *); } *vt;
  int p4, p8;
  struct D_82FAA150 *pc;
} D_82FAA150;
struct B_82FAA150 {
  struct { char p0[8]; D_82FAA150 *(*f8)(B_82FAA150 *); } *vt;
};
typedef struct {
  B_82FAA150 *a;
  struct { char pad[0x40]; int c40; } *b;
} Arg_82FAA150;

unsigned fn_82FAA150(void *unused, Arg_82FAA150 *p)
{
  D_82FAA150 *d;
  unsigned r;
  if (p->b->c40 != 0) {
    return ((C_82FAA150 *)p->b->c40)->v60;
  }
  d = p->a->vt->f8(p->a);
  r = d->vt->f20(d);
  if (r == 0) {
    r = d->pc->vt->f20(d->pc);
  }
  return r;
}
