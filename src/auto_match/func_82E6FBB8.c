int fn_82E6FBB8(int param_1,unsigned int *param_2)

{
  int uVar1;
  
  if (param_2 == (unsigned int *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0;
  if (*(unsigned int *)(param_1 + 0x58) == 0) {
    return 0xc00d36bb;
  }
                    /* WARNING: Could not recover jumptable at 0x82e6fbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(int (**)())(**(int **)(param_1 + 0x58) + 0x2c))(*(int **)(param_1 + 0x58));
  return uVar1;
}

