unsigned __int64 fn_823888E0(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  uVar3 = param_2 + 1U;
  if (((param_3 & 0xffffffff) < (param_2 + 1U & 0xffffffff)) &&
     (uVar3 = param_3, *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x260) + 0x1d0) != 0)) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar4 = iVar1 + 1;
    *(int *)(param_1 + 0x4c) = iVar4;
    uVar2 = *(unsigned int *)((iVar4 + ((iVar1 + 1U) / 5) * -5 + 0x78) * 4 +
                     *(int *)(*(int *)(param_1 + 8) + 0x260));
    uVar3 = (unsigned __int64)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

