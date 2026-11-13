extern int fn_8272C128();


unsigned __int64 fn_827908A8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  if ((unsigned __int64)param_1[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = (unsigned __int64)param_1[1] - 1;
    uVar6 = 0;
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        if ((int)uVar5 == -1) break;
        uVar2 = (uVar5 + uVar6 & 0xffffffff) >> 1;
        iVar3 = fn_8272C128(uVar2 * 0xc + (unsigned __int64)*param_1,param_2);
        if (iVar3 == 0) {
          return uVar2;
        }
        if (iVar3 < 0) {
          uVar4 = uVar6;
          uVar6 = uVar2 + 1;
        }
        else {
          uVar5 = uVar2 - 1;
        }
      } while (uVar6 < (uVar5 & 0xffffffff));
    }
    if (((uVar6 != (uVar5 & 0xffffffff)) ||
        (iVar3 = fn_8272C128(uVar6 * 0xc + (unsigned __int64)*param_1,param_2), iVar3 != 0)) &&
       (uVar6 = uVar4, uVar4 < (uVar5 & 0xffffffff))) {
      uVar1 = *param_1;
      lVar7 = uVar4 * 0xc;
      do {
        iVar3 = fn_8272C128(lVar7 + (unsigned __int64)uVar1 + 0xc,param_2);
        if (-1 < iVar3) {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0xc;
      } while ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
  }
  return uVar6;
}

