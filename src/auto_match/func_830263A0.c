int fn_830263A0(int param_1)

{
  int uVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x830263bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4));
    return uVar1;
  }
  return 1;
}

