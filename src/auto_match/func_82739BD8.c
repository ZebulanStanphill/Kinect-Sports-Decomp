typedef __int64 longlong;

extern unsigned char fn_82695468(int param_1, int id);
extern void fn_826954C0(int param_1, const char *name, int a, int b);
extern void fn_82681898(int param_1, double value);

void fn_82739BD8(int param_1)
{
  char *p;
  char *obj;

  if (fn_82695468(param_1, 0x23) == 0) {
    fn_826954C0(param_1, "Date", 0, 0);
  }
  else {
    p = *(char **)(param_1 + 8);
    obj = (p != 0) ? p - 0x10 : 0;
    fn_82681898(*(int *)(param_1 + 4), (double)*(longlong *)(obj + 0x30));
  }
}
