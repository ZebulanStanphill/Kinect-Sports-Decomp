extern int fn_82810530();


void fn_8305D8F0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  __int64 lVar5;
  int iVar6;
  
  fn_82810530(param_1 + 0x34);
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  lVar5 = 0;
  if (0 < (__int64)((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x2c);
      uVar3 = *(unsigned int *)(iVar6 + iVar2);
      *(unsigned int *)(iVar6 + iVar2) =
           *(unsigned int *)
            ((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x30) - lVar5) - 1 & 0xffffffff) << 2) + iVar2);
      iVar6 = iVar6 + 4;
      lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30) - lVar5;
      lVar5 = lVar5 + 1;
      *(unsigned int *)((int)((lVar4 - 1U & 0xffffffff) << 2) + *(int *)(param_1 + 0x2c)) = uVar3;
      uVar1 = *(unsigned int *)(param_1 + 0x30);
    } while ((int)lVar5 < (int)(((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  return;
}

