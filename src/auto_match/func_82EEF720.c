typedef struct { int v[4]; } V4_82EEF720;
extern int fn_82E58050(void *);
extern char lbl_821602C8[];
extern char lbl_8215FDD0[];
extern V4_82EEF720 lbl_82154B28;

void *fn_82EEF720(void **p)
{
  int *q = (int *)p;
  fn_82E58050(p);
  p[0] = lbl_821602C8;
  p[1] = lbl_8215FDD0;
  q[2] = 1;
  *(V4_82EEF720 *)(q + 4) = lbl_82154B28;
  q[0x12] = 0;
  q[0x13] = 0;
  return p;
}
