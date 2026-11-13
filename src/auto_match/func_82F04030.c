extern int fn_82F68CC0();


void fn_82F04030(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  __int64 param_5,__int64 param_6,unsigned __int64 param_7,unsigned int param_8)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  
  uVar2 = param_7 & 0x7fffffff;
  lVar5 = uVar2 * 2;
  param_1 = param_1 + (param_7 & 0x1fffffff) * -8;
  param_4 = param_4 + (param_7 & 0x1fffffff) * -8;
  param_5 = param_5 + uVar2 * -2;
  param_6 = param_6 + uVar2 * -2;
  if (0 < (int)param_8) {
    lVar3 = (((unsigned __int64)param_8 - 1 & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(param_1,param_4,param_7);
      lVar3 = lVar3 + -1;
      param_1 = lVar5 + param_1;
      param_4 = lVar5 + param_4;
    } while (lVar3 != 0);
  }
  lVar3 = (__int64)((int)param_8 >> 1);
  iVar1 = (int)param_7 >> 1;
  lVar5 = (__int64)((int)lVar5 >> 1);
  if (0 < lVar3) {
    lVar4 = (param_2 + uVar2 * -2) - param_5;
    lVar6 = ((lVar3 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(lVar4 + param_5,param_5,iVar1);
      lVar6 = lVar6 + -1;
      param_5 = lVar5 + param_5;
    } while (lVar6 != 0);
  }
  if (0 < (int)param_8 >> 1) {
    lVar4 = (param_3 + uVar2 * -2) - param_6;
    lVar3 = ((lVar3 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(lVar4 + param_6,param_6,iVar1);
      lVar3 = lVar3 + -1;
      param_6 = lVar5 + param_6;
    } while (lVar3 != 0);
  }
  return;
}

