extern int fn_82C10B28();


int fn_82C290D8(int param_1)

{
  int iVar1;
  unsigned int iVar2;
  int uVar3;
  int *piVar4;
  int aiStack_30=0;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar4 = (int *)(iVar1 + 4);
  if (*(unsigned *)piVar4 == 0) {
    return 0;
  }
  else {
    aiStack_30 = *piVar4;
    iVar2 = *(int *)(aiStack_30 + 0x24);
    while (iVar2 != 0) {
      iVar2 = *(int *)(*piVar4 + 0x24);
      *piVar4 = iVar2;
      *(unsigned int *)(iVar2 + 0x28) = 0;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      uVar3 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x30),0x1e,&aiStack_30);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      aiStack_30 = *piVar4;
      iVar2 = *(int *)(aiStack_30 + 0x24);
    }
    uVar3 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x30),0x1e,piVar4);
    if (uVar3 >= 0) {
      int count=*(int *)(iVar1+0xc);
      *piVar4 = 0;
      *(unsigned int *)(iVar1 + 8) = 0;
      *(int *)(iVar1 + 0xc) = count - 1;
    }
  }
  return uVar3;
}

