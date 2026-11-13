extern int fn_82EED830();


unsigned __int64 fn_82EECA10(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  param_1 = param_1 - *(int *)(param_1 + -4);
  if (((int)*(unsigned int *)(param_1 + -0x4c) < 0) || (param_3 == (unsigned int *)0x0)) {
    return 0xffffffff8000ffff;
  }
  uVar2 = (unsigned __int64)*param_3 - (unsigned __int64)*(unsigned int *)(param_1 + -0x4c);
  if (((__int64)uVar2 < 0) || (4 < (int)uVar2)) {
    uVar1 = fn_82EED830(*(int *)(*(int *)(param_1 + -0x50) + 8) + param_1 + -0x50);
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) == 0) {
                    /* WARNING: Could not recover jumptable at 0x82f408a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())**(unsigned int **)(param_1 + -0x54))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x82f4088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(int (***)())(*(int *)(param_1 + -0x54) + 4))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) < 3) {
                    /* WARNING: Could not recover jumptable at 0x82f40878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(int (***)())(*(int *)(param_1 + -0x54) + 8))();
    return uVar1;
  }
  if ((uVar2 & 0xffffffff) != 3) {
    if (4 < (uVar2 & 0xffffffff)) {
      return 0xffffffff80004005;
    }
                    /* WARNING: Could not recover jumptable at 0x82f40850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(int (***)())(*(int *)(param_1 + -0x54) + 0x10))();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x82f40864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(int (***)())(*(int *)(param_1 + -0x54) + 0xc))();
  return uVar1;
}

