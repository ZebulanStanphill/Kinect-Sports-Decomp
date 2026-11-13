#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT41(h,l) ((unsigned __int64)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT51(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int uStack_c4;
extern unsigned int uStack_e0;


void fn_82C781F0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned __int64 uVar13;
  int iVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  int iVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  unsigned char bVar24;
  int iVar22;
  int *piVar23;
  int iVar25;
  unsigned __int64 *puVar26;
  int iVar27;
  unsigned char *pbVar28;
  unsigned __int64 uVar29;
  unsigned char bVar30;
  unsigned char bVar31;
  unsigned char bVar32;
  unsigned char bVar33;
  unsigned __int64 uVar34;
  unsigned int uVar36;
  unsigned char bVar37;
  unsigned __int64 uVar35;
  unsigned __int64 uVar38;
  unsigned __int64 uVar39;
  unsigned char bVar40;
  unsigned __int64 uVar41;
  unsigned __int64 uVar42;
  unsigned int uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  unsigned int uStack_c4;
  
  uVar1 = *(unsigned short *)(param_2 + 0x32);
  uVar38 = 0;
  uVar35 = (unsigned __int64)(uVar1 >> 1);
  iVar19 = (uVar1 & 0x7ffffffe) << 1;
  uVar36 = (unsigned int)(uVar1 >> 1);
  iStack_dc = uVar36 * param_4;
  uVar41 = (__int64)iVar19 * (__int64)(int)param_4;
  puVar26 = (unsigned __int64 *)(*(int *)(param_2 + 0x520) + iStack_dc * 8);
  pbVar28 = (unsigned char *)(*(int *)(param_2 + 0x524) + iStack_dc * 6);
  if (param_4 != 0) {
    uVar38 = (__int64)(int)(param_4 - 1) * (__int64)iVar19 + uVar35 * 2;
  }
  if (param_4 < param_5) {
    uVar18 = (uVar41 + uVar1 & 0x3fffffff) << 2;
    uVar38 = (uVar38 & 0x3fffffff) << 2;
    uVar41 = (uVar41 & 0x3fffffff) << 2;
    lVar20 = uVar35 << 3;
    uStack_c4 = param_4;
    while( true ) {
      iVar14 = (int)uVar41;
      iStack_d4 = (int)uVar18;
      uVar18 = (unsigned __int64)(uStack_c4 == 0);
      uVar15 = (unsigned int)(uStack_c4 == 0);
      uVar16 = uVar15;
      iVar19 = iStack_d4;
      if (uVar35 != 0) {
        uVar13 = uVar18 - 1 & uVar35;
        uStack_e0 = (unsigned int)uVar38;
        iStack_d8 = iStack_dc << 2;
        iVar25 = (int)lVar20;
        iVar14 = iVar25 + iVar14;
        iVar19 = iVar25 + iStack_d4;
        uVar17 = iVar25 + uStack_e0;
        iVar25 = 0;
        uVar42 = uVar35;
        while( true ) {
          uVar21 = *puVar26;
          uVar39 = uVar21 & 0xffff7f7f7f7f7f7f;
          uVar16 = (unsigned int)uVar21 & 0x7f;
          uVar4 = (unsigned int)(uVar39 >> 8) & 0xff;
          uVar5 = (unsigned int)(uVar39 >> 0x10) & 0xff;
          uVar8 = (unsigned int)(uVar39 >> 0x20);
          uVar6 = uVar8 & 0xff;
          uVar7 = (unsigned int)(uVar39 >> 0x18) & 0xff;
          lVar20 = (__int64)(iVar25 >> 0x1f) + 1;
          uVar8 = uVar8 >> 8 & 0xff;
          uVar29 = puVar26[-(iVar25 >> 0x1f & 1U)] & 0xffff7f7f7f7f7f7f;
          uVar39 = (unsigned __int64)
                   CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(uVar16 + 0x83176808)
                                                                ,*(unsigned char *)(uVar4 + 0x83176808)
                                                               ),*(unsigned char *)(uVar5 + 0x83176808)
                                                      ),*(unsigned char *)(uVar7 + 0x83176808)),
                                     *(unsigned char *)(uVar6 + 0x83176808)),
                            *(unsigned char *)(uVar8 + 0x83176808)) &
                   *(unsigned __int64 *)((int)((uVar18 * 2 + lVar20 & 0xffffffff) << 3) + -0x7ce897a8);
          uVar34 = *(unsigned __int64 *)((int)puVar26 - (int)(uVar13 << 3)) & 0xffff7f7f7f7f7f7f;
          bVar9 = (unsigned char)(uVar39 >> 0x28);
          bVar24 = (unsigned char)(uVar39 >> 0x20);
          bVar10 = (unsigned char)(uVar39 >> 8);
          bVar11 = (unsigned char)(uVar39 >> 0x10);
          bVar12 = (unsigned char)(uVar39 >> 0x18);
          if (((uVar21 >> 0x30 & 0x40) == 0) || (**(int **)(param_2 + 0x15c) != 0x4000)) {
            iVar2 = *(int *)(param_2 + 0x15c);
            bVar30 = 0xff;
            bVar31 = 0xff;
            iVar22 = (int)uVar41 + iVar2;
            bVar32 = 0xff;
            bVar33 = 0xff;
            iVar3 = *(int *)((int)uVar41 + iVar2);
            bVar40 = 0xff;
            bVar37 = 0xff;
            iVar27 = (int)lVar20;
            if (iVar3 != 0x4000) {
              if (((int)uVar18 == 0) && (*(int *)((unsigned int)uVar38 + iVar2) == iVar3)) {
                bVar30 = *(unsigned char *)(((unsigned int)(uVar34 >> 0x18) & 0xff) + 0x831767b8) |
                         *(unsigned char *)(uVar8 + 0x83176778);
              }
              if ((iVar27 == 0) && (*(int *)(iVar22 + -4) == iVar3)) {
                uVar18 = (unsigned __int64)uVar15;
                bVar30 = bVar30 & (*(unsigned char *)(((unsigned int)(uVar29 >> 0x20) & 0xff) + 0x83176738) |
                                  *(unsigned char *)(uVar8 + 0x831766f8));
              }
            }
            iVar22 = *(int *)(iVar22 + 4);
            if (iVar22 != 0x4000) {
              if (((int)uVar18 == 0) && (*(int *)(uStack_e0 + iVar2 + 4) == iVar22)) {
                bVar31 = *(unsigned char *)(((unsigned int)(uVar34 >> 0x10) & 0xff) + 0x831767b8) |
                         *(unsigned char *)(uVar6 + 0x83176778);
              }
              if (iVar3 == iVar22) {
                bVar31 = bVar31 & (*(unsigned char *)(uVar8 + 0x83176738) | *(unsigned char *)(uVar6 + 0x831766f8));
              }
            }
            piVar23 = (int *)(iStack_d4 + iVar2);
            iVar2 = *piVar23;
            if (iVar2 != 0x4000) {
              if (iVar3 == iVar2) {
                bVar32 = *(unsigned char *)(uVar8 + 0x831767b8) | *(unsigned char *)(uVar7 + 0x83176778);
              }
              if ((iVar27 == 0) && (piVar23[-1] == iVar2)) {
                bVar32 = bVar32 & (*(unsigned char *)(((unsigned int)(uVar29 >> 0x10) & 0xff) + 0x83176738) |
                                  *(unsigned char *)(uVar7 + 0x831766f8));
              }
            }
            iVar3 = piVar23[1];
            if (iVar3 != 0x4000) {
              if (iVar22 == iVar3) {
                bVar33 = *(unsigned char *)(uVar6 + 0x831767b8) | *(unsigned char *)(uVar5 + 0x83176778);
              }
              if (iVar2 == iVar3) {
                bVar33 = bVar33 & (*(unsigned char *)(uVar6 + 0x83176738) | *(unsigned char *)(uVar5 + 0x831766f8));
              }
            }
            piVar23 = (int *)(iStack_d8 + *(int *)(param_2 + 0x160));
            iVar2 = *piVar23;
            if (iVar2 != 0x4000) {
              if ((int)uVar18 == 0) {
                if (*(int *)((iStack_dc - uVar36) * 4 + *(int *)(param_2 + 0x160)) == iVar2) {
                  bVar40 = *(unsigned char *)(((unsigned int)(uVar34 >> 8) & 0xff) + 0x831767b8) |
                           *(unsigned char *)(uVar4 + 0x83176778);
                  bVar37 = *(unsigned char *)(((unsigned int)uVar34 & 0xff) + 0x831767b8) |
                           *(unsigned char *)(uVar16 + 0x83176778);
                }
              }
              if ((iVar27 == 0) && (piVar23[-1] == iVar2)) {
                bVar40 = bVar40 & (*(unsigned char *)(((unsigned int)(uVar29 >> 8) & 0xff) + 0x83176738) |
                                  *(unsigned char *)(uVar4 + 0x831766f8));
                bVar37 = bVar37 & (*(unsigned char *)(((unsigned int)uVar29 & 0xff) + 0x83176738) |
                                  *(unsigned char *)(uVar16 + 0x831766f8));
              }
            }
            *pbVar28 = (unsigned char)uVar39 & bVar30;
            uVar35 = (unsigned __int64)uVar36;
            pbVar28[3] = bVar12 & bVar33;
            pbVar28[5] = bVar9 & bVar37;
            pbVar28[1] = bVar10 & bVar31;
            pbVar28[2] = bVar11 & bVar32;
            pbVar28[4] = bVar24 & bVar40;
          }
          else {
            *pbVar28 = (unsigned char)uVar39;
            pbVar28[1] = bVar10;
            pbVar28[2] = bVar11;
            pbVar28[3] = bVar12;
            pbVar28[4] = bVar24;
            pbVar28[5] = bVar9;
            uStack_e0 = (unsigned int)uVar38;
          }
          uVar16 = (unsigned int)uVar18;
          uStack_e0 = uStack_e0 + 8;
          iVar25 = iVar25 + -1;
          iStack_dc = iStack_dc + 1;
          iStack_d8 = iStack_d8 + 4;
          iStack_d4 = iStack_d4 + 8;
          uVar41 = uVar41 + 8;
          pbVar28 = pbVar28 + 6;
          puVar26 = puVar26 + 1;
          uVar42 = uVar42 - 1;
          if (uVar42 == 0) break;
          uVar38 = (unsigned __int64)uStack_e0;
        }
        uVar38 = (unsigned __int64)uVar17;
      }
      lVar20 = uVar35 * 8;
      if (uVar16 == 0) {
        uVar38 = lVar20 + uVar38 & 0xffffffff;
      }
      uStack_c4 = uStack_c4 + 1;
      if (param_5 <= uStack_c4) break;
      uVar18 = (unsigned __int64)(unsigned int)((int)lVar20 + iVar19);
      uVar41 = (unsigned __int64)(unsigned int)((int)lVar20 + iVar14);
    }
  }
  return;
}

