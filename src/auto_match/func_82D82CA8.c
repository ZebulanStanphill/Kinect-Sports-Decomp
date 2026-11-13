void fn_82D82CA8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  if (-1 < (__int64)(uVar4 - 1)) {
    lVar5 = (uVar4 - 1 & 0x3fffffff) << 2;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x28) + (int)lVar5);
      uVar3 = ((__int64)(*(int *)(iVar1 + 0x1c) / 0x50) + 4U & 0x7fffffff) * 2;
      iVar2 = ((int)((uVar3 + (uVar3 & 0x7fffffff) * 2 + (unsigned __int64)*(unsigned int *)(iVar1 + 0x14) &
                     0xffffffff) << 2) + 0x17U & 0xfffffff0) +
              (int)((((unsigned __int64)*(unsigned int *)(iVar1 + 0x4c) & 0x1fffffff) * 8 + uVar3 + 10 & 0xffffffff
                    ) << 4) + *(int *)(iVar1 + 0xc);
      param_2[1] = param_2[1] + iVar2;
      if (*param_2 < iVar2) {
        *param_2 = iVar2;
        param_2[2] = iVar1;
      }
      lVar5 = lVar5 + -4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

