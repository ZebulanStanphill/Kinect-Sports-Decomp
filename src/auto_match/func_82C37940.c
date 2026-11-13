__int64 fn_82C37940(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  uVar4 = param_2 - *(int *)(param_1 + 0xc);
  uVar5 = *(unsigned int *)(param_1 + 0x18) & uVar4;
  iVar1 = ((*(unsigned int *)(param_1 + 0x10) & uVar4) >> (*(unsigned int *)(param_1 + 0x14) & 0x3f)) * 4;
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (__int64)*(int *)(*(int *)(param_1 + 8) + iVar1) * (__int64)(int)uVar5 +
           (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + iVar1);
  }
  puVar6 = (unsigned int *)(iVar1 + *(int *)(param_1 + 4));
  uVar2 = 1 << (*(unsigned int *)(param_1 + 0x14) & 0x3f);
  uVar4 = *puVar6;
  trapWord(6,(unsigned __int64)uVar2,0);
  uVar3 = (__int64)(int)(puVar6[1] - uVar4) * (__int64)(int)uVar5;
  trapWord(5,(unsigned __int64)uVar2 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  return (__int64)((int)uVar3 / (int)uVar2) + (unsigned __int64)uVar4;
}

