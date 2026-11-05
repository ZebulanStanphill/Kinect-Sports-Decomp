typedef struct {
  int a, b, c, d;
  int pad4, pad5, pad6;
  int e;
  int pad8;
  int cs[7];
  int f, g, h, i;
} Item_func_82FA4FA0;

extern int lbl_83264208;
extern int lbl_8326420C;
extern Item_func_82FA4FA0 *lbl_83264210;
extern unsigned char lbl_83264214;

extern void *fn_8306C068(unsigned);
extern void RtlInitializeCriticalSection(void *);

int fn_82FA4FA0(int n)
{
  int i;
  Item_func_82FA4FA0 *it;
  lbl_83264210 = fn_8306C068(n * 0x50);
  if (lbl_83264210 == 0)
    return 2;
  for (i = 0; i < n; i++) {
    it = lbl_83264210 + i;
    if (it != 0) {
      RtlInitializeCriticalSection(it->cs);
      it->a = 0;
      it->b = 0;
      it->c = 0;
      it->d = 0;
      it->e = 1;
      it->f = 0;
      it->g = 0;
      it->h = 0;
      it->i = 0;
    }
  }
  lbl_83264208 = n;
  lbl_8326420C = 0;
  lbl_83264214 = 1;
  return 1;
}
