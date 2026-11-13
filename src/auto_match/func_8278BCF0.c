extern int fn_8267BE38();
extern int fn_8278BC88();
extern int fn_82F68CC0();


void fn_8278BCF0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    fn_8267BE38(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    iVar1 = *param_2;
    if ((*(int **)(param_1 + 8) == (int *)0x0) || (**(int **)(param_1 + 8) != iVar1)) {
      fn_8278BC88(param_1,iVar1);
    }
    fn_82F68CC0((unsigned __int64)*(unsigned int *)(param_1 + 8) + 4,param_2 + 1,iVar1 << 2);
  }
  return;
}

