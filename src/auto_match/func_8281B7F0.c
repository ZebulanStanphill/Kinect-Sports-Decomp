int fn_8281B7F0(unsigned int param_1,int param_2)

{
  int uVar1;
  
  if ((param_1 >= *(unsigned int *)(param_2 + 0x50)) &&
     (param_1 <= *(unsigned int *)(param_2 + 0x54))) {
    if ((*(unsigned int *)(param_2 + 0xc) & 4) != 0) {
      param_1 = param_1 - *(unsigned int *)(param_2 + 0x78);
    }
                    /* WARNING: Could not recover jumptable at 0x8281b828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(*(int *)(param_2 + 0x10) + 4))(param_1);
    return uVar1;
  }
  return 0;
}

