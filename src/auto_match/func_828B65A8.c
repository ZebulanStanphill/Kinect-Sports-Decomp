int fn_828B65A8(int *param_1)

{
  int uVar1;
  
  if (param_1[8] != 0) {
    param_1[8] = 3;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x828b65d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(int (**)())(*param_1 + 0x24))(param_1);
  return uVar1;
}

