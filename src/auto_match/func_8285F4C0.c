extern float fRam832115f0;
extern int fn_82F68B60();
extern int fn_82F68B78();
extern int iRam832115e0;
extern unsigned int lbl_82005710;


__int64 fn_8285F4C0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  unsigned char bVar1;
  float *pfVar2;
  double dVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  float *pfVar7;
  float *pfVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  if (iRam832115e0 == 0) {
    lVar4 = fn_82F68B60((double)fRam832115f0,param_1,param_2 & 0xff,param_3,0xffffffff832115e4);
    return lVar4;
  }
  if (iRam832115e0 == 1) {
    pfVar8 = (float *)0x83211600;
    pfVar7 = (float *)0x832115f4;
    param_2 = param_2 & 0xff;
    iVar5 = fn_82F68B78();
    dVar3 = lbl_82005710;
    param_2 = param_2 & 0xff;
    uVar11 = 0;
    uVar12 = 0;
    uVar9 = -(unsigned __int64)(*param_4 < param_2) & (unsigned __int64)*param_4;
    uVar6 = (unsigned __int64)(unsigned int)(0x80 >> ((unsigned int)uVar9 & 0x3f)) & 0xff;
    uVar10 = 0;
    if (param_2 != 0) {
      do {
        uVar11 = uVar10;
        bVar1 = *(unsigned char *)param_3;
        if ((uVar6 & bVar1) != 0) {
          pfVar2 = (float *)((int)uVar9 * 0x10 + iVar5);
          dVar13 = (double)pfVar2[1];
          dVar16 = (double)pfVar7[1];
          if (dVar13 < 0.0) {
            dVar16 = (double)pfVar8[1];
          }
          dVar18 = (double)*pfVar2;
          dVar15 = (double)*pfVar7;
          if (dVar18 < 0.0) {
            dVar15 = (double)*pfVar8;
          }
          dVar17 = (double)pfVar2[2];
          dVar14 = (double)pfVar7[2];
          if (dVar17 < 0.0) {
            dVar14 = (double)pfVar8[2];
          }
          if ((dVar14 * dVar17 + dVar15 * dVar18 + dVar16 * dVar13) - (double)pfVar2[3] <= dVar3) {
            dVar16 = (double)pfVar8[1];
            if (dVar13 < 0.0) {
              dVar16 = (double)pfVar7[1];
            }
            uVar10 = 1;
            dVar15 = (double)*pfVar8;
            if (dVar18 < 0.0) {
              dVar15 = (double)*pfVar7;
            }
            dVar14 = (double)pfVar8[2];
            if (dVar17 < 0.0) {
              dVar14 = (double)pfVar7[2];
            }
            if ((dVar14 * dVar17 + dVar15 * dVar18 + dVar16 * dVar13) - (double)pfVar2[3] <= dVar3)
            {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = 3;
          }
          uVar11 = uVar10 | uVar11;
          if (uVar11 == 3) {
            *param_4 = (unsigned char)uVar9;
            return 0;
          }
          if (uVar10 == 0) {
            *(unsigned char *)param_3 = bVar1 & ~(unsigned char)uVar6;
          }
        }
        uVar9 = uVar9 + 1 & 0xff;
        if (uVar9 == param_2) {
          uVar9 = 0;
          uVar6 = 0x80;
        }
        else {
          uVar6 = uVar6 >> 1;
        }
        uVar12 = uVar12 + 1 & 0xff;
        uVar10 = uVar11;
      } while (uVar12 < param_2);
    }
    return ((unsigned __int64)LZCOUNT((unsigned int)(uVar11 == 1)) >> 4 & 2) + (unsigned __int64)(uVar11 == 1);
  }
  return 0;
}

