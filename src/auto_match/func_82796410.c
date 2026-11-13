extern int fn_8267BE38();
extern int fn_82794B38();
extern int fn_82796100();
extern int fn_82F63CA0();


void fn_82796410(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] == 1) {
    fn_82796100(param_1,0);
  }
  else {
    iVar1 = *(int *)(param_2 * 4 + *param_1);
    if (iVar1 != 0) {
      fn_82794B38(iVar1);
      fn_8267BE38(iVar1);
    }
    iVar1 = param_2 * 4 + *param_1;
    fn_82F63CA0(iVar1,iVar1 + 4,(param_1[1] - param_2) - 1U & 0x3fffffff);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

