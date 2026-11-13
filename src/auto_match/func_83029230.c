extern int fn_82A2A288(int, int, int, int, void *, int);
extern int fn_830290F8(int, int, void *, int, int, int, int);

int fn_83029230(int p1, int p2, int p3, int p4, int p5, int p6, int p7)
{
  unsigned short buf[0x104];
  int r = 1;

  if (fn_82A2A288(0, 0, p3, -1, buf, 0x104) > 0) {
    r = fn_830290F8(p1, p2, buf, p4, p5, p6, p7);
  }
  return r;
}
