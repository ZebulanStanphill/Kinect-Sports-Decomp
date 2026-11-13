typedef unsigned char bool;
#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT41(h,l) ((unsigned __int64)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT51(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int iStack_c8;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82C77B70(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  bool bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  unsigned __int64 uVar25;
  int iVar26;
  unsigned __int64 *puVar27;
  unsigned char *pbVar28;
  unsigned __int64 uVar29;
  unsigned char bVar30;
  unsigned char bVar31;
  unsigned char bVar32;
  unsigned char bVar33;
  unsigned __int64 uVar34;
  unsigned __int64 uVar35;
  unsigned int uVar37;
  unsigned char bVar38;
  unsigned __int64 uVar36;
  unsigned __int64 uVar39;
  unsigned char bVar40;
  unsigned __int64 uVar41;
  int iVar42;
  unsigned __int64 uVar43;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  int iStack_c8;
  unsigned int uStack_c4;
  
  uVar1 = *(unsigned short *)(param_2 + 0x32);
  uVar39 = 0;
  uVar36 = (unsigned __int64)(uVar1 >> 1);
  iVar42 = (uVar1 & 0x7ffffffe) << 1;
  uVar37 = (unsigned int)(uVar1 >> 1);
  iStack_ec = uVar37 * param_4;
  uVar18 = (__int64)iVar42 * (__int64)(int)param_4;
  pbVar28 = (unsigned char *)(iStack_ec * 6 + *(int *)(param_2 + 0x524));
  puVar27 = (unsigned __int64 *)(iStack_ec * 8 + *(int *)(param_2 + 0x520));
  if (param_4 != 0) {
    uVar39 = (__int64)(int)(param_4 - 1) * (__int64)iVar42 + uVar36 * 2;
  }
  if (param_4 < param_5) {
    iStack_c8 = param_4 << 2;
    uVar16 = ((unsigned __int64)param_4 & 0x7fffff) * 0x200 + 0x100;
    uVar43 = ((unsigned __int64)(param_4 + 1) & 0xffffff) << 8;
    uStack_cc = (unsigned int)uVar16;
    uVar25 = (uVar18 & 0x3fffffff) << 2;
    uStack_c4 = (unsigned int)uVar43;
    uVar39 = (uVar39 & 0x3fffffff) << 2;
    uVar18 = (uVar18 + uVar1 & 0x3fffffff) << 2;
    lVar19 = uVar36 << 3;
    uStack_d0 = param_4;
    while( true ) {
      iVar42 = (int)uVar25;
      iStack_e0 = (int)uVar18;
      if ((uStack_d0 == 0) || (uVar21 = 0, *(int *)(*(int *)(param_2 + 0x518) + iStack_c8) != 0)) {
        uVar21 = 1;
      }
      uVar18 = (unsigned __int64)*(unsigned int *)(param_2 + 0x15c);
      dataCacheBlockTouch((uVar16 - 0x80) + uVar18);
      dataCacheBlockTouch(uVar16 + uVar18);
      dataCacheBlockTouch(uVar16 + 0x80 + uVar18);
      dataCacheBlockTouch(uVar16 + 0x100 + uVar18);
      dataCacheBlockTouch((uVar43 - 0x80) + (unsigned __int64)*(unsigned int *)(param_2 + 0x160));
      dataCacheBlockTouch(uVar43 + *(unsigned int *)(param_2 + 0x160));
      iVar17 = 0;
      iVar22 = iStack_e0;
      if (uVar36 != 0) {
        uVar41 = (unsigned __int64)uVar21 - 1 & uVar36;
        iVar26 = (int)lVar19;
        iVar22 = iVar26 + iStack_e0;
        iVar42 = iVar26 + iVar42;
        iStack_e4 = iStack_ec << 2;
        iStack_e8 = (int)uVar39;
        uVar20 = iVar26 + iStack_e8;
        iVar26 = 0;
        uVar18 = uVar36;
        do {
          uVar39 = *puVar27;
          uVar34 = uVar39 & 0xffff7f7f7f7f7f7f;
          uVar4 = (unsigned int)uVar39 & 0x7f;
          uVar5 = (unsigned int)(uVar34 >> 8) & 0xff;
          uVar6 = (unsigned int)(uVar34 >> 0x18) & 0xff;
          uVar7 = (unsigned int)(uVar34 >> 0x10) & 0xff;
          uVar9 = (unsigned int)(uVar34 >> 0x20);
          uVar8 = uVar9 & 0xff;
          bVar10 = iVar17 == 0;
          uVar9 = uVar9 >> 8 & 0xff;
          uVar29 = puVar27[-(iVar26 >> 0x1f & 1U)] & 0xffff7f7f7f7f7f7f;
          uVar34 = (unsigned __int64)
                   CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(uVar4 + 0x83176808),
                                                                *(unsigned char *)(uVar5 + 0x83176808))
                                                       ,*(unsigned char *)(uVar7 + 0x83176808)),
                                              *(unsigned char *)(uVar6 + 0x83176808)),
                                     *(unsigned char *)(uVar8 + 0x83176808)),
                            *(unsigned char *)(uVar9 + 0x83176808)) &
                   *(unsigned __int64 *)
                    (((int)(((unsigned __int64)uVar21 - 1 & 0xffffffff) << 1) + (unsigned int)bVar10) * 8 +
                    -0x7ce89798);
          uVar35 = *(unsigned __int64 *)((int)puVar27 - (int)(uVar41 << 3)) & 0xffff7f7f7f7f7f7f;
          bVar14 = (unsigned char)(uVar34 >> 0x20);
          bVar15 = (unsigned char)(uVar34 >> 0x28);
          bVar11 = (unsigned char)(uVar34 >> 8);
          bVar12 = (unsigned char)(uVar34 >> 0x10);
          bVar13 = (unsigned char)(uVar34 >> 0x18);
          if ((uVar39 >> 0x30 & 0x40) == 0) {
            iVar2 = *(int *)(param_2 + 0x15c);
            bVar30 = 0xff;
            bVar31 = 0xff;
            iVar23 = (int)uVar25 + iVar2;
            bVar32 = 0xff;
            bVar33 = 0xff;
            iVar3 = *(int *)((int)uVar25 + iVar2);
            bVar40 = 0xff;
            bVar38 = 0xff;
            if (iVar3 != 0x4000) {
              if ((uVar21 == 0) && (*(int *)(iStack_e8 + iVar2) == iVar3)) {
                bVar30 = *(unsigned char *)(((unsigned int)(uVar35 >> 0x18) & 0xff) + 0x83176968) |
                         *(unsigned char *)(uVar9 + 0x83176918);
              }
              if ((!bVar10) && (*(int *)(iVar23 + -4) == iVar3)) {
                bVar30 = bVar30 & (*(unsigned char *)(((unsigned int)(uVar29 >> 0x20) & 0xff) + 0x831768c8) |
                                  *(unsigned char *)(uVar9 + 0x83176878));
              }
            }
            iVar23 = *(int *)(iVar23 + 4);
            if (iVar23 != 0x4000) {
              if ((uVar21 == 0) && (*(int *)(iStack_e8 + iVar2 + 4) == iVar23)) {
                bVar31 = *(unsigned char *)(((unsigned int)(uVar35 >> 0x10) & 0xff) + 0x83176968) |
                         *(unsigned char *)(uVar8 + 0x83176918);
              }
              if (iVar3 == iVar23) {
                bVar31 = bVar31 & (*(unsigned char *)(uVar9 + 0x831768c8) | *(unsigned char *)(uVar8 + 0x83176878));
              }
            }
            piVar24 = (int *)(iStack_e0 + iVar2);
            iVar2 = *piVar24;
            if (iVar2 != 0x4000) {
              if (iVar3 == iVar2) {
                bVar32 = *(unsigned char *)(uVar9 + 0x83176968) | *(unsigned char *)(uVar6 + 0x83176918);
              }
              if ((!bVar10) && (piVar24[-1] == iVar2)) {
                bVar32 = bVar32 & (*(unsigned char *)(((unsigned int)(uVar29 >> 0x10) & 0xff) + 0x831768c8) |
                                  *(unsigned char *)(uVar6 + 0x83176878));
              }
            }
            iVar3 = piVar24[1];
            if (iVar3 != 0x4000) {
              if (iVar23 == iVar3) {
                bVar33 = *(unsigned char *)(uVar8 + 0x83176968) | *(unsigned char *)(uVar7 + 0x83176918);
              }
              if (iVar2 == iVar3) {
                bVar33 = bVar33 & (*(unsigned char *)(uVar6 + 0x831768c8) | *(unsigned char *)(uVar7 + 0x83176878));
              }
            }
            piVar24 = (int *)(iStack_e4 + *(int *)(param_2 + 0x160));
            iVar2 = *piVar24;
            if (iVar2 != 0x4000) {
              if (uVar21 == 0) {
                if (*(int *)((iStack_ec - uVar37) * 4 + *(int *)(param_2 + 0x160)) == iVar2) {
                  bVar40 = *(unsigned char *)(((unsigned int)(uVar35 >> 8) & 0xff) + 0x83176968) |
                           *(unsigned char *)(uVar5 + 0x83176918);
                  bVar38 = *(unsigned char *)(((unsigned int)uVar35 & 0xff) + 0x83176968) |
                           *(unsigned char *)(uVar4 + 0x83176918);
                }
              }
              if ((!bVar10) && (piVar24[-1] == iVar2)) {
                bVar40 = bVar40 & (*(unsigned char *)(((unsigned int)(uVar29 >> 8) & 0xff) + 0x831768c8) |
                                  *(unsigned char *)(uVar5 + 0x83176878));
                bVar38 = bVar38 & (*(unsigned char *)(((unsigned int)uVar29 & 0xff) + 0x831768c8) |
                                  *(unsigned char *)(uVar4 + 0x83176878));
              }
            }
            uVar43 = (unsigned __int64)uStack_c4;
            uVar16 = (unsigned __int64)uStack_cc;
            *pbVar28 = (unsigned char)uVar34 & bVar30;
            uVar36 = (unsigned __int64)uVar37;
            pbVar28[1] = bVar11 & bVar31;
            pbVar28[5] = bVar15 & bVar38;
            pbVar28[2] = bVar12 & bVar32;
            pbVar28[3] = bVar13 & bVar33;
            pbVar28[4] = bVar14 & bVar40;
          }
          else {
            *pbVar28 = (unsigned char)uVar34;
            pbVar28[1] = bVar11;
            pbVar28[2] = bVar12;
            pbVar28[3] = bVar13;
            pbVar28[4] = bVar14;
            pbVar28[5] = bVar15;
          }
          iVar17 = iVar17 + 1;
          iVar26 = iVar26 + -1;
          iStack_ec = iStack_ec + 1;
          iStack_e4 = iStack_e4 + 4;
          iStack_e0 = iStack_e0 + 8;
          iStack_e8 = iStack_e8 + 8;
          uVar25 = uVar25 + 8;
          pbVar28 = pbVar28 + 6;
          puVar27 = puVar27 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar39 = (unsigned __int64)uVar20;
      }
      lVar19 = uVar36 * 8;
      if (uStack_d0 != 0) {
        uVar39 = lVar19 + uVar39 & 0xffffffff;
      }
      uStack_d0 = uStack_d0 + 1;
      uStack_cc = (int)uVar16 + 0x200;
      iStack_c8 = iStack_c8 + 4;
      uStack_c4 = (int)uVar43 + 0x100;
      if (param_5 <= uStack_d0) break;
      uVar25 = (unsigned __int64)(unsigned int)((int)lVar19 + iVar42);
      uVar18 = (unsigned __int64)(unsigned int)((int)lVar19 + iVar22);
      uVar43 = (unsigned __int64)uStack_c4;
      uVar16 = (unsigned __int64)uStack_cc;
    }
  }
  return;
}

