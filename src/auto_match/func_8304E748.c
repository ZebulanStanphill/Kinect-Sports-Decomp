typedef unsigned char bool;
extern unsigned int lbl_8217DC98;
extern unsigned int lbl_8217DCB8;


unsigned __int64 fn_8304E748(int param_1,short *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  __int64 lVar10;
  
  if (param_3 != 0) {
    pbVar9 = (unsigned char *)(param_1 + 2);
    do {
      uVar5 = (unsigned __int64)*pbVar9;
      param_3 = param_3 + -1;
      iVar6 = (int)*(short *)(pbVar9 + -2);
      pbVar4 = pbVar9 + 2;
      *param_2 = *(short *)(pbVar9 + -2);
      lVar10 = 0x1f;
      param_2 = param_2 + param_5;
      uVar3 = uVar5;
      do {
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar8 = (int)*(short *)((int)&lbl_8217DCB8 + (int)(uVar3 << 1)) * ((bVar2 & 7) * 2 + 1);
        iVar7 = ((int)uVar8 >> 3) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 7) != 0);
        if ((bVar2 & 8) != 0) {
          iVar7 = -iVar7;
        }
        iVar7 = iVar7 + iVar6;
        if (((short)iVar7 != iVar7) && (bVar1 = -0x8001 < iVar7, iVar7 = -0x8000, bVar1)) {
          iVar7 = 0x7fff;
        }
        uVar5 = (__int64)*(short *)(&lbl_8217DC98 + (bVar2 & 0xf) * 2) + uVar5;
        if ((__int64)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0x58 < (int)uVar5) {
          uVar5 = 0x58;
        }
        *param_2 = (short)iVar7;
        uVar8 = (int)*(short *)((int)&lbl_8217DCB8 + (int)((uVar5 & 0xffffffff) << 1)) *
                ((bVar2 >> 3 & 0xe) + 1);
        iVar6 = ((int)uVar8 >> 3) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 7) != 0);
        if ((bVar2 >> 4 & 8) != 0) {
          iVar6 = -iVar6;
        }
        iVar6 = iVar6 + iVar7;
        if (((short)iVar6 != iVar6) && (bVar1 = -0x8001 < iVar6, iVar6 = -0x8000, bVar1)) {
          iVar6 = 0x7fff;
        }
        uVar5 = (__int64)*(short *)(&lbl_8217DC98 + (unsigned int)(bVar2 >> 4) * 2) + uVar5;
        if ((__int64)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0x58 < (int)uVar5) {
          uVar5 = 0x58;
        }
        param_2[param_5] = (short)iVar6;
        param_2 = param_2 + param_5 + param_5;
        uVar3 = uVar5 & 0x7fffffff;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar8 = (int)*(short *)((int)&lbl_8217DCB8 + (int)((uVar5 & 0xffffffff) << 1)) *
              ((*pbVar4 & 7) * 2 + 1);
      iVar7 = ((int)uVar8 >> 3) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 7) != 0);
      if ((*pbVar4 & 8) != 0) {
        iVar7 = -iVar7;
      }
      iVar7 = iVar7 + iVar6;
      if (((short)iVar7 != iVar7) && (bVar1 = -0x8001 < iVar7, iVar7 = -0x8000, bVar1)) {
        iVar7 = 0x7fff;
      }
      *param_2 = (short)iVar7;
      pbVar9 = pbVar9 + param_4;
      param_2 = param_2 + param_5;
    } while (param_3 != 0);
  }
  return 1;
}

