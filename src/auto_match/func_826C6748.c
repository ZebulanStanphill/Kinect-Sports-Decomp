unsigned int fn_826C6748(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x18) == '\0')) {
    return *(unsigned int *)(iVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x826c6778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(int (**)())(**(int **)(param_1 + 0x9c) + 0x28))(*(int **)(param_1 + 0x9c));
  return uVar2;
}

