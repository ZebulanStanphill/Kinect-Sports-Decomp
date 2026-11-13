int fn_8281BB78(int param_1,int param_2)

{
  int (*UNRECOVERED_JUMPTABLE)();
  int uVar1;
  
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
    param_2 = param_2 - *(unsigned int *)(param_1 + 0x78);
  }
  UNRECOVERED_JUMPTABLE = *(int (**)())(*(int *)(param_1 + 0x10) + 0x28);
  if (UNRECOVERED_JUMPTABLE != (int (*)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x8281bba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return uVar1;
  }
  return 1;
}

