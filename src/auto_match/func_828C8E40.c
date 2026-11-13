void fn_828C8E40(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  
  uVar3 = (param_2 + 1 & 0x7fffffff) << 1;
  iVar5 = (int)uVar3;
  uVar1 = param_2;
  while (uVar4 = uVar3, iVar5 < (int)param_3) {
    puVar2 = (unsigned __int64 *)((int)(uVar4 << 3) + param_1);
    if (*puVar2 < puVar2[-1]) {
      uVar4 = uVar4 - 1;
    }
    uVar3 = (uVar4 + 1 & 0x7fffffff) << 1;
    *(unsigned __int64 *)((int)((uVar1 & 0xffffffff) << 3) + param_1) =
         *(unsigned __int64 *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    iVar5 = (int)uVar3;
    uVar1 = uVar4;
  }
  if (iVar5 == (int)param_3) {
    uVar3 = uVar1 & 0xffffffff;
    uVar1 = param_3 - 1;
    *(unsigned __int64 *)((int)(uVar3 << 3) + param_1) =
         *(unsigned __int64 *)((int)((param_3 & 0xffffffff) << 3) + param_1 + -8);
  }
  iVar5 = (int)uVar1;
  uVar6 = iVar5 - 1;
  uVar3 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while ((uVar4 = uVar3, (int)param_2 < iVar5 &&
         (uVar3 = *(unsigned __int64 *)((int)((uVar4 & 0xffffffff) << 3) + param_1), uVar3 < *param_4))) {
    iVar5 = (int)uVar4;
    uVar6 = iVar5 - 1;
    *(unsigned __int64 *)((int)((uVar1 & 0xffffffff) << 3) + param_1) = uVar3;
    uVar3 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    uVar1 = uVar4;
  }
  *(unsigned __int64 *)((int)((uVar1 & 0xffffffff) << 3) + param_1) = *param_4;
  return;
}

