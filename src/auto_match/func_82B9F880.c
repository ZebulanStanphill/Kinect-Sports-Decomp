unsigned __int64 fn_82B9F880(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar6 = 0xffffffff9e3779b9;
  uVar5 = uVar6;
  uVar4 = param_2;
  if (2 < param_2) {
    uVar3 = (unsigned __int64)param_2 / 3;
    do {
      uVar4 = uVar4 - 3;
      puVar2 = param_1 + 1;
      param_3 = param_1[2] + param_3;
      uVar1 = *param_1;
      param_1 = param_1 + 3;
      uVar7 = ((uVar1 - param_3) - (*puVar2 + uVar6)) + uVar5 ^ (param_3 & 0xffffffff) >> 0xd;
      uVar6 = ((*puVar2 + uVar6) - param_3) - uVar7 ^ (uVar7 & 0xffffff) << 8;
      uVar5 = (param_3 - uVar6) - uVar7 ^ (uVar6 & 0xffffffff) >> 0xd;
      uVar8 = (uVar7 - uVar5) - uVar6 ^ (uVar5 & 0xffffffff) >> 0xc;
      uVar6 = (uVar6 - uVar5) - uVar8 ^ (uVar8 & 0xffff) << 0x10;
      uVar7 = (uVar5 - uVar6) - uVar8 ^ (uVar6 & 0xffffffff) >> 5;
      uVar5 = (uVar8 - uVar7) - uVar6 ^ (uVar7 & 0xffffffff) >> 3;
      uVar6 = (uVar6 - uVar7) - uVar5 ^ (uVar5 & 0x3fffff) << 10;
      param_3 = (uVar7 - uVar6) - uVar5 ^ (uVar6 & 0xffffffff) >> 0xf;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_3 = ((unsigned __int64)param_2 & 0x3fffffff) * 4 + param_3;
  if (uVar4 != 1) {
    if (uVar4 != 2) goto LAB_82b9f984;
    uVar6 = param_1[1] + uVar6;
  }
  uVar5 = *param_1 + uVar5;
LAB_82b9f984:
  uVar3 = (uVar5 - param_3) - uVar6 ^ (param_3 & 0xffffffff) >> 0xd;
  uVar6 = (uVar6 - param_3) - uVar3 ^ (uVar3 & 0xffffff) << 8;
  uVar5 = (param_3 - uVar6) - uVar3 ^ (uVar6 & 0xffffffff) >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar6 ^ (uVar5 & 0xffffffff) >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ (uVar3 & 0xffff) << 0x10;
  uVar5 = (uVar5 - uVar6) - uVar3 ^ (uVar6 & 0xffffffff) >> 5;
  uVar3 = (uVar3 - uVar5) - uVar6 ^ (uVar5 & 0xffffffff) >> 3;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ (uVar3 & 0x3fffff) << 10;
  return (uVar5 - uVar6) - uVar3 ^ (uVar6 & 0xffffffff) >> 0xf;
}

