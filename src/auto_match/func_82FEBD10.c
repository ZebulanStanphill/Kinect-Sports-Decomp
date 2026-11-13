int fn_82FEBD10(int param_1)

{
  int uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82febd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4));
    return uVar1;
  }
  return 2;
}

