void fn_82FEF778(int *param_1,__int64 param_2,int param_3)

{
  int (**UNRECOVERED_JUMPTABLE)();
  
  if (4 < (param_2 - 1U & 0xffffffff)) {
    return;
  }
  if ((int)(param_2 - 1U) == 0) {
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      UNRECOVERED_JUMPTABLE = *(int (***)())(*param_1 + 0x20);
      *(unsigned char *)((int)param_1 + 0xd9) = *(unsigned char *)((int)param_1 + 0xd9) | 0x20;
                    /* WARNING: Could not recover jumptable at 0x82fef7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (param_2 != 4) {
                    /* WARNING: Could not recover jumptable at 0x82fef7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())(*param_1 + 0xc))();
      return;
    }
    if (param_3 != 1) {
      return;
    }
    *(unsigned char *)((int)param_1 + 0xd9) = *(unsigned char *)((int)param_1 + 0xd9) & 0xdb | 4;
  }
  return;
}

