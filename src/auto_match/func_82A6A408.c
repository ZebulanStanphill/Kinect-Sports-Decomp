extern unsigned int uStack_10;


extern int _blkmov(int, int, int);
void fn_82A6A408(int param_1,int param_2,int param_3,int param_4)
{
  int n, m, iVar1;
  unsigned uStack_10;
  n = *(int *)(param_3 + 0x58);
  m = n * param_4;
  uStack_10 = param_1 << (*(int *)(param_3 + 0x5c) - (unsigned)*(unsigned short *)(param_3 + 0x6e));
  iVar1 = m + param_2;
  if (0 < n) {
    _blkmov(iVar1, (int)&uStack_10 + ((iVar1 - m) - param_2) + 2, n);
  }
}
