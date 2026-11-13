extern unsigned int fn_82924628(void *, unsigned int);
extern unsigned int fn_82B8FDD0(void *, unsigned int);
extern int fn_82B98678(void *, unsigned int, unsigned int, int);
void *memcpy(void *d, const void *s, unsigned int n);


typedef struct {
  char p0[0x10]; int f10; char p14[0x3c - 0x14]; unsigned int f3c; unsigned int f40; char p44[0x4c - 0x44]; unsigned int f4c;
  char p50[4]; unsigned int f54; char p58[0x68 - 0x58]; int f68; char p6c[0x80 - 0x6c]; unsigned int f80; unsigned int f84; char p88[0x9c - 0x88]; int f9c; int fa0;
} P_82B98AD0;
void fn_82B98AD0(P_82B98AD0 *p, int a, int b, unsigned int src)
{
  int r;
  if (p->f54 != 0) {
    src = fn_82924628(p, src);
  }
  if (p->f10 != 0) {
    src = fn_82B8FDD0(p, src);
  }
  { unsigned int x = p->f40 + a; unsigned int y = p->f4c + b; r = fn_82B98678(p, x, y, p->f9c != p->f68); }
  if (r >= 0) {
    memcpy((void *)(((p->f3c - p->f84) & 0xfffffff) * 0x10 + p->f80), (void *)src, p->f68 << 4);
    p->fa0 = 1;
  }
}
