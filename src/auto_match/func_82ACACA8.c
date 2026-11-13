unsigned int fn_82ACACA8(__int64 param_1,__int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  uVar3 = (unsigned __int64)*(unsigned int *)param_1;
  uVar2 = (unsigned int)(param_2 + 1U) & 0x1f;
  uVar1 = (2 << (param_3 + 1U & 0x1f)) - 1;
  lVar4 = uVar3 + 4;
  if ((~uVar3 & 1) == 0) {
    lVar4 = param_1;
  }
  uVar6 = ((param_2 + 1U & 0xffffffff) >> 3 & 0x1ffffffc) + lVar4;
  if ((~uVar3 & 1) != 0) {
    param_1 = uVar3 + 4;
  }
  uVar3 = ((unsigned __int64)(param_3 + 1U >> 3) & 0x1ffffffc) + param_1;
  uVar5 = -1 << uVar2 & *(unsigned int *)uVar6;
  if ((uVar6 & 0xffffffff) == (uVar3 & 0xffffffff)) {
    return (uVar5 & uVar1) >> uVar2;
  }
  return (*(unsigned int *)uVar3 & uVar1) << (0x20 - uVar2 & 0x3f) | uVar5 >> uVar2;
}

