typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A1F248();
extern int fn_82AA75B8();
extern int fn_82AA7718();
extern int fn_82AA79C0();


void fn_82AA7C38(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  bool bVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  
  iVar5 = (int)param_4;
  uVar6 = (unsigned __int64)(iVar5 >> 0x1f);
  uVar1 = (param_3 & 0xffffffff) >> 0x10;
  uVar6 = (param_4 ^ uVar6) - uVar6;
  if ((param_5 & 0xffffffff) == 0) {
    return;
  }
  if (((param_3 & 0xffff) == 0) && ((param_1 & 0xffffffff) == (param_2 & 0xffffffff))) {
    return;
  }
  uVar8 = param_2;
  if (-1 < (__int64)(param_1 - param_2 ^ param_4)) {
    param_4 = -param_4;
    lVar9 = (__int64)((int)param_5 + -1) * (__int64)iVar5;
    param_1 = lVar9 + param_1;
    uVar8 = lVar9 + param_2;
  }
  uVar4 = fn_82A1F248();
  if ((uVar4 == 0) || (bVar2 = true, (uVar4 & 0x600) != 0)) {
    bVar2 = false;
  }
  uVar4 = fn_82A1F248(param_2);
  if ((uVar4 == 0) || (bVar3 = true, (uVar4 & 0x600) != 0)) {
    bVar3 = false;
  }
  if (((((bVar2) && (bVar3)) && (uVar1 < 0x11)) && ((uVar1 != 0 && ((uVar1 - 1 & uVar1) == 0)))) &&
     (((uVar6 & 0xffffffff) == uVar1 &&
      ((uVar6 = uVar6 - 1, (uVar6 & param_1) == 0 && ((uVar6 & uVar8) == 0)))))) {
    if ((param_1 & 0xffffffff) == (uVar8 & 0xffffffff)) {
      fn_82AA79C0(param_1,param_3,param_4,param_5);
      return;
    }
    uVar7 = (int)param_1 - (int)uVar8;
    uVar4 = (int)uVar7 >> 0x1f;
    if ((0x7f < (int)((uVar7 ^ uVar4) - uVar4)) && (((uVar8 ^ param_1) & 0xf) == 0)) {
      fn_82AA7718(param_1,uVar8,param_3,param_4,param_5);
      return;
    }
  }
  if ((param_5 & 0xffffffff) != 0) {
    lVar9 = uVar8 - param_1;
    do {
      fn_82AA75B8(param_1,lVar9 + param_1,param_3);
      param_5 = param_5 - 1;
      param_1 = param_4 + param_1;
    } while (param_5 != 0);
  }
  return;
}

