__int64 fn_8263ABD0(int param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  param_4 = param_4 & 0x7fffffff;
  uVar2 = param_3 + param_4 * -2;
  uVar4 = uVar2;
  if ((int)uVar2 < 2) {
    uVar4 = 1;
  }
  uVar1 = param_2 + param_4 * -2;
  uVar3 = uVar1;
  if ((uVar1 <= uVar4) && (uVar3 = uVar2, (int)uVar2 < 2)) {
    uVar3 = 1;
  }
  uVar4 = param_1 + param_4 * -2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar2;
    if ((int)uVar2 < 2) {
      uVar3 = 1;
    }
    uVar4 = uVar1;
    if ((uVar1 <= uVar3) && (uVar4 = uVar2, (int)uVar2 < 2)) {
      uVar4 = 1;
    }
  }
  return 0x20 - LZCOUNT(uVar4);
}

