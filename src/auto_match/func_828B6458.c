unsigned __int64 fn_828B6458(int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = param_1[8];
  if ((uVar1 < 4) && (uVar1 != 0)) {
    if (uVar1 != 1) {
      return 1;
    }
                    /* WARNING: Could not recover jumptable at 0x828b6488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(int (***)())(*param_1 + 8))();
    return uVar2;
  }
  return 0;
}

