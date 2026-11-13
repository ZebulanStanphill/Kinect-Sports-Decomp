__int64 fn_82799A18(int param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned __int64 param_4,char param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar3 = -param_4;
  }
  else {
    param_1 = param_1 - (int)param_3;
    uVar4 = param_2;
    uVar5 = param_4;
    do {
      uVar2 = *(unsigned short *)(param_1 + (int)param_3);
      uVar4 = uVar4 - 1;
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      if ((uVar4 == 0) || (uVar2 == 0)) break;
      if (uVar2 != uVar1) goto LAB_82799a84;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if (((uVar2 == uVar1) && ((uVar5 & 0xffffffff) != 0)) &&
       ((param_5 == '\0' || ((uVar4 & 0xffffffff) != 0)))) {
      lVar3 = param_2 - param_4;
    }
    else {
LAB_82799a84:
      lVar3 = (unsigned __int64)uVar2 - (unsigned __int64)uVar1;
    }
  }
  return lVar3;
}

