extern int fn_82ABD078();
extern unsigned int fn_82636C98(int, int, int, int, int, int, int, void *, int);

void fn_82ABD6A8(int param_1)
{
  unsigned int r;

  r = fn_82636C98(*(int *)(param_1 + 8), *(int *)(param_1 + 0xc), 0, 0, param_1 + 0x10, param_1 + 0x30, 0xf,
                  (void *)fn_82ABD078, param_1);
  *(unsigned int *)(param_1 + 0x444) = r == 0xfffffc18;
}
