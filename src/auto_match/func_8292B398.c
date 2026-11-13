extern int fn_828F10B0();
extern int fn_829252C0();
void fn_8292B398(int param_1,int param_2,int param_3,int param_4)
{
  int a; unsigned i; int p;
  if (*(int *)(param_1 + 0x10) != 0) param_4 = fn_829252C0(param_1,param_4);
  a = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 + *(int *)(param_1 + 0x20);
  i = 0; if (i < *(unsigned int *)(param_1 + 0x68)) { p = param_4; do { fn_828F10B0(a,p,1); a += 2; p += 0x10; i++; } while (i < *(unsigned int *)(param_1 + 0x68)); }
}
