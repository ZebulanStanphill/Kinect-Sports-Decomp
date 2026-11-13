int fn_83025248(int *param_1)

{
  int uVar1;
  
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x83025264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(*param_1 + 0xec))(param_1,0);
    return uVar1;
  }
  return 0;
}

