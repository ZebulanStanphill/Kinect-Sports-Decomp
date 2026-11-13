void fn_82A5C0A8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[5] = param_3;
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x82a5c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(iVar1 + 0x2c))();
    return;
  }
  if (param_2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x82a5c0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(iVar1 + 0x34))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82a5c0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(iVar1 + 0x30))();
  return;
}

