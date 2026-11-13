int fn_82818828(int param_1)

{
  int (*UNRECOVERED_JUMPTABLE)();
  int uVar1;
  
  UNRECOVERED_JUMPTABLE = *(int (**)())(*(int *)(param_1 + 0x10) + 0x24);
  if (UNRECOVERED_JUMPTABLE != (int (*)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x8281883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

