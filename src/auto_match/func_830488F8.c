void fn_830488F8(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  
  uVar1 = *(unsigned short *)(param_1 + 0x62);
  iVar2 = *(int *)(param_1 + 0x3c) - (unsigned int)uVar1;
  *(unsigned short *)(param_1 + 0x62) = 0;
  *(int *)(param_1 + 0x3c) = iVar2;
  *(unsigned int *)(param_1 + 0x38) = (unsigned int)uVar1 + *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x83048938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(param_1 + 0x28) + 0x30))();
  return;
}

