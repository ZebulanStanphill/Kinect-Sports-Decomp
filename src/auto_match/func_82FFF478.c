int fn_82FFF478(int param_1)

{
  int uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82fff494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x14) + 0x7c))(*(int **)(param_1 + 0x14));
    return uVar1;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82fff4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x10) + 0x7c))(*(int **)(param_1 + 0x10));
    return uVar1;
  }
  return 0;
}

