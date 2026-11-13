extern int fn_82A6CF00();


unsigned __int64 fn_82A6D200(int param_1,unsigned __int64 param_2)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = *(unsigned int *)(param_1 + 0x28);
  uVar6 = 0;
  if ((unsigned __int64)uVar5 < (param_2 & 0xffffffff)) {
    uVar2 = *(unsigned int *)(param_1 + 0x30);
    if ((unsigned __int64)uVar2 != 0) {
      uVar3 = 0x20 - (unsigned __int64)uVar5;
      uVar4 = (unsigned int)uVar3;
      if ((unsigned __int64)uVar2 <= (uVar3 & 0xffffffff)) {
        uVar4 = uVar2;
      }
      uVar2 = uVar2 - uVar4;
      *(unsigned int *)(param_1 + 0x30) = uVar2;
      *(unsigned int *)(param_1 + 0x24) =
           *(unsigned int *)(param_1 + 0x2c) >> (uVar2 & 0x3f) | *(int *)(param_1 + 0x24) << (uVar4 & 0x3f);
      *(unsigned int *)(param_1 + 0x2c) = (1 << (uVar2 & 0x3f)) - 1U & *(unsigned int *)(param_1 + 0x2c);
      *(unsigned int *)(param_1 + 0x28) = uVar5 + uVar4;
    }
    uVar5 = *(unsigned int *)(param_1 + 0x28);
    while ((uVar5 < 0x19 && (*(int *)(param_1 + 0x20) != 0))) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 8;
      uVar1 = **(unsigned char **)(param_1 + 0x1c);
      *(unsigned char **)(param_1 + 0x1c) = *(unsigned char **)(param_1 + 0x1c) + 1;
      uVar2 = (**(int (***)())(param_1 + 0x54))(uVar1);
      uVar5 = *(int *)(param_1 + 0x28) + 8;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      *(unsigned int *)(param_1 + 0x28) = uVar5;
      *(unsigned int *)(param_1 + 0x24) = uVar2 & 0xff | *(unsigned int *)(param_1 + 0x24);
    }
    if (((unsigned __int64)*(unsigned int *)(param_1 + 0x28) < (param_2 & 0xffffffff)) &&
       (uVar6 = fn_82A6CF00(param_1,2,param_2), (int)uVar6 < 0)) {
      return uVar6;
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - (int)param_2;
  return uVar6;
}

