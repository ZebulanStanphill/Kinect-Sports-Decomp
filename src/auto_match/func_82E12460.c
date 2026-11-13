int fn_82E12460(int param_1)

{
  int uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82e1247c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x18) + 0xc))(*(int **)(param_1 + 0x18));
    return uVar1;
  }
  return 0;
}

