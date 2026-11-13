void fn_82ACADA8(__int64 param_1,__int64 param_2,__int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  
  uVar3 = (unsigned __int64)*(unsigned int *)param_1;
  uVar1 = (unsigned int)(param_2 + 1U) & 0x1f;
  lVar2 = uVar3 + 4;
  if ((~uVar3 & 1) == 0) {
    lVar2 = param_1;
  }
  uVar4 = ((param_2 + 1U & 0xffffffff) >> 3 & 0x1ffffffc) + lVar2;
  if ((~uVar3 & 1) != 0) {
    param_1 = uVar3 + 4;
  }
  piVar5 = (int *)uVar4;
  uVar3 = ((param_3 + 1U & 0xffffffff) >> 3 & 0x1ffffffc) + param_1;
  *piVar5 = *piVar5 - (param_4 << uVar1);
  if ((uVar4 & 0xffffffff) == (uVar3 & 0xffffffff)) {
    return;
  }
  piVar5 = (int *)uVar3;
  *piVar5 = *piVar5 - (param_4 >> (0x20 - uVar1 & 0x3f));
  return;
}

