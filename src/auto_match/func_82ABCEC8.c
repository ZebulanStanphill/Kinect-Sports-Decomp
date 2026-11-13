unsigned __int64 fn_82ABCEC8(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar3 = ((param_4 >> 5) + 4) * 4;
      uVar1 = 1 << (param_4 & 0x1f);
      uVar4 = *(unsigned int *)(iVar3 + param_1) & ~uVar1;
      iVar2 = ((param_4 >> 5) + 0xec) * 4;
      *(unsigned int *)(iVar3 + param_1) = uVar4;
      *(unsigned int *)(iVar3 + param_1) = (unsigned int)(*param_5 != 0) << (param_4 & 0x1f) | uVar4;
      *(unsigned int *)(iVar2 + param_1) = *(unsigned int *)(iVar2 + param_1) | uVar1;
    }
    else if (param_3 != 1) {
      if (2 < param_3) {
        return 0xffffffff80004005;
      }
      iVar2 = ((param_4 >> 5) + 0xf4) * 4;
      *(int *)((param_4 + 0xc) * 4 + param_1) = *param_5;
      *(unsigned int *)(iVar2 + param_1) = 1 << (param_4 & 0x1f) | *(unsigned int *)(iVar2 + param_1);
    }
  }
  return 0;
}

