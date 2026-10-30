typedef struct { int f0; int f4; int f8; int fc; unsigned f10; } Bits_82E82738;
extern double lbl_821551E0;
extern double lbl_8215F5F0;
extern void fn_82E8CA90(void *, int, int *);
extern void fn_82F02390(Bits_82E82738 *, int, int, int);
extern void fn_82F023B0(Bits_82E82738 *);
extern void fn_82F02410(Bits_82E82738 *, int, int);
extern void fn_82F025F0(Bits_82E82738 *);
#define I(off) (*(int *)((char *)p + (off)))
#define D(off) (*(double *)((char *)p + (off)))
#define BS (*(Bits_82E82738 **)((char *)p + 0x1ebc))

void fn_82E82738(void *p, int a, int *out)
{
  int v, w, k;
  fn_82F02390(BS, a, 0, 0);
  k = I(0x888);
  if (k == 0) {
    fn_82F02410(BS, 0, 2);
  } else if (k == 1) {
    fn_82F02410(BS, 1, 2);
  } else if (k == 2) {
    fn_82F02410(BS, 2, 2);
  }
  fn_82F02410(BS, 0, 1);
  fn_82F02410(BS, I(0xb08), 1);
  if (D(0x1e08) >= lbl_8215F5F0) v = 0x1f; else v = (int)D(0x1e08);
  if (D(0x1ed0) >= lbl_821551E0) w = 0x7ff; else w = (int)D(0x1ed0);
  fn_82F02410(BS, v >> 2, 3);
  fn_82F02410(BS, w >> 6, 5);
  fn_82F02410(BS, I(0x644), 1);
  fn_82F02410(BS, I(0x62c), 1);
  fn_82F02410(BS, I(0x64c), 1);
  fn_82F02410(BS, I(0x628), 1);
  fn_82F02410(BS, I(0x314), 1);
  fn_82F02410(BS, I(0xa04), 1);
  fn_82F02410(BS, I(0x978), 2);
  fn_82F02410(BS, I(0x648), 1);
  fn_82F02410(BS, I(0x604), 1);
  fn_82F02410(BS, I(0x920), 1);
  fn_82F02410(BS, I(0x8d4), 1);
  fn_82F02410(BS, I(0xafc), 1);
  I(0x848) = I(0x84c);
  fn_82F02410(BS, I(0x84c), 3);
  if (I(0x59c) != 0) {
    fn_82F02410(BS, 1, 1);
    k = I(0x594);
  } else {
    fn_82F02410(BS, 0, 1);
    k = I(0x5a0);
  }
  fn_82F02410(BS, k, 1);
  fn_82F02410(BS, I(0x5a4), 1);
  if (I(0xb08) != 0) {
    fn_82E8CA90(p, 0, out);
  } else {
    fn_82F02410(BS, 1, 1);
    fn_82F02410(BS, I(0x880), 1);
    fn_82F02410(BS, 0, 1);
    fn_82F025F0(BS);
    *out = ((0x27 - BS->f10) >> 3) + BS->f4;
    fn_82F023B0(BS);
  }
}
