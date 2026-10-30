typedef struct { int p; void *rc; } Ref_82521120;
typedef struct { int pad[0xd48 / 4]; void *x; } Sub_82521120;
typedef struct {
  char pad0[8];
  void *f8;
  char pad1[0x44];
  Sub_82521120 *f50;
  char pad2[4];
  Ref_82521120 ref;
} Obj_82521120;
extern void fn_822315A0(void *);
extern unsigned int fn_82511928(void);
extern void fn_82513D20(unsigned int, int, int);
extern void fn_8255BAF8(void *, void *);
extern unsigned int lbl_83297810;

void fn_82521120(Obj_82521120 *o)
{
  Ref_82521120 *r = &o->ref;
  void *c;
  unsigned int g;
  if (r->p != 0) {
    if (o->f50 != 0) {
      fn_8255BAF8(o->f50->x, o->f8);
      o->f50 = 0;
    }
    {
      int v = ((int *)r->p)[1];
      fn_82513D20(lbl_83297810 == 0 ? fn_82511928() : lbl_83297810, v, 0x1d);
    }
    c = r->rc;
    r->rc = 0;
    o->ref.p = 0;
    if (c != 0) fn_822315A0(c);
  }
}
