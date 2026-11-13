unsigned int fn_82AD1BF0(unsigned __int64 param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  
  lVar4 = 0;
  uVar3 = 0;
  for (iVar1 = *(int *)(param_3 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff;
    if ((*(unsigned int *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(*(unsigned int *)(iVar1 + 4) + 0x28)) &
        1 << ((unsigned int)uVar2 & 0x1f)) != 0) {
      lVar4 = lVar4 + 1;
      uVar3 = *(unsigned int *)(iVar1 + 4);
    }
  }
  return -(unsigned int)(lVar4 == 1) & uVar3;
}

