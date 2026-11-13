extern void fn_825165E0(void *);
extern void *fn_8265C9E0(unsigned);
extern void fn_828A8C50(void *, int, int);
extern unsigned int lbl_821969CC;

int *fn_82516380(int param_1)
{
  int *p = fn_8265C9E0(0x88);
  if (p != 0) {
    fn_828A8C50(p, param_1, 0);
    *p = (int)&lbl_821969CC;
    { int *v = p + 0x1a; v[0] = 0; v[1] = 0; v[2] = 0; }
    { int *v = p + 0x1e; v[0] = 0; v[1] = 0; v[2] = 0; }
    fn_825165E0(p);
    return p;
  }
  return 0;
}
