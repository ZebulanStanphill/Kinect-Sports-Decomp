int fn_82E6E120(int param_1)

{
  int uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82e6e13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8));
    return uVar1;
  }
  return 0xc00d36bb;
}

