extern int fn_8251E4D0();


unsigned __int64 fn_8252AD10(int param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (*(int *)((param_3 + 0x12) * 4 + param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_8251E4D0(param_3 * 0x14 + param_2 + 0x324);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

