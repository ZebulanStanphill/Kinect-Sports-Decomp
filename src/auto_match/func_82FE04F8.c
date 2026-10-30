typedef struct {
  char pad0[0xa4];
  char sub1[0xc];
  char sub2[0x18];
  unsigned count;
  char pad1[4];
  unsigned char enabled;
  char pad2[0x6f];
  float scale;
} Obj_82FE04F8;
extern int fn_82FE41A0(void *, unsigned, unsigned);
extern float lbl_82006848;

int fn_82FE04F8(Obj_82FE04F8 *o, unsigned a, unsigned flags)
{
  unsigned n;
  int r;
  if (o->enabled != 0) {
    n = (unsigned)((float)o->count * o->scale * lbl_82006848);
    if (n != 0) {
      if ((flags & 0x10) != 0) {
        r = fn_82FE41A0(o->sub1, a, n);
        if (r != 1) return r;
      }
      if ((flags & 0x20) != 0) {
        r = fn_82FE41A0(o->sub2, a, n);
        if (r != 1) return r;
      }
    }
  }
  return 1;
}
