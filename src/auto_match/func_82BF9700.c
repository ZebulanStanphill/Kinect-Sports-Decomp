#define true 1
extern int fn_82BF9620();
extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322DCF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD20;
extern unsigned int lbl_8322FD26;
extern unsigned int uRam8322fd28;


unsigned __int64 fn_82BF9700(unsigned int *param_1,unsigned int *param_2)

{
  short sVar1;
  unsigned short uVar2;
  unsigned char *pbVar3;
  unsigned int uVar4;
  unsigned char *pbVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  __int64 lVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  int *apiStack_90 [36];
  
  pbVar3 = (unsigned char *)*param_1;
  uVar4 = param_1[1];
  pbVar5 = (unsigned char *)param_1[2];
  uVar6 = param_1[3];
  uVar9 = RtlComputeCrc32(0,pbVar3,uVar4);
  uVar10 = RtlComputeCrc32(uVar9,pbVar5,uVar6);
  uVar12 = 0;
  uVar20 = (unsigned __int64)lbl_8322FD20;
  uVar14 = uVar20;
  uVar21 = 0;
  if (uVar20 != 0) {
    do {
      uVar16 = (uVar14 + uVar12 & 0xffffffff) >> 1;
      lVar15 = (uVar16 & 0x3fffffff) * 4;
      uVar7 = *(unsigned int *)((int)&lbl_8322DCF8 + (int)lVar15);
      uVar21 = uVar16;
      if (uVar10 == uVar7) {
        if (uVar16 != 0) {
          lVar15 = lVar15 + -0x7cdd230c;
          goto LAB_82bf97b8;
        }
        break;
      }
      if (uVar7 < uVar10) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar14;
        uVar21 = uVar12;
      }
      uVar14 = uVar16;
    } while (uVar12 < uVar16);
  }
  goto LAB_82bf97d0;
  while( true ) {
    uVar21 = uVar21 - 1;
    lVar15 = lVar15 + -4;
    if (uVar21 == 0) break;
LAB_82bf97b8:
    if (uVar10 != *(unsigned int *)lVar15) break;
  }
LAB_82bf97d0:
  lbl_8322FD26 = (unsigned short)uVar21;
  uRam8322fd28 = uVar10;
  if ((uVar21 & 0xffffffff) != uVar20) {
    lVar15 = (uVar21 & 0x7fffffff) * 2 + -0x7cdd1308;
    lVar19 = (uVar21 & 0x3fffffff) * 4 + -0x7cdd2308;
    do {
      if (uVar10 != *(unsigned int *)lVar19) {
        return 0xffff;
      }
      sVar1 = *(short *)lVar15;
      iVar11 = fn_82BF9620(sVar1,0,0,apiStack_90);
      piVar8 = apiStack_90[0];
      if (((((iVar11 != 0) &&
            (uVar14 = (unsigned __int64)*(unsigned short *)(apiStack_90[0] + 5) +
                      (unsigned __int64)*(unsigned short *)(apiStack_90[0] + 4) +
                      (unsigned __int64)*(unsigned short *)((int)apiStack_90[0] + 0x12) + 0x22b & 0xfffffe00,
            *apiStack_90[0] == 0x4355524c)) && (apiStack_90[0][2] == uVar10)) &&
          ((*(short *)(apiStack_90[0] + 3) == sVar1 &&
           (uVar14 == *(unsigned short *)((int)apiStack_90[0] + 0xe))))) &&
         ((uVar14 < 0x2001 &&
          (iVar11 = RtlComputeCrc32(0,apiStack_90[0] + 2,uVar14 - 8), iVar11 == piVar8[1])))) {
        if (((*(unsigned short *)(piVar8 + 4) == uVar4) && (*(unsigned short *)((int)piVar8 + 0x12) == uVar6)) &&
           (*(short *)((int)piVar8 + 0x16) == *(short *)(param_1 + 4))) {
          lVar13 = 0;
          if (uVar4 != 0) {
            pbVar17 = pbVar3;
            pbVar18 = (unsigned char *)(piVar8 + 0xb);
            do {
              lVar13 = (unsigned __int64)*pbVar17 - (unsigned __int64)*pbVar18;
              if (lVar13 != 0) break;
              pbVar17 = pbVar17 + 1;
              pbVar18 = pbVar18 + 1;
            } while (pbVar17 != pbVar3 + uVar4);
          }
          if ((int)lVar13 == 0) {
            pbVar17 = (unsigned char *)((int)(piVar8 + 0xb) + (unsigned int)*(unsigned short *)(piVar8 + 4));
            if (uVar6 != 0) {
              pbVar18 = pbVar5;
              do {
                lVar13 = (unsigned __int64)*pbVar18 - (unsigned __int64)*pbVar17;
                if (lVar13 != 0) break;
                pbVar18 = pbVar18 + 1;
                pbVar17 = pbVar17 + 1;
              } while (pbVar18 != pbVar5 + uVar6);
            }
            if (((int)lVar13 == 0) &&
               (uVar14 = (unsigned int)piVar8[6] + uVar14,
               (unsigned __int64)(unsigned int)piVar8[6] <= (uVar14 & 0xffffffff))) {
              uVar12 = 0;
              for (uVar2 = *(unsigned short *)(piVar8 + 3); uVar2 != 0xfffe; uVar2 = (&lbl_8322BCF8)[uVar2])
              {
                uVar12 = uVar12 + 1;
              }
              if ((uVar12 & 0xffffffff) ==
                  (unsigned __int64)((uVar14 & 0x1fff) != 0) + ((uVar14 & 0xffffffff) >> 0xd)) {
                sVar1 = *(short *)((int)&lbl_8322F4F8 + (int)((uVar21 & 0xffffffff) << 1));
                if ((sVar1 != -3) && (sVar1 != -2)) {
                  *param_2 = piVar8;
                  return uVar21;
                }
                return 0xfffb;
              }
            }
          }
        }
      }
      uVar21 = uVar21 + 1;
      lVar19 = lVar19 + 4;
      lVar15 = lVar15 + 2;
    } while ((uVar21 & 0xffffffff) != uVar20);
  }
  return 0xffff;
}

