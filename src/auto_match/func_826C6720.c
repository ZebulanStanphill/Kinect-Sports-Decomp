unsigned int fn_826C6720(int param_1)

{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 0x1ac) != 0) {
    return *(unsigned int *)(*(int *)(param_1 + 0x1ac) + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x826c6744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(int (**)())(**(int **)(param_1 + 0x20) + 0x4c))(*(int **)(param_1 + 0x20));
  return uVar1;
}

