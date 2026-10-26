extern void fn_82AD20C0(int *, int, int);
extern int fn_82AD1978(int *, int);

void fn_82AD35A8(int *p, int i, int a, int b)
{
  fn_82AD20C0(p, p[i + 0xb], b);
  p[i + 0xb] = fn_82AD1978(p, a);
}
