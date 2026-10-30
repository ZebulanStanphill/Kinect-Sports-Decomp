extern void *fn_8265C9E0(unsigned);
extern void fn_822CA248(void *, void *);
extern void fn_8286D250(void *);
extern int lbl_821B03E8[];
extern int lbl_821B043C[];
int *fn_822C0928(void *param_1, void *param_2)
{
  int *p = (int *)fn_8265C9E0(0xe0);
  if (p != 0) {
    fn_822CA248(p, param_2);
    p[0x30] = 0;
    *p = (int)lbl_821B03E8;
    p[0x1a] = (int)lbl_821B043C;
    p[0x31] = 0;
    p[0x33] = 0;
    fn_8286D250(p + 0x34);
    return p;
  }
  return 0;
}
