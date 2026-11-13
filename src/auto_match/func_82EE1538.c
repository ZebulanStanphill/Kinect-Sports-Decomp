typedef struct Obj_82EE1538 Obj_82EE1538;
typedef struct { void *f0[12]; __int64 (*f30)(Obj_82EE1538 *, unsigned); } Vt_82EE1538;
struct Obj_82EE1538 {
  Vt_82EE1538 *vt;
  int f4, f8;
  unsigned fc;
  int f10[4];
  __int64 f20;
  char pad28[0x48 - 0x28];
  char sub[0x254 - 0x48];
  unsigned count;
};
extern int fn_82EE1048(void *sub, unsigned i, unsigned *out);

int fn_82EE1538(Obj_82EE1538 *o, __int64 *out1, __int64 *out2)
{
  unsigned i;
  unsigned v;
  __int64 total;

  if (o->fc == 0) {
    return 0xc00d36b6;
  }
  total = 0x1a;
  for (i = 0; i < o->count; i++) {
    int hr = fn_82EE1048(o->sub, i, &v);
    total += o->vt->f30(o, hr >= 0 ? v : 0);
  }
  if (out1 != 0) {
    *out1 = total;
  }
  if (out2 != 0) {
    *out2 = total;
  }
  o->f20 = total;
  return 0;
}
