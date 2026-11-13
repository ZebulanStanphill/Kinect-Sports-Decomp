extern int fn_82230110(void *, const char *);
extern void *fn_822C7FD8(void *, __int64);
extern void *fn_8265C9E0(int);
extern char lbl_821AE1D0[];

int *fn_822EA6B8(__int64 param_1)
{
  int *p;

  p = (int *)fn_8265C9E0(0x110);
  if (p != 0) {
    fn_822C7FD8(p, param_1);
    p[0] = (int)lbl_821AE1D0;
    { int *q = p + 0x30; q[0] = 0; q[1] = 0; q[2] = 0; q[3] = 0; q[4] = 0; q[5] = 0; }
    fn_82230110(p + 0x36, "idle_standing");
    fn_82230110(p + 0x3d, "locomotion_standing");
    return p;
  }
  return 0;
}
