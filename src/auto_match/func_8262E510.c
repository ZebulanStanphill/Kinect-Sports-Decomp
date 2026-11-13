__int64 fn_8262E510(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  if ((param_1 != (int *)0x0) && (param_1[3] == 0)) {
    uVar5 = (unsigned __int64)(unsigned int)param_1[1];
    uVar3 = ((unsigned __int64)*(unsigned int *)(*param_1 + 4) * 6 + uVar5) - 6;
    uVar6 = (unsigned __int64)*(unsigned int *)(*param_1 + 4);
    while ((uVar5 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
      uVar1 = (uVar6 & 0xffffffff) >> 1;
      if (uVar1 == 0) {
        if ((uVar6 & 0xffffffff) != 0) {
          uVar7 = -(unsigned __int64)(param_2 == *(unsigned short *)uVar5) & uVar5;
          goto code_r0x8262e59c;
        }
        break;
      }
      uVar2 = uVar6 & 1;
      uVar6 = uVar1;
      if (uVar2 == 0) {
        uVar6 = uVar1 - 1;
      }
      uVar7 = uVar6 * 6 + uVar5;
      lVar4 = param_2 - *(unsigned short *)uVar7;
      if (lVar4 == 0) goto code_r0x8262e59c;
      uVar6 = uVar1;
      if ((int)lVar4 < 0) {
        uVar3 = uVar7 - 6;
        if (uVar2 == 0) {
          uVar6 = uVar1 - 1;
        }
      }
      else {
        uVar5 = uVar7 + 6;
      }
    }
    uVar7 = 0;
code_r0x8262e59c:
    if ((uVar7 & 0xffffffff) != 0) {
      return ((unsigned __int64)*(unsigned int *)((int)uVar7 + 2) & 0x7fffffff) * 2 + (unsigned __int64)(unsigned int)param_1[2];
    }
  }
  return -0x7de6f774;
}

