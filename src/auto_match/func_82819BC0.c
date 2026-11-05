extern void fn_82823080(void *, void *);
extern void fn_828230A8(void *, void *);
typedef struct { char pad[0x14]; unsigned m14; } Blk_82819BC0;
typedef struct { char pad[0x20]; unsigned m20; } Hd_82819BC0;
extern struct { unsigned best; int size; } lbl_8320A5F0;
int fn_82819BC0(Blk_82819BC0 *o, int need, unsigned short al, int off)
{
  int d;
  Blk_82819BC0 *out1;
  Blk_82819BC0 *out2;
  unsigned b = (unsigned)o - 0x10;
  d = o->m14 - need;
  if (d >= 0) {
    unsigned u = ((Hd_82819BC0 *)b)->m20 + off;
    unsigned a = al;
    if (((a - 1) & u) != 0) d = (u - ((a + u - 1) & ~(a - 1))) + d;
    if (d >= 0) {
      if (lbl_8320A5F0.best == 0 || d < lbl_8320A5F0.size || (d == lbl_8320A5F0.size && b < lbl_8320A5F0.best)) {
        lbl_8320A5F0.best = b;
        lbl_8320A5F0.size = d;
      }
      fn_82823080(o, &out1);
      if (out1 != 0) fn_82819BC0(out1, need, al, off);
      return 1;
    }
  }
  fn_828230A8(o, &out2);
  if (out2 != 0 && fn_82819BC0(out2, need, al, off) != 0) return 1;
  return 0;
}