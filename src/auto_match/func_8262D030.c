typedef struct { char pad[8]; unsigned char *bits; } Bits_8262D030;
typedef struct { char pad[0xf0]; Bits_8262D030 *bm; } Mgr_8262D030;
typedef struct { Mgr_8262D030 *mgr; char pad[0x41]; unsigned char flag; } Glob_8262D030;
typedef struct { char pad0[8]; int a; unsigned idx; int want; } Arg_8262D030;
extern Glob_8262D030 lbl_83265988;

char fn_8262D030(int param_1, Arg_8262D030 *p)
{
  unsigned i;
  unsigned char b;
  if (lbl_83265988.flag != 0) {
    i = p->idx;
    b = lbl_83265988.mgr->bm->bits[i >> 3];
    if (p->want == ((b & (1 << (i & 7))) != 0)) {
      return (p->a == 0) + 1;
    }
  }
  return 0;
}
