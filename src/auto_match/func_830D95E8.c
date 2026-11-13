typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_830D95E8(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  
  uVar5 = (unsigned __int64)(short)param_2;
  uVar1 = param_2 >> 0x10;
  uVar12 = (unsigned __int64)(int)uVar1;
  uVar2 = (unsigned __int64)*(unsigned short *)(param_3 + 0x12) & 0x1ffffffe;
  uVar3 = (unsigned __int64)*(unsigned short *)(param_3 + 0x10) & 0x1ffffffe;
  lVar6 = (__int64)(param_2 >> 0x12) + uVar3 * 8;
  bVar4 = false;
  lVar8 = (__int64)((int)(short)param_2 >> 2) + uVar2 * 8;
  lVar10 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x34) & 0x1ffffffe) * 8;
  lVar13 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x32) & 0x1ffffffe) * 8;
  if ((uVar1 & 4) == 0) {
    lVar11 = -0x12;
  }
  else {
    lVar11 = -0x11;
    lVar10 = lVar10 + 1;
    lVar13 = lVar13 + 1;
  }
  lVar9 = lVar11;
  if (((int)lVar8 < (int)lVar11) || (lVar9 = lVar13, (int)lVar13 < (int)lVar8)) {
    bVar4 = true;
    lVar8 = lVar9;
  }
  iVar7 = (int)lVar6;
  if (((iVar7 < (int)lVar11) || (lVar11 = lVar10, (int)lVar10 < iVar7)) || (lVar11 = lVar6, bVar4))
  {
    uVar5 = (lVar8 + uVar2 * -8 & 0x3fffffff) * 4 + (uVar5 & 3);
    uVar12 = (lVar11 + uVar3 * -8 & 0x3fffffff) * 4 + ((unsigned __int64)uVar1 & 3);
  }
  return (uVar12 & 0xffff) << 0x10 | uVar5 & 0xffffffff0000ffff;
}

