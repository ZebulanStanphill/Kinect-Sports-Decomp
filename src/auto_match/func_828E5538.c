typedef unsigned char bool;
#define true 1
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int lbl_82002AE0;


double fn_828E5538(unsigned __int64 param_1,__int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  unsigned int uVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  
  uVar5 = (unsigned int)param_3;
  bVar7 = true;
  if ((int)uVar5 < 0) {
    dVar8 = (double)(lbl_82002AE0 / (float)(__int64)(1 << (-uVar5 & 0x3f)));
  }
  else {
    dVar8 = (double)(__int64)(1 << (uVar5 & 0x3f));
  }
  uVar1 = 0;
  iVar6 = (int)(param_2 + param_3);
  if (0 < iVar6) {
    iVar3 = fn_828E9DA8(param_1);
    iVar4 = fn_828E9D90(param_1);
    if (iVar3 - iVar4 < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = fn_828E9FF8(param_1,1);
    }
    bVar7 = lVar2 != 0;
    iVar3 = fn_828E9DA8(param_1);
    iVar4 = fn_828E9D90(param_1);
    if (iVar3 - iVar4 < iVar6) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_828E9FF8(param_1,param_2 + param_3);
    }
  }
  return (double)(float)((double)(__int64)
                                 ((__int64)(int)((-(unsigned int)bVar7 & 2) - 1) * (uVar1 & 0xffffffff)) /
                        dVar8);
}

