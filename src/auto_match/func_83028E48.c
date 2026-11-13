extern int fn_830085B8();


int fn_83028E48(int param_1)

{
  int uVar1;
  int uVar2;
  unsigned int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x88);
  uVar2 = 1;
  if (iVar3 != *(int *)(param_1 + 0x8c)) {
    do {
      uVar1 = fn_830085B8(*(unsigned int *)(iVar3 + 4));
      if (uVar1 != 1) {
        uVar2 = uVar1;
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != *(int *)(param_1 + 0x8c));
  }
  return uVar2;
}

