extern void *fn_8265C9E0(int);
extern void fn_82517DC8(void *, void *);
extern int lbl_821B5DA0;
extern int lbl_821B5DE8;

int *fn_82257B60(void *param_1)
{
  int *p;

  p = fn_8265C9E0(0xa0);
  if (p != 0) {
    fn_82517DC8(p, param_1);
    p[0] = (int)&lbl_821B5DA0;
    p[0x1a] = (int)&lbl_821B5DE8;
    p[0x20] = 1;
    p[0x26] = 0;
    return p;
  }
  return 0;
}
