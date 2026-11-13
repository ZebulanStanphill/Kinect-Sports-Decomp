__int64 fn_82A70960(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  uVar2 = param_2 - *(int *)(param_1 + 0xc);
  uVar3 = *(unsigned int *)(param_1 + 0x18) & uVar2;
  uVar2 = (*(unsigned int *)(param_1 + 0x10) & uVar2) >> (*(unsigned int *)(param_1 + 0x14) & 0x3f);
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = uVar2 * 4;
    return (__int64)*(int *)(*(int *)(param_1 + 8) + iVar1) * (__int64)(int)uVar3 +
           (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + iVar1);
  }
  puVar4 = (unsigned int *)(uVar2 * 4 + *(int *)(param_1 + 4));
  uVar2 = *puVar4;
  return (__int64)((int)((puVar4[1] - uVar2) * uVar3) / (1 << (*(unsigned int *)(param_1 + 0x14) & 0x3f)))
         + (unsigned __int64)uVar2;
}

