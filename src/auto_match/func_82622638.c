#define NAN(x) ((x) != (x))
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82622638(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar12;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  __int64 lVar21;
  __int64 lVar22;
  
  fVar1 = param_2[2];
  uVar13 = (unsigned __int64)((unsigned int)(int)*param_2 >> 0x1f) - 1 & (unsigned __int64)(unsigned int)(int)*param_2;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar1 = ltcg_pool_0_0f;
  }
  if (0xbf < (int)uVar13) {
    uVar13 = 0xc0;
  }
  uVar14 = (unsigned __int64)((unsigned int)(int)param_2[1] >> 0x1f) - 1 & (unsigned __int64)(unsigned int)(int)param_2[1];
  if (0x5f < (int)uVar14) {
    uVar14 = 0x60;
  }
  uVar15 = (unsigned __int64)((unsigned int)(int)(*param_3 + lbl_8218E8E8) >> 0x1f) - 1 &
           (unsigned __int64)(unsigned int)(int)(*param_3 + lbl_8218E8E8);
  if (0xbf < (int)uVar15) {
    uVar15 = 0xc0;
  }
  uVar16 = (unsigned __int64)((unsigned int)(int)(param_3[1] + lbl_8218E8E8) >> 0x1f) - 1 &
           (unsigned __int64)(unsigned int)(int)(param_3[1] + lbl_8218E8E8);
  if (0x5f < (int)uVar16) {
    uVar16 = 0x60;
  }
  uVar19 = (__int64)((int)uVar13 >> 3) + (unsigned __int64)((int)uVar13 < 0 && (uVar13 & 7) != 0);
  uVar8 = (__int64)((int)uVar14 >> 3) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 7) != 0);
  uVar17 = ((int)uVar15 >> 3) + (unsigned int)((int)uVar15 < 0 && (uVar15 & 7) != 0);
  uVar17 = -((int)uVar17 >> 0x1f) - 1U & uVar17;
  if (0x16 < (int)uVar17) {
    uVar17 = 0x17;
  }
  uVar5 = ((int)uVar16 >> 3) + (unsigned int)((int)uVar16 < 0 && (uVar16 & 7) != 0);
  uVar5 = -((int)uVar5 >> 0x1f) - 1U & uVar5;
  if (10 < (int)uVar5) {
    uVar5 = 0xb;
  }
  if ((int)uVar8 <= (int)uVar5) {
    lVar21 = uVar16 + (uVar8 & 0x1fffffff) * -8;
    lVar20 = (uVar8 * 0x18 + uVar19) * 0x108;
    do {
      if ((int)uVar19 <= (int)uVar17) {
        lVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + lVar20;
        lVar2 = uVar15 + (uVar19 & 0x1fffffff) * -8;
        uVar18 = uVar19;
        do {
          if ((unsigned int)fVar1 <= (unsigned int)*(float *)lVar22) {
            return 1;
          }
          if ((unsigned int)fVar1 <= (unsigned int)((float *)lVar22)[1]) {
            uVar9 = (uVar13 - uVar15) + lVar2;
            uVar9 = ((uVar9 & 0xffffffff) >> 0x1f) - 1 & uVar9;
            if (7 < (int)uVar9) {
              uVar9 = 8;
            }
            uVar12 = -((int)(unsigned int)lVar2 >> 0x1f) - 1U & (unsigned int)lVar2;
            if (7 < (int)uVar12) {
              uVar12 = 8;
            }
            uVar10 = (uVar14 - uVar16) + lVar21;
            uVar10 = ((uVar10 & 0xffffffff) >> 0x1f) - 1 & uVar10;
            if (7 < (int)uVar10) {
              uVar10 = 8;
            }
            uVar6 = -((int)(unsigned int)lVar21 >> 0x1f) - 1U & (unsigned int)lVar21;
            if (7 < (int)uVar6) {
              uVar6 = 8;
            }
            if ((int)uVar10 < (int)uVar6) {
              lVar3 = (uVar10 & 0x7ffffff) * 0x20 + lVar22 + 8;
              do {
                iVar7 = (int)uVar9;
                lVar11 = lVar3;
                uVar4 = uVar9;
                while (iVar7 < (int)uVar12) {
                  if ((unsigned int)fVar1 <= (unsigned int)*(float *)lVar11) {
                    return 1;
                  }
                  uVar4 = uVar4 + 1;
                  lVar11 = lVar11 + 4;
                  iVar7 = (int)uVar4;
                }
                uVar10 = uVar10 + 1;
                lVar3 = lVar3 + 0x20;
              } while ((int)uVar10 < (int)uVar6);
            }
          }
          uVar18 = uVar18 + 1;
          lVar22 = lVar22 + 0x108;
          lVar2 = lVar2 + -8;
        } while ((int)uVar18 <= (int)uVar17);
      }
      uVar8 = uVar8 + 1;
      lVar20 = lVar20 + 0x18c0;
      lVar21 = lVar21 + -8;
    } while ((int)uVar8 <= (int)uVar5);
  }
  return 0;
}

