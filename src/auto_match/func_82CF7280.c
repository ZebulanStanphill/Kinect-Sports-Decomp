void fn_82CF7280(int param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == (unsigned int *)0x0) {
    return;
  }
  if (param_3 < 0x2001) {
    if (param_3 < 0x221) {
      iVar1 = (int)*(char *)((param_3 + 0xf >> 4) + param_1 + 0xd8);
    }
    else {
      iVar1 = *(int *)(((param_3 + -1 >> 10) + 0x3f) * 4 + param_1);
    }
    if (*(int *)(param_1 + 8) <= *(int *)((iVar1 + 2) * 8 + param_1)) {
      fn_82CF7020(param_1,iVar1,param_2);
      return;
    }
    param_1 = iVar1 * 8 + param_1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *param_2 = *(unsigned int *)(param_1 + 0xc);
    *(unsigned int **)(param_1 + 0xc) = param_2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82cf7320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(param_1 + 4) + 8))();
  return;
}
