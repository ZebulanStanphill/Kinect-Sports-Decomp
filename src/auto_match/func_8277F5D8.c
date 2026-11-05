typedef struct Key_8277F5D8 { int a, b, c, d, e, f; } Key_8277F5D8;
extern void fn_8277E928(void *, Key_8277F5D8 *);

int fn_8277F5D8(int self, int v)
{
  Key_8277F5D8 k;
  unsigned idx;
  k.a = 0;
  k.b = -1;
  k.c = -1;
  k.d = -1;
  k.e = v;
  k.f = 0;
  fn_8277E928((void *)(self + 0x154), &k);
  idx = *(int *)(self + 0x154) - 1;
  return *(int *)((idx >> 4 & 0xffffffc) + *(int *)(self + 0x160)) + (idx & 0x3f) * 0x18;
}
