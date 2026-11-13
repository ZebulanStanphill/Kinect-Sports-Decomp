// Built with link-time code generation together with its "ltcg_units" (objects.json):
// n stays in volatile r4 across fn_8278FD18, which LTCG knows leaves it alone.
extern unsigned char fn_8278FD18(unsigned int *v);
extern void fn_827954C0(unsigned int *p, unsigned int n, int flag);

void fn_82795998(unsigned int *param_1)
{
  unsigned int n;

  if (fn_8278FD18(param_1)) {
    n = param_1[1];
    if (n != 0 && fn_8278FD18(param_1)) {
      n = n - 1;
    }
    fn_827954C0(param_1 + 4, n, 1);
    n = param_1[1];
    if (n != 0 && *(short *)(n * 2 + *param_1 - 2) == 0) {
      param_1[1] = n - 1;
    }
  }
}
