extern unsigned int lbl_82005710;


__int64 fn_827EB3B8(int param_1,unsigned int param_2,unsigned char *param_3,float *param_4,float *param_5,
                      unsigned char *param_6)

{
  double dVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  float *pfVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = lbl_82005710;
  param_2 = param_2 & 0xff;
  uVar6 = 0;
  uVar7 = 0;
  uVar3 = -(unsigned int)(*param_6 < param_2) & (unsigned int)*param_6;
  uVar2 = (unsigned __int64)(unsigned int)(0x80 >> (uVar3 & 0x3f)) & 0xff;
  uVar5 = 0;
  if (param_2 != 0) {
    do {
      uVar6 = uVar5;
      if ((uVar2 & *param_3) != 0) {
        pfVar4 = (float *)(uVar3 * 0x10 + param_1);
        dVar8 = (double)pfVar4[1];
        dVar11 = (double)param_4[1];
        if (dVar8 < 0.0) {
          dVar11 = (double)param_5[1];
        }
        dVar13 = (double)*pfVar4;
        dVar10 = (double)*param_4;
        if (dVar13 < 0.0) {
          dVar10 = (double)*param_5;
        }
        dVar12 = (double)pfVar4[2];
        dVar9 = (double)param_4[2];
        if (dVar12 < 0.0) {
          dVar9 = (double)param_5[2];
        }
        if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)pfVar4[3] <= dVar1) {
          dVar11 = (double)param_5[1];
          if (dVar8 < 0.0) {
            dVar11 = (double)param_4[1];
          }
          uVar5 = 1;
          dVar10 = (double)*param_5;
          if (dVar13 < 0.0) {
            dVar10 = (double)*param_4;
          }
          dVar9 = (double)param_5[2];
          if (dVar12 < 0.0) {
            dVar9 = (double)param_4[2];
          }
          if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)pfVar4[3] <= dVar1) {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 3;
        }
        uVar6 = uVar5 | uVar6;
        if (uVar6 == 3) {
          *param_6 = (unsigned char)uVar3;
          return 0;
        }
        if (uVar5 == 0) {
          *param_3 = *param_3 & ~(unsigned char)uVar2;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
      if (uVar3 == param_2) {
        uVar3 = 0;
        uVar2 = 0x80;
      }
      else {
        uVar2 = uVar2 >> 1;
      }
      uVar7 = uVar7 + 1 & 0xff;
      uVar5 = uVar6;
    } while (uVar7 < param_2);
  }
  return ((unsigned __int64)LZCOUNT((unsigned int)(uVar6 == 1)) >> 4 & 2) + (unsigned __int64)(uVar6 == 1);
}

