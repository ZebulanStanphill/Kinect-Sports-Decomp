#define true 1
extern unsigned int lbl_82005710;


__int64 fn_827EB518(int param_1,unsigned char *param_2,float *param_3,float *param_4,unsigned char *param_5)

{
  double dVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned char bVar6;
  unsigned int uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = lbl_82005710;
  uVar7 = 0;
  uVar3 = -(unsigned int)(*param_5 < 6) & (unsigned int)*param_5;
  bVar6 = 0;
  uVar2 = (unsigned __int64)(unsigned int)(0x80 >> (uVar3 & 0x3f)) & 0xff;
  do {
    if ((uVar2 & *param_2) != 0) {
      iVar4 = uVar3 * 0x10 + param_1;
      dVar8 = (double)*(float *)(iVar4 + 0x4c);
      dVar11 = (double)param_3[1];
      if (dVar8 < 0.0) {
        dVar11 = (double)param_4[1];
      }
      dVar13 = (double)*(float *)(iVar4 + 0x48);
      dVar10 = (double)*param_3;
      if (dVar13 < 0.0) {
        dVar10 = (double)*param_4;
      }
      dVar12 = (double)*(float *)(iVar4 + 0x50);
      dVar9 = (double)param_3[2];
      if (dVar12 < 0.0) {
        dVar9 = (double)param_4[2];
      }
      if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)*(float *)(iVar4 + 0x54) <=
          dVar1) {
        dVar11 = (double)param_4[1];
        if (dVar8 < 0.0) {
          dVar11 = (double)param_3[1];
        }
        uVar5 = 1;
        dVar10 = (double)*param_4;
        if (dVar13 < 0.0) {
          dVar10 = (double)*param_3;
        }
        dVar9 = (double)param_4[2];
        if (dVar12 < 0.0) {
          dVar9 = (double)param_3[2];
        }
        if ((dVar9 * dVar12 + dVar10 * dVar13 + dVar11 * dVar8) - (double)*(float *)(iVar4 + 0x54)
            <= dVar1) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 3;
      }
      uVar7 = uVar5 | uVar7;
      if (uVar7 == 3) {
        *param_5 = (unsigned char)uVar3;
        return 0;
      }
      if (uVar5 == 0) {
        *param_2 = *param_2 & ~(unsigned char)uVar2;
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
    if (uVar3 == 6) {
      uVar3 = 0;
      uVar2 = 0x80;
    }
    else {
      uVar2 = uVar2 >> 1;
    }
    bVar6 = bVar6 + 1;
    if (5 < bVar6) {
      return ((unsigned __int64)LZCOUNT((unsigned int)(uVar7 == 1)) >> 4 & 2) + (unsigned __int64)(uVar7 == 1);
    }
  } while( true );
}

