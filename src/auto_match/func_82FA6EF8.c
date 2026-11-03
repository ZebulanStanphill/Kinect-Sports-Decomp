typedef struct Obj_82FA6EF8 Obj_82FA6EF8;
typedef struct VT_82FA6EF8 {
  void *f[8];
  unsigned (*f20)(Obj_82FA6EF8 *);
} VT_82FA6EF8;
typedef struct Sub_82FA6EF8 {
  char pad[0x20];
  unsigned f20;
  unsigned pad24;
  unsigned f28;
} Sub_82FA6EF8;
struct Obj_82FA6EF8 {
  VT_82FA6EF8 *vt;
  char pad[0x38 - 4];
  Sub_82FA6EF8 *f38;
  Obj_82FA6EF8 *f3c;
};

extern int fn_82FA8A88(Obj_82FA6EF8 *, unsigned, unsigned);
extern Obj_82FA6EF8 *lbl_83264234;

int fn_82FA6EF8(int param_1, unsigned param_2, unsigned param_3, unsigned param_4, unsigned param_5)
{
  Obj_82FA6EF8 *p, *n;
  int r = 1;
  unsigned npos = -1;
  n = lbl_83264234;
  if (n != 0) do {
    p = n;
    n = p->f3c;
    if (p->vt->f20(p) == param_2 &&
        (param_3 == 0 || p->f38->f28 == param_3) &&
        (param_5 == 0 || p->f38->f20 == param_5) &&
        fn_82FA8A88(p, param_4, npos) != 1)
      r = 2;
  } while (n != 0);
  return r;
}
