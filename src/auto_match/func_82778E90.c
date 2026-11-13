void fn_82778E90(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned char uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  uVar5 = (unsigned char)param_4;
  uVar2 = param_4;
  if ((param_3 == 0) || (param_2 < 0)) goto LAB_82778fb4;
  if (0x167 < param_2) {
    param_2 = param_2 % 0x168;
  }
  iVar3 = (int)param_4;
  uVar1 = param_2 / 0x3c;
  uVar7 = (((__int64)(0xff - param_3) * (__int64)iVar3 & 0x7fffffffU) * 2 + 0xff & 0xffffffff) /
          0x1fe;
  uVar2 = uVar7;
  if ((uVar1 & 1) == 0) {
    uVar6 = (((__int64)(0x3bc4 - (0x3c - param_2 % 0x3c) * param_3) * (__int64)iVar3 + 0x1de2U &
             0x7fffffff) << 1) / 0x7788;
    uVar4 = param_4;
    if (uVar1 == 0) {
LAB_82778fb0:
      uVar5 = (unsigned char)uVar4;
      param_4 = uVar6;
      goto LAB_82778fb4;
    }
    if (uVar1 != 2) {
      uVar2 = param_4;
      if (uVar1 == 4) {
        uVar5 = (unsigned char)uVar6;
        param_4 = uVar7;
      }
      goto LAB_82778fb4;
    }
  }
  else {
    uVar6 = (((__int64)(0x3bc4 - (param_2 % 0x3c) * param_3) * (__int64)iVar3 + 0x1de2U &
             0x7fffffff) << 1) / 0x7788;
    if (uVar1 == 1) {
      uVar5 = (unsigned char)uVar6;
      goto LAB_82778fb4;
    }
    uVar2 = param_4;
    uVar4 = uVar7;
    if (uVar1 == 3) goto LAB_82778fb0;
    uVar7 = param_4;
    if (uVar1 != 5) goto LAB_82778fb4;
  }
  uVar5 = (unsigned char)uVar7;
  uVar2 = uVar6;
  param_4 = uVar4;
LAB_82778fb4:
  *(unsigned char *)(param_1 + 1) = uVar5;
  *(char *)(param_1 + 2) = (char)param_4;
  *(char *)(param_1 + 3) = (char)uVar2;
  return;
}

