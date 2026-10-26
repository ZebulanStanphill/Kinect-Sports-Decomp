extern void fn_82A4F4E0(void *);

void fn_82A68E28(void **p)
{
  if (p[3] != 0) {
    fn_82A4F4E0(p[3]);
    p[3] = 0;
  }
  if (p[5] != 0) {
    fn_82A4F4E0(p[5]);
    p[5] = 0;
  }
  if (p[6] != 0) {
    fn_82A4F4E0(p[6]);
    p[6] = 0;
  }
  p[0] = 0;
}
