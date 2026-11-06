typedef struct VT_82E7B810 {
  int (*s0)(void *);
  int (*s1)(void *);
  int (*s2)(void *);
} VT_82E7B810;
typedef struct Iface_82E7B810 { VT_82E7B810 *vt; } Iface_82E7B810;
typedef struct Obj2_82E7B810 {
  Iface_82E7B810 base;
  int pad;
  int *vbtbl;
} Obj2_82E7B810;
typedef struct Obj_82E7B810 {
  int pad0[2];
  int f8;
  int fc;
  int pad1[4];
  Obj2_82E7B810 *p20;
} Obj_82E7B810;
extern unsigned int fn_82E50BE8(int, int, int, int, int);
extern Obj2_82E7B810 *fn_82EECAE0(unsigned int, int, int, int, int);
int fn_82E7B810(Obj_82E7B810 *o)
{
  Obj2_82E7B810 *r;
  char *adj;
  unsigned int m;
  if (o->p20 != 0) {
    o->p20->base.vt->s2(o->p20);
    o->p20 = 0;
  }
  m = fn_82E50BE8(0xd0, 0, 0, 0, 0);
  r = m != 0 ? fn_82EECAE0(m, o->f8, o->fc, 1, 1) : 0;
  o->p20 = r;
  if (r == 0) return 0x8007000e;
  adj = (char *)r + r->vbtbl[2];
  return ((Iface_82E7B810 *)(adj + 8))->vt->s0(adj + 8);
}
