typedef struct Obj_829698F8 {
  char pad[0x14];
  unsigned **recs;
} Obj_829698F8;
extern int fn_82969740(Obj_829698F8 *, unsigned *, unsigned *);

int fn_829698F8(Obj_829698F8 *o, unsigned a, int b)
{
  unsigned *pb = o->recs[b];
  unsigned *pa = o->recs[a];
  int hr;
  unsigned u1, u5, u6;
  pb[0xc] = a;
  hr = fn_82969740(o, pa, pb);
  if (hr >= 0) {
    u1 = *pb & 0xe000000;
    u6 = *pa & 0xe000000;
    u5 = *pa & 0xf1ffffff;
    *pa = u5;
    if (u6 <= u1) {
      u6 = u1;
    }
    *pa = u5 | u6;
    if (pa[0x18] == 0) {
      pa[0x18] = pb[0x18];
      pa[0x19] = pb[0x19];
    }
    hr = 0;
  }
  return hr;
}
