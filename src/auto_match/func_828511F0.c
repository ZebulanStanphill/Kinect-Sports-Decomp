unsigned __int64 fn_828511F0(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    return 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0x17c);
  uVar3 = 0;
  if (*puVar1 == 0) {
    return uVar3;
  }
  iVar5 = 0;
  puVar4 = (unsigned int *)(param_2 + -4);
  do {
    if ((unsigned __int64)param_3 <= (uVar3 & 0xffffffff)) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    puVar2 = (unsigned int *)(puVar1[1] + iVar5);
    iVar5 = iVar5 + 0x10;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar2;
  } while ((uVar3 & 0xffffffff) < (unsigned __int64)*puVar1);
  return uVar3;
}

