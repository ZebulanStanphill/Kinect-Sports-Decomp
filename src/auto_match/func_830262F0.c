int fn_830262F0(int param_1)

{
  int uVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return 0x11;
  }
                    /* WARNING: Could not recover jumptable at 0x83026314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(int (**)())(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4));
  return uVar1;
}

