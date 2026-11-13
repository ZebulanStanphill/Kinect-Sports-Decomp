int fn_83026980(int param_1,int param_2)

{
  int uVar1;
  
  if (param_2 == 1) {
    *(unsigned short *)(param_1 + 0x6e) = 0;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x830269ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4));
    return uVar1;
  }
  return 1;
}

