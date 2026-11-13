void fn_82ADD9F8(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar1 = param_3 >> 3 & 0x1ffffff8;
  iVar2 = (int)param_2 * *(int *)(param_1 + 0x2a0) * 8 + *(int *)(param_1 + 0x2ac);
  uVar3 = (unsigned int)((param_2 & 0xffffffff) >> 3) & 0x1ffffff8;
  *(unsigned __int64 *)(uVar1 + iVar2) = 1L << ((unsigned __int64)param_3 & 0x3f) | *(unsigned __int64 *)(uVar1 + iVar2);
  iVar2 = param_3 * *(int *)(param_1 + 0x2a0) * 8 + *(int *)(param_1 + 0x2ac);
  *(unsigned __int64 *)(uVar3 + iVar2) = 1L << (param_2 & 0x3f) | *(unsigned __int64 *)(uVar3 + iVar2);
  return;
}

