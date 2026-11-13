extern int fn_82517DC8(int *, int);
extern int *fn_8265C9E0(unsigned int);
extern unsigned int lbl_821B7C00;
extern unsigned int lbl_821B7C50;

int * fn_82256368(int param_1)
{
  int *p;

  p = fn_8265C9E0(0xa0);
  if (p != 0) {
    fn_82517DC8(p, param_1);
    p[0x20] = 0;
    *p = (int)&lbl_821B7C00;
    p[0x1a] = (int)&lbl_821B7C50;
    p[0x26] = 0;
    return p;
  }
  return 0;
}
