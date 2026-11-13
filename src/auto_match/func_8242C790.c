__int64 fn_8242C790(int param_1)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  lVar2 = 0;
  uVar3 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
  if (*(int *)(iVar1 + 0x1c8) - *(int *)(iVar1 + 0x1c4) >> 2 == 0) {
    return lVar2;
  }
  do {
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 100000;
  } while (uVar3 < (unsigned int)(*(int *)(iVar1 + 0x1c8) - *(int *)(iVar1 + 0x1c4) >> 2));
  return lVar2;
}

