extern void fn_82C2B590(unsigned int);

void fn_82C44798(unsigned int *p)
{
  int i;
  if (p[0] != 0) {
    fn_82C2B590(p[0]);
    p[0] = 0;
  }
  if (p[3] != 0) {
    fn_82C2B590(p[3]);
    p[3] = 0;
  }
  if (p[5] != 0) {
    fn_82C2B590(p[5]);
    p[5] = 0;
  }
  for (i = 0; i < 6; i++) p[i] = 0;
}
