void fn_82B43B40(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  uVar5 = (unsigned __int64)*param_1;
  uVar3 = (((unsigned __int64)param_1[1] + 0x1f & 0xffffffff) >> 3 & 0x1ffffffc) + uVar5;
  if ((uVar3 & 0xffffffff) <= uVar5) {
    return;
  }
  lVar6 = uVar5 - 4;
  puVar2 = (unsigned int *)(param_2 + -4);
  lVar4 = (((uVar3 - uVar5) - 1 & 0xffffffff) >> 2) + 1;
  do {
    iVar1 = (int)lVar6;
    puVar2 = puVar2 + 1;
    lVar6 = lVar6 + 4;
    *(unsigned int *)lVar6 = *(unsigned int *)(iVar1 + 4) | *puVar2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

