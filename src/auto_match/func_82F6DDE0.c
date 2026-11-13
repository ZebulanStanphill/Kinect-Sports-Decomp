extern int fn_82F63BA0();
extern int fn_82F68240();


unsigned __int64 fn_82F6DDE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                       int (**param_5)())

{
  unsigned int *puVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  iVar4 = (int)param_4;
  uVar6 = (__int64)((int)param_3 + -1) * (__int64)iVar4 + param_2;
  if (((((param_2 & 0xffffffff) == 0) && ((param_3 & 0xffffffff) != 0)) || (iVar4 == 0)) ||
     (param_5 == (int (**)())0x0)) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
  }
  else if ((param_2 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
    do {
      uVar3 = (param_3 & 0xffffffff) >> 1;
      if (uVar3 == 0) {
        if ((param_3 & 0xffffffff) == 0) {
          return 0;
        }
        lVar1 = (*param_5)(param_1,param_2);
        return -(unsigned __int64)(lVar1 == 0) & param_2;
      }
      iVar5 = (int)uVar3;
      if ((param_3 & 1) == 0) {
        iVar5 = iVar5 + -1;
      }
      uVar7 = (__int64)iVar5 * (__int64)iVar4 + param_2;
      iVar5 = (*param_5)(param_1,uVar7);
      if (iVar5 == 0) {
        return uVar7;
      }
      if (iVar5 < 0) {
        uVar6 = uVar7 - param_4;
        if ((param_3 & 1) == 0) {
          uVar3 = uVar3 - 1;
        }
      }
      else {
        param_2 = uVar7 + param_4;
      }
      param_3 = uVar3;
    } while ((param_2 & 0xffffffff) <= (uVar6 & 0xffffffff));
  }
  return 0;
}

