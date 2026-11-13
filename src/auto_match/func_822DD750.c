extern int fn_822DD818();


void fn_822DD750(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  iVar2 = (param_2 - (int)param_1) / 0x1c;
  lVar8 = (__int64)iVar2;
  iVar1 = (int)(param_3 - (int)param_1) / 0x1c;
  lVar5 = (__int64)iVar1;
  lVar4 = lVar8;
  lVar7 = lVar5;
  if (iVar2 != 0) {
    do {
      lVar5 = lVar4;
      lVar4 = lVar7 - (__int64)((int)lVar7 / (int)lVar5) * (__int64)(int)lVar5;
      lVar7 = lVar5;
    } while (lVar4 != 0);
  }
  if (((int)lVar5 < iVar1) && (0 < (int)lVar5)) {
    uVar6 = lVar5 * 0x1c + param_1;
    do {
      uVar9 = uVar6 + lVar8 * 0x1c;
      uVar3 = uVar6;
      if ((uVar9 & 0xffffffff) == (unsigned __int64)param_3) {
        uVar9 = param_1;
      }
      do {
        fn_822DD818(uVar3,uVar9);
        iVar1 = (int)(param_3 - (int)uVar9) / 0x1c;
        if (iVar2 < iVar1) {
          uVar10 = lVar8 * 0x1c + uVar9;
        }
        else {
          uVar10 = (lVar8 - iVar1) * 0x1c + param_1;
        }
        uVar3 = uVar9;
        uVar9 = uVar10;
      } while ((uVar10 & 0xffffffff) != (uVar6 & 0xffffffff));
      lVar5 = lVar5 + -1;
      uVar6 = uVar6 - 0x1c;
    } while (0 < lVar5);
  }
  return;
}

