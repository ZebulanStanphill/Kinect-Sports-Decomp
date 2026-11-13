extern int fn_830085E0();


void fn_83028EA0(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    do {
      fn_830085E0(*(unsigned int *)(iVar1 + 4));
      iVar1 = iVar1 + 8;
    } while (iVar1 != *(int *)(param_1 + 0x8c));
  }
  return;
}

