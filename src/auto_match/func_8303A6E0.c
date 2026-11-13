int fn_8303A6E0(int *param_1)

{
  int uVar1;
  
  if ((*(unsigned char *)(param_1[2] + 0xdb) & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8303a700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(*param_1 + 0x34))();
    return uVar1;
  }
  return 1;
}

