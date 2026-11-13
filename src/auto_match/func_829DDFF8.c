void fn_829DDFF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  int iVar11;
  
  uVar3 = param_3 & 0xff;
  uVar4 = param_4 & 0xff;
  uVar5 = param_2 & 0xff;
  uVar7 = param_3;
  if (uVar3 <= uVar4) {
    uVar7 = param_4;
  }
  uVar8 = param_2;
  if ((uVar5 <= (uVar7 & 0xff)) && (uVar8 = param_3, uVar3 <= uVar4)) {
    uVar8 = param_4;
  }
  uVar7 = param_3;
  if (uVar4 <= uVar3) {
    uVar7 = param_4;
  }
  if (((uVar7 & 0xff) <= uVar5) && (param_2 = param_3, uVar4 <= uVar3)) {
    param_2 = param_4;
  }
  iVar1 = (int)(uVar8 & 0xff);
  lVar9 = (uVar8 & 0xff) - (param_2 & 0xff);
  iVar2 = (int)lVar9;
  if (lVar9 != 0) {
    iVar6 = (int)uVar5;
    iVar11 = (int)uVar3;
    if (iVar6 == iVar1) {
      lVar10 = (__int64)(((iVar11 - (int)uVar4) * 0x3c) / iVar2);
      lVar9 = lVar10 + 0x2d;
      if (lVar9 < 0) {
        lVar9 = lVar10 + 0x195;
      }
    }
    else if (iVar11 == iVar1) {
      lVar9 = (__int64)((((int)uVar4 - iVar6) * 0x3c) / iVar2) + 0xa5;
    }
    else {
      lVar9 = (__int64)(((iVar6 - iVar11) * 0x3c) / iVar2) + 0x11d;
    }
    iVar11 = (int)lVar9;
    if ((iVar11 < 0x13c) && (0x13 < iVar11)) {
      if (iVar11 < 0x32) {
        iVar11 = 1;
      }
      else if (iVar11 < 0x4b) {
        iVar11 = 2;
      }
      else if (iVar11 < 0x9b) {
        iVar11 = 3;
      }
      else if (iVar11 < 0xc3) {
        iVar11 = 4;
      }
      else if (iVar11 < 0x113) {
        iVar11 = 5;
      }
      else {
        iVar11 = 6;
      }
      goto LAB_829de148;
    }
  }
  iVar11 = 0;
LAB_829de148:
  *(__int64 *)(param_1 + 0x578) = *(__int64 *)(param_1 + 0x578) + 1;
  iVar1 = ((iVar11 * 5 + (iVar2 * 5) / (iVar1 + 1)) * 5 + (iVar1 * 5 >> 8)) * 8;
  *(__int64 *)(iVar1 + param_1) = *(__int64 *)(iVar1 + param_1) + 1;
  return;
}

