#define NAN(x) ((x) != (x))
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern float fRam831c6c08;
extern float fRam831c6c38;
extern float fRam831c6c3c;
extern float fRam831c6c4c;
extern float fRam831c6c5c;
extern int fn_82270B70();
extern int fn_822A1CA8();
extern int fn_822A21A8();
extern int fn_8245FF08();
extern int fn_82460358();
extern int fn_82460610();
extern int fn_824651F0();
extern int fn_82469038();
extern int fn_824695C0();
extern int fn_82469958();
extern int fn_82469EB0();
extern int fn_82469F80();
extern int fn_8246E720();
extern int fn_8246EC90();
extern int fn_8246F560();
extern int fn_8246F628();
extern int fn_8246F6A0();
extern int fn_8246F9F0();
extern int fn_8246FE28();
extern int fn_8246FFB0();
extern int fn_8253FF60();
extern unsigned int lbl_82191418;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195994;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D12D4;
extern unsigned int uRam831c6c40;
extern unsigned int uRam831c6c44;
extern unsigned int uRam831c6c48;
extern unsigned int uRam831c6c50;
extern unsigned int uRam831c6c58;
extern unsigned int uRam831c6c60;
extern unsigned int uStack_50;
extern unsigned int uStack_70;


void fn_82470140(double param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  float *pfVar8;
  __int64 lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned char auStack_80 [16];
  unsigned int uStack_70;
  unsigned char auStack_60 [16];
  unsigned int uStack_50;
  
  *(float *)(param_2 + 0x78) = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
  iVar4 = fn_822A21A8();
  if (iVar4 == 0) {
    uStack_70 = 0;
    uStack_50 = 0;
    fn_822A1CA8(auStack_60,auStack_80);
    lbl_831D12D4 = 1;
  }
  iVar4 = *(int *)(param_2 + 0x10);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0x374) != 0) {
      fn_8246F9F0(param_2,param_2 + 0x158);
      iVar4 = *(int *)(param_2 + 0x444);
      if (*(int *)(iVar4 + 0xc) != 1) {
        *(unsigned int *)(iVar4 + 0xc) = 1;
        dVar11 = (double)lbl_82191418;
        *(unsigned int *)(iVar4 + 0x10) = 1;
        fn_82469F80(dVar11);
      }
      iVar4 = *(int *)(param_2 + 0x308);
      if (iVar4 != 0) {
        iVar5 = fn_82270B70();
        puVar7 = *(unsigned int **)(iVar5 + 0xa8);
        for (puVar1 = (unsigned int *)*puVar7; puVar1 != puVar7; puVar1 = (unsigned int *)*puVar1) {
          if ((puVar1[2] == iVar4) && (puVar1[0x42d] == 0)) {
            puVar1[5] = 1;
          }
          puVar7 = *(unsigned int **)(iVar5 + 0xa8);
        }
      }
      *(unsigned int *)(param_2 + 0x374) = 0;
    }
    if (((double)fRam831c6c38 <= (double)*(float *)(param_2 + 0x78)) &&
       ((double)(float)((double)*(float *)(param_2 + 0x78) - param_1) < (double)fRam831c6c38)) {
      fn_82460358(*(unsigned int *)(param_2 + 8));
    }
    dVar11 = (double)lbl_82193AF0;
    if (((double)fRam831c6c3c <= (double)*(float *)(param_2 + 0x78)) &&
       ((double)(float)((double)*(float *)(param_2 + 0x78) - param_1) < (double)fRam831c6c3c)) {
      dVar13 = (double)*(float *)(param_2 + 0x48);
      dVar10 = (double)*(float *)(param_2 + 0x20);
      if ((dVar10 < (double)(float)(dVar13 - dVar11)) || ((double)(float)(dVar13 + dVar11) < dVar10)
         ) {
        iVar4 = param_2 + 0xf0;
        if (dVar10 <= dVar13) {
          iVar4 = param_2 + 0xf4;
        }
      }
      else if ((dVar10 < (double)lbl_82195994) || (dVar11 < dVar10)) {
        iVar4 = param_2 + 0xf8;
      }
      else {
        iVar4 = param_2 + 0xfc;
      }
      fn_824651F0(*(unsigned int *)(param_2 + 0x440),iVar4);
      fn_8246F9F0(param_2,param_2 + 0x174);
    }
    dVar10 = (double)ltcg_pool_0_0f;
    iVar4 = fn_8246E720(param_1,dVar10,param_2);
    if (iVar4 != 0) {
      fn_82469958(*(unsigned int *)(param_2 + 0x3fc),*(int *)(param_2 + 0x70) == 0);
      if ((dVar10 < (double)*(float *)(param_2 + 0x20)) ||
         (dVar10 < (double)*(float *)(param_2 + 0x48))) {
        fn_8246EC90(param_2,param_2 + 0x338,1,1,0xffffffff821bc6c4,0xffffffff821bc6a8);
        fn_8246F560((double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x48),param_2)
        ;
        uVar2 = uRam831c6c40;
      }
      else {
        fn_8246F628(param_2,0xffffffff821bc6c4);
        fn_8246F6A0(param_2,0xffffffff821bc6a8);
        uVar2 = uRam831c6c44;
        if (*(int *)(param_2 + 0x70) != 0) {
          uVar2 = uRam831c6c48;
        }
      }
      *(unsigned int *)(param_2 + 0x18) = uVar2;
      *(unsigned int *)(param_2 + 0x10) = 1;
      fn_8245FF08(*(unsigned int *)(param_2 + 8));
      dVar10 = (double)*(float *)(param_2 + 0x48);
      dVar13 = (double)*(float *)(param_2 + 0x20);
      if ((dVar13 < (double)(float)(dVar10 - dVar11)) || ((double)(float)(dVar10 + dVar11) < dVar13)
         ) {
        if (dVar13 <= dVar10) {
          if (dVar10 <= dVar13) goto LAB_82470888;
          uVar6 = 2;
        }
        else {
          uVar6 = 1;
        }
        fn_82469038(*(unsigned int *)(param_2 + 0x418),uVar6);
      }
    }
    goto LAB_82470888;
  }
  if (iVar4 == 1) {
    iVar4 = fn_8246E720(param_1,(double)fRam831c6c08,param_2);
    if (iVar4 == 0) goto LAB_82470888;
    if ((ltcg_pool_0_0f < *(float *)(param_2 + 0x20)) || (ltcg_pool_0_0f < *(float *)(param_2 + 0x48)))
    {
      if (*(int *)(param_2 + 0x70) == 0) {
        fn_82469958(*(unsigned int *)(param_2 + 0x3fc),3);
        fn_82469958(*(unsigned int *)(param_2 + 0x3fc),1);
      }
      fn_8246F9F0(param_2,param_2 + 0xb8);
      *(float *)(param_2 + 0x18) = fRam831c6c4c;
      *(unsigned int *)(param_2 + 0x10) = 2;
      goto LAB_82470888;
    }
LAB_824705f8:
    fn_8246FFB0(param_2);
  }
  else {
    if (iVar4 == 2) {
      dVar10 = (double)ltcg_pool_0_0f;
      iVar4 = fn_8246E720(param_1,dVar10,param_2);
      dVar11 = (double)(*(float *)(param_2 + 0x18) / fRam831c6c4c);
      pfVar8 = (float *)(param_2 + 8);
      lVar9 = 2;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar11 < dVar10) << 2) | (unsigned int)(NAN(dVar11) || NAN(dVar10)) << 2)
                    ) < 0.0) {
        dVar11 = dVar10;
      }
      dVar12 = (double)(float)(dVar11 - (double)lbl_821CA460);
      dVar13 = (double)lbl_821CA460;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar12 < dVar10) << 2) | (unsigned int)(NAN(dVar12) || NAN(dVar10)) << 2)
                    ) < 0.0) {
        dVar13 = dVar11;
      }
      do {
        pfVar3 = pfVar8 + 6;
        dVar11 = (double)(float)((double)*pfVar3 + (double)pfVar8[8]);
        pfVar8[0xc] = (float)((double)(float)((double)pfVar8[8] - dVar11) * dVar13 + dVar11);
        pfVar8 = pfVar8 + 10;
        *pfVar8 = (float)((double)*pfVar3 * dVar13);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      fn_8246F560((double)*(float *)(param_2 + 0x30),(double)*(float *)(param_2 + 0x58),param_2);
      fn_8253FF60((double)*(float *)(param_2 + 0x60));
      uVar6 = fn_8253FF60((double)*(float *)(param_2 + 0x38));
      fn_824695C0(*(unsigned int *)(param_2 + 0x3fc),uVar6);
      if (iVar4 == 0) goto LAB_82470888;
      fn_8246F9F0(param_2,param_2 + 0xbc);
      fn_8246F9F0(param_2,param_2 + 0xc0);
      *(unsigned int *)(param_2 + 0x10) = 3;
      uVar2 = uRam831c6c50;
    }
    else {
      if (iVar4 == 3) {
        iVar4 = fn_8246E720(param_1,(double)fRam831c6c08,param_2);
        if (iVar4 == 0) goto LAB_82470888;
        goto LAB_824705f8;
      }
      if (iVar4 == 4) {
        iVar4 = fn_8246E720(param_1,(double)fRam831c6c08,param_2);
        if (iVar4 == 0) goto LAB_82470888;
        fn_8246FE28(param_2);
        *(unsigned int *)(param_2 + 0x10) = 5;
        uVar2 = uRam831c6c58;
      }
      else {
        if (iVar4 == 5) {
          dVar11 = (double)ltcg_pool_0_0f;
          iVar4 = fn_8246E720(param_1,dVar11,param_2);
          if (iVar4 != 0) {
            fn_8246F9F0(param_2,param_2 + 0xb8);
            if (*(int *)(param_2 + 0x70) == 0) {
              uVar6 = 4;
              if (*(float *)(param_2 + 0x24) <= *(float *)(param_2 + 0x4c)) {
                uVar6 = 5;
              }
              fn_82469958(*(unsigned int *)(param_2 + 0x3fc),uVar6);
              fn_82469958(*(unsigned int *)(param_2 + 0x3fc),1);
            }
            *(unsigned int *)(param_2 + 0x10) = 6;
            *(float *)(param_2 + 0x18) = fRam831c6c5c;
            *(float *)(param_2 + 0x78) = (float)dVar11;
          }
          goto LAB_82470888;
        }
        if (iVar4 != 6) {
          if (((iVar4 == 7) &&
              (iVar4 = fn_8246E720(param_1,(double)fRam831c6c08,param_2), iVar4 != 0)) &&
             (iVar4 = *(int *)(param_2 + 8), *(int *)(iVar4 + 0x54) == 6)) {
            uVar6 = 9;
            if (*(int *)(iVar4 + 0x2c) == 0) {
              uVar6 = 4;
            }
            fn_82460610(iVar4,uVar6);
          }
          goto LAB_82470888;
        }
        dVar10 = (double)ltcg_pool_0_0f;
        iVar4 = fn_8246E720(param_1,dVar10,param_2);
        dVar11 = (double)(*(float *)(param_2 + 0x18) / fRam831c6c5c);
        pfVar8 = (float *)(param_2 + 0x2c);
        lVar9 = 2;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((dVar11 < dVar10) << 2) |
                      (unsigned int)(NAN(dVar11) || NAN(dVar10)) << 2)) < 0.0) {
          dVar11 = dVar10;
        }
        dVar12 = (double)(float)(dVar11 - (double)lbl_821CA460);
        dVar13 = (double)lbl_821CA460;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((dVar12 < dVar10) << 2) |
                      (unsigned int)(NAN(dVar12) || NAN(dVar10)) << 2)) < 0.0) {
          dVar13 = dVar11;
        }
        do {
          pfVar8[2] = (float)((double)pfVar8[-2] * dVar13);
          pfVar8[3] = (float)((double)(float)((double)(pfVar8[-1] + pfVar8[-3]) - (double)*pfVar8) *
                              dVar13 + (double)*pfVar8);
          pfVar8 = pfVar8 + 10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        fn_82469EB0((double)*(float *)((unsigned int)(*(float *)(param_2 + 0x24) <=
                                                   *(float *)(param_2 + 0x4c)) * 0x28 + param_2 +
                                            0x34),*(unsigned int *)(param_2 + 0x310));
        fn_8253FF60((double)*(float *)(param_2 + 0x60));
        uVar6 = fn_8253FF60((double)*(float *)(param_2 + 0x38));
        fn_824695C0(*(unsigned int *)(param_2 + 0x3fc),uVar6);
        if (iVar4 == 0) goto LAB_82470888;
        if (*(int *)(param_2 + 0x70) == 0) {
          fn_82469958(*(unsigned int *)(param_2 + 0x3fc),1);
        }
        fn_8246F9F0(param_2,param_2 + 0xbc);
        *(unsigned int *)(param_2 + 0x10) = 7;
        uVar2 = uRam831c6c60;
      }
    }
    *(unsigned int *)(param_2 + 0x18) = uVar2;
  }
LAB_82470888:
  fn_8253FF60((double)*(float *)(param_2 + 0x60));
  uVar6 = fn_8253FF60((double)*(float *)(param_2 + 0x38));
  fn_824695C0(*(unsigned int *)(param_2 + 0x3fc),uVar6);
  return;
}

