extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_124;
extern unsigned int iStack_138;
extern unsigned int iStack_170;
extern unsigned int iStack_180;
extern unsigned int iStack_194;
extern unsigned int iStack_19c;
extern unsigned int iStack_1a0;
extern unsigned int iStack_1a8;
extern unsigned int iStack_e8;
extern unsigned int iStack_f8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_8200D8C4;
extern unsigned int uStack_110;
extern unsigned int uStack_160;


void fn_82F051F8(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned char *pbVar29;
  unsigned char *pbVar30;
  unsigned char *pbVar31;
  unsigned char *pbVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  int iVar38;
  unsigned int uVar39;
  unsigned int uVar40;
  unsigned int uVar41;
  unsigned int uVar42;
  unsigned int uVar43;
  unsigned int uVar44;
  int iVar46;
  unsigned __int64 uVar45;
  unsigned int uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  unsigned int uVar51;
  unsigned int uVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  unsigned int uVar56;
  unsigned int uVar57;
  unsigned int uVar58;
  int iVar59;
  unsigned int uVar60;
  unsigned int uVar61;
  unsigned int uVar62;
  int iVar63;
  unsigned int uVar64;
  unsigned int uVar65;
  int iVar66;
  unsigned int uVar67;
  unsigned int uVar68;
  unsigned int uVar69;
  unsigned int uVar70;
  __int64 lVar71;
  int iStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  int iStack_194;
  int iStack_180;
  int iStack_170;
  unsigned int uStack_160;
  int iStack_138;
  int iStack_124;
  unsigned int uStack_110;
  int iStack_108;
  int iStack_104;
  int iStack_f8;
  int iStack_e8;
  
  uVar16 = *(unsigned int *)(param_1 + 0x31c);
  iVar54 = *(int *)(param_1 + 0x1abc);
  iVar37 = uVar16 * 4;
  uStack_110 = (int)uVar16 >> 4;
  iVar53 = iVar37 + iVar54;
  if (uStack_110 != 0) {
    iVar38 = uStack_110 * 0x10;
    iVar66 = 0;
    iVar55 = 0;
    *(unsigned int *)(param_1 + 0x1c28) = 0;
    iVar63 = 0;
    iVar59 = 0;
    uVar47 = 0;
    iVar48 = 0;
    iVar49 = 0;
    iVar50 = 0;
    iVar46 = 2;
    if (2 < iVar38 + -2) {
      if (1 < iVar38 + -4) {
        iVar63 = 0;
        iVar59 = 0;
        iVar55 = 0;
        iVar46 = 2;
        iVar66 = 0;
        do {
          bVar1 = *(unsigned char *)(iVar46 + iVar54);
          pbVar29 = (unsigned char *)(iVar53 + -2 + iVar46);
          pbVar30 = (unsigned char *)(iVar53 + 2 + iVar46);
          bVar2 = *(unsigned char *)(iVar54 + 1 + iVar46);
          pbVar31 = (unsigned char *)(iVar53 + -1 + iVar46);
          pbVar32 = (unsigned char *)(iVar53 + 3 + iVar46);
          iVar46 = iVar46 + 2;
          iVar66 = iVar66 + (-(unsigned int)(bVar1 < 0x40) & 1) + (-(unsigned int)(0xc0 < bVar1) & 1);
          iVar63 = ((int)(((unsigned int)bVar1 - (unsigned int)*pbVar29) - 1 ^ (unsigned int)bVar1 - (unsigned int)*pbVar30) >> 0xf
                   & 1U) + iVar63;
          iVar59 = ((int)(((unsigned int)bVar2 - (unsigned int)*pbVar31) - 1 ^ (unsigned int)bVar2 - (unsigned int)*pbVar32) >> 0xf
                   & 1U) + iVar59;
          iVar55 = iVar55 + (-(unsigned int)(bVar2 < 0x40) & 1) + (-(unsigned int)(0xc0 < bVar2) & 1);
        } while (iVar46 < iVar38 + -3);
      }
      if (iVar46 < iVar38 + -2) {
        bVar1 = *(unsigned char *)(iVar46 + iVar54);
        uVar47 = (int)(((unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar46 + iVar53 + -2)) - 1 ^
                      (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar46 + iVar53 + 2)) >> 0xf & 1;
        iVar49 = (-(unsigned int)(bVar1 < 0x40) & 1) + (-(unsigned int)(0xc0 < bVar1) & 1);
      }
      iVar50 = iVar55 + iVar66 + iVar49;
      iVar48 = iVar59 + iVar63 + uVar47;
    }
    if (((int)(uStack_110 << 2) < iVar50) && (iVar48 < (int)(uStack_110 * 5))) {
      iStack_104 = uVar16 * 3 + iVar54;
      iStack_19c = 0;
      iStack_1a0 = 0;
      iStack_170 = 0;
      iStack_f8 = uVar16 + iVar54 + 8;
      iStack_180 = 0;
      iStack_108 = uVar16 * 7 + iVar54 + 8;
      iVar54 = 0;
      iVar53 = 0;
      iVar38 = iStack_104 + 8;
      iStack_194 = 0;
      if (*(int *)(param_1 + 0x1c24) == 3) {
        if (0 < (int)uStack_110) {
          iStack_194 = 0;
          iStack_e8 = iStack_104 + (uVar16 & 0x7fffffff) * -2 + 2;
          iStack_124 = iVar37 + iStack_104 + 2;
          iStack_138 = (3 - uVar16) * 3 + iStack_104;
          do {
            lVar71 = 2;
            iVar37 = 0;
            do {
              iVar63 = iVar37 + iVar38;
              bVar1 = *(unsigned char *)(iVar37 + iVar38 + 1);
              bVar2 = *(unsigned char *)(iVar63 + (iStack_138 - iVar38) + -1);
              bVar3 = *(unsigned char *)(iVar63 + (iStack_104 - iVar38));
              bVar4 = *(unsigned char *)(iStack_104 + 1 + iVar37);
              bVar5 = *(unsigned char *)(iVar37 + iVar38);
              bVar6 = *(unsigned char *)(iVar63 + (iStack_138 - iVar38) + -9);
              uVar60 = (unsigned int)bVar5 - (unsigned int)*(unsigned char *)(iVar63 + (iStack_108 - iVar38));
              uVar56 = (unsigned int)bVar3 - (unsigned int)*(unsigned char *)(iVar63 + (iStack_124 - iVar38) + -2);
              uVar16 = (int)uVar60 >> 0x1f;
              uVar47 = (int)uVar56 >> 0x1f;
              uVar17 = (int)((unsigned int)bVar2 - (unsigned int)bVar5) >> 0x1f;
              uVar18 = (int)((unsigned int)bVar6 - (unsigned int)bVar3) >> 0x1f;
              uVar39 = (unsigned int)bVar4;
              uVar40 = (unsigned int)bVar1;
              uVar51 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar37 + iStack_108 + 1);
              uVar42 = (unsigned int)bVar4 - (unsigned int)*(unsigned char *)(iStack_124 + -1 + iVar37);
              bVar7 = *(unsigned char *)(iStack_138 + iVar37);
              uVar19 = (int)uVar42 >> 0x1f;
              uVar20 = (int)uVar51 >> 0x1f;
              uVar21 = (int)((unsigned int)bVar7 - (unsigned int)bVar1) >> 0x1f;
              bVar8 = *(unsigned char *)(iStack_138 + -8 + iVar37);
              uVar44 = (unsigned int)bVar8 - (unsigned int)bVar4;
              bVar4 = *(unsigned char *)(iStack_104 + 2 + iVar37);
              uVar22 = (int)uVar44 >> 0x1f;
              bVar9 = *(unsigned char *)(iVar38 + 2 + iVar37);
              uVar64 = (unsigned int)bVar4 - (unsigned int)*(unsigned char *)(iStack_124 + iVar37);
              uVar23 = (int)uVar64 >> 0x1f;
              uVar67 = (unsigned int)bVar9 - (unsigned int)*(unsigned char *)(iStack_108 + 2 + iVar37);
              bVar10 = *(unsigned char *)(iStack_138 + 1 + iVar37);
              uVar24 = (int)uVar67 >> 0x1f;
              bVar11 = *(unsigned char *)(iStack_138 + -7 + iVar37);
              uVar52 = (unsigned int)bVar11 - (unsigned int)bVar4;
              uVar25 = (int)((unsigned int)bVar10 - (unsigned int)bVar9) >> 0x1f;
              uStack_160 = (unsigned int)*(unsigned char *)(iStack_124 + 1 + iVar37);
              uVar26 = (int)uVar52 >> 0x1f;
              bVar12 = *(unsigned char *)(iStack_104 + 3 + iVar37);
              uVar43 = (unsigned int)bVar12;
              bVar13 = *(unsigned char *)(iVar38 + 3 + iVar37);
              uVar41 = (unsigned int)bVar13;
              uVar61 = uVar41 - *(unsigned char *)(iStack_108 + 3 + iVar37);
              uVar27 = (int)(uVar43 - uStack_160) >> 0x1f;
              uVar28 = (int)uVar61 >> 0x1f;
              uVar70 = (unsigned int)bVar11;
              iVar53 = ((uVar43 - uStack_160 ^ uVar27) - uVar27) + ((uVar61 ^ uVar28) - uVar28) +
                       ((uVar64 ^ uVar23) - uVar23) + ((uVar67 ^ uVar24) - uVar24) +
                       ((uVar42 ^ uVar19) - uVar19) + ((uVar51 ^ uVar20) - uVar20) +
                       ((uVar60 ^ uVar16) - uVar16) + ((uVar56 ^ uVar47) - uVar47) + iVar53;
              iStack_194 = iStack_194 + (unsigned int)bVar5 + (unsigned int)bVar3 + uVar40 + uVar39 + (unsigned int)bVar9 +
                           (unsigned int)bVar4 + uVar41 + uVar43;
              bVar11 = *(unsigned char *)(iStack_138 + 2 + iVar37);
              bVar14 = *(unsigned char *)(iStack_138 + -6 + iVar37);
              iVar54 = (unsigned int)bVar13 * (unsigned int)bVar13 + (unsigned int)bVar12 * (unsigned int)bVar12 +
                       (unsigned int)bVar9 * (unsigned int)bVar9 + (unsigned int)bVar4 * (unsigned int)bVar4 +
                       uVar40 * uVar40 + uVar39 * uVar39 +
                       (unsigned int)bVar5 * (unsigned int)bVar5 + (unsigned int)bVar3 * (unsigned int)bVar3 + iVar54;
              uVar16 = (int)(bVar11 - uVar41) >> 0x1f;
              uVar47 = (int)(bVar14 - uVar43) >> 0x1f;
              iStack_19c = iStack_19c + (unsigned int)*(unsigned char *)(iVar63 + (iStack_f8 - iVar38)) +
                           (unsigned int)*(unsigned char *)(iVar63 + (iStack_e8 - iVar38) + -2) +
                           (unsigned int)*(unsigned char *)(iStack_f8 + 1 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_e8 + -1 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_f8 + 2 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_e8 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_f8 + 3 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_e8 + 1 + iVar37);
              iStack_180 = ((bVar11 - uVar41 ^ uVar16) - uVar16) +
                           ((bVar14 - uVar43 ^ uVar47) - uVar47) +
                           (((unsigned int)bVar10 - (unsigned int)bVar9 ^ uVar25) - uVar25) +
                           ((uVar52 ^ uVar26) - uVar26) +
                           (((unsigned int)bVar7 - (unsigned int)bVar1 ^ uVar21) - uVar21) +
                           ((uVar44 ^ uVar22) - uVar22) +
                           (((unsigned int)bVar2 - (unsigned int)bVar5 ^ uVar17) - uVar17) +
                           (((unsigned int)bVar6 - (unsigned int)bVar3 ^ uVar18) - uVar18) + iStack_180;
              iStack_1a0 = iStack_1a0 + (unsigned int)bVar2 + (unsigned int)bVar6 + (unsigned int)bVar7 + (unsigned int)bVar8 +
                           (unsigned int)bVar10 + uVar70 + (unsigned int)bVar11 + (unsigned int)bVar14;
              iStack_170 = (unsigned int)bVar11 * (unsigned int)bVar11 + (unsigned int)bVar14 * (unsigned int)bVar14 +
                           (unsigned int)bVar10 * (unsigned int)bVar10 + uVar70 * uVar70 +
                           (unsigned int)bVar7 * (unsigned int)bVar7 + (unsigned int)bVar8 * (unsigned int)bVar8 +
                           (unsigned int)bVar2 * (unsigned int)bVar2 + (unsigned int)bVar6 * (unsigned int)bVar6 + iStack_170;
              iVar37 = iVar37 + 4;
              lVar71 = lVar71 + -1;
            } while (lVar71 != 0);
            iStack_138 = iStack_138 + 0x10;
            iStack_f8 = iStack_f8 + 0x10;
            iStack_104 = iStack_104 + 0x10;
            uVar45 = (unsigned __int64)uStack_110;
            iStack_124 = iStack_124 + 0x10;
            iStack_e8 = iStack_e8 + 0x10;
            uStack_110 = (unsigned int)(uVar45 - 1);
            iStack_108 = iStack_108 + 0x10;
            iVar38 = iVar38 + 0x10;
          } while (uVar45 - 1 != 0);
        }
      }
      else if (*(int *)(param_1 + 0x1c24) == 2) {
        if (0 < (int)uStack_110) {
          iStack_124 = iStack_104 + (uVar16 & 0x7fffffff) * -2 + 2;
          iStack_138 = iVar37 + iStack_104 + 2;
          iStack_1a8 = (3 - uVar16) * 3 + iStack_104;
          do {
            lVar71 = 2;
            iVar37 = 0;
            do {
              iVar63 = iVar37 + iVar38;
              bVar1 = *(unsigned char *)(iVar37 + iVar38);
              bVar2 = *(unsigned char *)(iStack_1a8 + iVar37);
              bVar3 = *(unsigned char *)(iVar63 + (iStack_1a8 - iVar38) + -1);
              bVar4 = *(unsigned char *)(iStack_104 + 1 + iVar37);
              bVar5 = *(unsigned char *)(iVar63 + (iStack_1a8 - iVar38) + -9);
              uVar51 = (unsigned int)bVar4 - (unsigned int)*(unsigned char *)(iStack_138 + -1 + iVar37);
              bVar6 = *(unsigned char *)(iVar37 + iVar38 + 1);
              uVar67 = (unsigned int)bVar6 - (unsigned int)*(unsigned char *)(iVar37 + iStack_108 + 1);
              uVar43 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar63 + (iStack_108 - iVar38));
              uVar16 = (int)uVar43 >> 0x1f;
              bVar7 = *(unsigned char *)(iVar63 + (iStack_104 - iVar38));
              uVar60 = (unsigned int)bVar7 - (unsigned int)*(unsigned char *)(iVar63 + (iStack_138 - iVar38) + -2);
              bVar8 = *(unsigned char *)(iStack_1a8 + -8 + iVar37);
              uVar47 = (int)uVar60 >> 0x1f;
              uVar17 = (int)((unsigned int)bVar3 - (unsigned int)bVar1) >> 0x1f;
              uVar18 = (int)((unsigned int)bVar5 - (unsigned int)bVar7) >> 0x1f;
              uVar19 = (int)uVar51 >> 0x1f;
              uVar20 = (int)uVar67 >> 0x1f;
              uVar41 = (unsigned int)bVar4;
              uVar21 = (int)((unsigned int)bVar2 - (unsigned int)bVar6) >> 0x1f;
              bVar4 = *(unsigned char *)(iStack_1a8 + 1 + iVar37);
              uVar22 = (int)(bVar8 - uVar41) >> 0x1f;
              bVar9 = *(unsigned char *)(iStack_1a8 + -7 + iVar37);
              bVar10 = *(unsigned char *)(iStack_104 + 2 + iVar37);
              uVar64 = (unsigned int)bVar10 - (unsigned int)*(unsigned char *)(iStack_138 + iVar37);
              uStack_160 = (unsigned int)*(unsigned char *)(iStack_108 + 2 + iVar37);
              bVar11 = *(unsigned char *)(iVar38 + 2 + iVar37);
              uVar52 = (unsigned int)bVar4 - (unsigned int)bVar11;
              uStack_160 = bVar11 - uStack_160;
              uVar23 = (int)uVar64 >> 0x1f;
              uVar24 = (int)uStack_160 >> 0x1f;
              uVar25 = (int)uVar52 >> 0x1f;
              uVar70 = (unsigned int)bVar9 - (unsigned int)bVar10;
              uVar26 = (int)uVar70 >> 0x1f;
              bVar12 = *(unsigned char *)(iVar38 + 3 + iVar37);
              uVar42 = (unsigned int)bVar12;
              bVar13 = *(unsigned char *)(iStack_1a8 + 2 + iVar37);
              uVar57 = uVar42 - *(unsigned char *)(iStack_108 + 3 + iVar37);
              bVar14 = *(unsigned char *)(iStack_1a8 + -6 + iVar37);
              bVar15 = *(unsigned char *)(iStack_104 + 3 + iVar37);
              uVar44 = (unsigned int)bVar15;
              uVar65 = uVar44 - *(unsigned char *)(iStack_138 + 1 + iVar37);
              uVar61 = bVar13 - uVar42;
              uVar27 = (int)uVar65 >> 0x1f;
              uVar56 = bVar14 - uVar44;
              uVar28 = (int)uVar57 >> 0x1f;
              uVar39 = (int)uVar61 >> 0x1f;
              uVar40 = (int)uVar56 >> 0x1f;
              iVar53 = ((uVar65 ^ uVar27) - uVar27) + ((uVar57 ^ uVar28) - uVar28) +
                       ((uVar64 ^ uVar23) - uVar23) + ((uStack_160 ^ uVar24) - uVar24) +
                       ((uVar51 ^ uVar19) - uVar19) + ((uVar67 ^ uVar20) - uVar20) +
                       ((uVar43 ^ uVar16) - uVar16) + ((uVar60 ^ uVar47) - uVar47) + iVar53;
              iStack_170 = (unsigned int)bVar13 * (unsigned int)bVar13 + (unsigned int)bVar14 * (unsigned int)bVar14 +
                           (unsigned int)bVar4 * (unsigned int)bVar4 + (unsigned int)bVar9 * (unsigned int)bVar9 +
                           (unsigned int)bVar2 * (unsigned int)bVar2 + (unsigned int)bVar8 * (unsigned int)bVar8 +
                           (unsigned int)bVar3 * (unsigned int)bVar3 + (unsigned int)bVar5 * (unsigned int)bVar5 + iStack_170;
              iStack_1a0 = iStack_1a0 + (unsigned int)bVar3 + (unsigned int)bVar5 + (unsigned int)bVar2 + (unsigned int)bVar8 +
                           (unsigned int)bVar4 + (unsigned int)bVar9 + (unsigned int)bVar13 + (unsigned int)bVar14;
              iStack_194 = iStack_194 + (unsigned int)bVar1 + (unsigned int)bVar7 + (unsigned int)bVar6 + uVar41 +
                           (unsigned int)bVar11 + (unsigned int)bVar10 + uVar42 + uVar44;
              iVar54 = (unsigned int)bVar12 * (unsigned int)bVar12 + (unsigned int)bVar15 * (unsigned int)bVar15 +
                       (unsigned int)bVar11 * (unsigned int)bVar11 + (unsigned int)bVar10 * (unsigned int)bVar10 +
                       (unsigned int)bVar6 * (unsigned int)bVar6 + uVar41 * uVar41 +
                       (unsigned int)bVar1 * (unsigned int)bVar1 + (unsigned int)bVar7 * (unsigned int)bVar7 + iVar54;
              iStack_180 = ((uVar61 ^ uVar39) - uVar39) + ((uVar56 ^ uVar40) - uVar40) +
                           ((uVar52 ^ uVar25) - uVar25) + ((uVar70 ^ uVar26) - uVar26) +
                           (((unsigned int)bVar2 - (unsigned int)bVar6 ^ uVar21) - uVar21) +
                           ((bVar8 - uVar41 ^ uVar22) - uVar22) +
                           (((unsigned int)bVar3 - (unsigned int)bVar1 ^ uVar17) - uVar17) +
                           (((unsigned int)bVar5 - (unsigned int)bVar7 ^ uVar18) - uVar18) + iStack_180;
              iStack_19c = iStack_19c + (unsigned int)*(unsigned char *)(iVar63 + (iStack_f8 - iVar38)) +
                           (unsigned int)*(unsigned char *)(iVar63 + (iStack_124 - iVar38) + -2) +
                           (unsigned int)*(unsigned char *)(iStack_f8 + 1 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_124 + -1 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_f8 + 2 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_124 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_f8 + 3 + iVar37) +
                           (unsigned int)*(unsigned char *)(iStack_124 + 1 + iVar37);
              iVar37 = iVar37 + 4;
              lVar71 = lVar71 + -1;
            } while (lVar71 != 0);
            uVar45 = (unsigned __int64)uStack_110;
            iStack_f8 = iStack_f8 + 0x10;
            iStack_138 = iStack_138 + 0x10;
            iStack_1a8 = iStack_1a8 + 0x10;
            iStack_124 = iStack_124 + 0x10;
            uStack_110 = (unsigned int)(uVar45 - 1);
            iStack_104 = iStack_104 + 0x10;
            iVar38 = iVar38 + 0x10;
            iStack_108 = iStack_108 + 0x10;
          } while (uVar45 - 1 != 0);
        }
      }
      else if (0 < (int)uStack_110) {
        iVar63 = iVar37 + iStack_104 + 2;
        iVar37 = (3 - uVar16) * 3 + iStack_104;
        do {
          lVar71 = 2;
          iVar59 = 0;
          do {
            bVar1 = *(unsigned char *)(iVar59 + iVar38);
            iVar55 = iVar59 + iVar38;
            bVar2 = *(unsigned char *)(iVar37 + iVar59);
            bVar3 = *(unsigned char *)(iVar55 + (iVar37 - iVar38) + -1);
            bVar4 = *(unsigned char *)(iVar59 + iVar38 + 1);
            bVar5 = *(unsigned char *)(iVar55 + (iVar37 - iVar38) + -9);
            uVar61 = (unsigned int)bVar3 - (unsigned int)bVar1;
            uVar60 = (unsigned int)bVar2 - (unsigned int)bVar4;
            uVar64 = (unsigned int)bVar4 - (unsigned int)*(unsigned char *)(iVar59 + iStack_108 + 1);
            bVar6 = *(unsigned char *)(iStack_104 + 1 + iVar59);
            bVar7 = *(unsigned char *)(iVar55 + (iStack_104 - iVar38));
            uVar57 = (unsigned int)bVar7 - (unsigned int)*(unsigned char *)(iVar55 + (iVar63 - iVar38) + -2);
            uVar56 = (unsigned int)bVar6 - (unsigned int)*(unsigned char *)(iVar63 + -1 + iVar59);
            uVar68 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar55 + (iStack_108 - iVar38));
            uVar16 = (int)uVar68 >> 0x1f;
            uVar47 = (int)uVar57 >> 0x1f;
            uVar17 = (int)uVar61 >> 0x1f;
            bVar8 = *(unsigned char *)(iVar37 + -8 + iVar59);
            uVar18 = (int)((unsigned int)bVar5 - (unsigned int)bVar7) >> 0x1f;
            bVar9 = *(unsigned char *)(iVar38 + 2 + iVar59);
            uVar51 = (unsigned int)*(unsigned char *)(iStack_104 + 2 + iVar59);
            uVar19 = (int)uVar56 >> 0x1f;
            uVar20 = (int)uVar64 >> 0x1f;
            uVar52 = (unsigned int)bVar8 - (unsigned int)bVar6;
            uVar21 = (int)uVar60 >> 0x1f;
            uVar22 = (int)uVar52 >> 0x1f;
            bVar10 = *(unsigned char *)(iVar37 + 1 + iVar59);
            uVar41 = (unsigned int)bVar9 - (unsigned int)*(unsigned char *)(iStack_108 + 2 + iVar59);
            uVar62 = uVar51 - *(unsigned char *)(iVar63 + iVar59);
            uVar43 = (unsigned int)bVar10 - (unsigned int)bVar9;
            bVar11 = *(unsigned char *)(iVar37 + -7 + iVar59);
            uVar23 = (int)uVar41 >> 0x1f;
            uVar24 = (int)uVar62 >> 0x1f;
            uVar25 = (int)uVar43 >> 0x1f;
            uVar67 = bVar11 - uVar51;
            bVar12 = *(unsigned char *)(iVar38 + 3 + iVar59);
            uVar42 = (unsigned int)bVar12;
            uVar26 = (int)uVar67 >> 0x1f;
            bVar13 = *(unsigned char *)(iVar37 + 2 + iVar59);
            bVar14 = *(unsigned char *)(iStack_104 + 3 + iVar59);
            uVar44 = (unsigned int)bVar14;
            bVar15 = *(unsigned char *)(iVar37 + -6 + iVar59);
            uVar65 = uVar42 - *(unsigned char *)(iStack_108 + 3 + iVar59);
            uVar69 = uVar44 - *(unsigned char *)(iVar63 + 1 + iVar59);
            uVar58 = bVar13 - uVar42;
            uVar27 = (int)uVar65 >> 0x1f;
            uVar70 = bVar15 - uVar44;
            uVar28 = (int)uVar69 >> 0x1f;
            uVar39 = (int)uVar58 >> 0x1f;
            uVar40 = (int)uVar70 >> 0x1f;
            iVar53 = ((uVar65 ^ uVar27) - uVar27) + ((uVar69 ^ uVar28) - uVar28) +
                     ((uVar41 ^ uVar23) - uVar23) + ((uVar62 ^ uVar24) - uVar24) +
                     ((uVar56 ^ uVar19) - uVar19) + ((uVar64 ^ uVar20) - uVar20) +
                     ((uVar68 ^ uVar16) - uVar16) + ((uVar57 ^ uVar47) - uVar47) + iVar53;
            iStack_194 = iStack_194 + (unsigned int)bVar1 + (unsigned int)bVar7 + (unsigned int)bVar4 + (unsigned int)bVar6 +
                         (unsigned int)bVar9 + uVar51 + uVar42 + uVar44;
            iVar54 = (unsigned int)bVar12 * (unsigned int)bVar12 + (unsigned int)bVar14 * (unsigned int)bVar14 +
                     (unsigned int)bVar9 * (unsigned int)bVar9 + uVar51 * uVar51 +
                     (unsigned int)bVar4 * (unsigned int)bVar4 + (unsigned int)bVar6 * (unsigned int)bVar6 +
                     (unsigned int)bVar1 * (unsigned int)bVar1 + (unsigned int)bVar7 * (unsigned int)bVar7 + iVar54;
            iStack_1a0 = iStack_1a0 + (unsigned int)bVar3 + (unsigned int)bVar5 + (unsigned int)bVar2 + (unsigned int)bVar8 +
                         (unsigned int)bVar10 + (unsigned int)bVar11 + (unsigned int)bVar13 + (unsigned int)bVar15;
            iStack_170 = (unsigned int)bVar13 * (unsigned int)bVar13 + (unsigned int)bVar15 * (unsigned int)bVar15 +
                         (unsigned int)bVar10 * (unsigned int)bVar10 + (unsigned int)bVar11 * (unsigned int)bVar11 +
                         (unsigned int)bVar2 * (unsigned int)bVar2 + (unsigned int)bVar8 * (unsigned int)bVar8 +
                         (unsigned int)bVar3 * (unsigned int)bVar3 + (unsigned int)bVar5 * (unsigned int)bVar5 + iStack_170;
            iStack_180 = ((uVar58 ^ uVar39) - uVar39) + ((uVar70 ^ uVar40) - uVar40) +
                         ((uVar43 ^ uVar25) - uVar25) + ((uVar67 ^ uVar26) - uVar26) +
                         ((uVar60 ^ uVar21) - uVar21) + ((uVar52 ^ uVar22) - uVar22) +
                         ((uVar61 ^ uVar17) - uVar17) +
                         (((unsigned int)bVar5 - (unsigned int)bVar7 ^ uVar18) - uVar18) + iStack_180;
            iVar59 = iVar59 + 4;
            lVar71 = lVar71 + -1;
          } while (lVar71 != 0);
          uVar45 = (unsigned __int64)uStack_110;
          iStack_104 = iStack_104 + 0x10;
          iVar63 = iVar63 + 0x10;
          iVar37 = iVar37 + 0x10;
          iStack_108 = iStack_108 + 0x10;
          uStack_110 = (unsigned int)(uVar45 - 1);
          iVar38 = iVar38 + 0x10;
        } while (uVar45 - 1 != 0);
      }
      fVar33 = lbl_82002AE0 /
               ((float)(((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0xfffffff) << 4) + lbl_82002D08);
      fVar35 = (float)(__int64)iVar54 * fVar33 -
               (float)(__int64)iStack_194 * fVar33 * (float)(__int64)iStack_194 * fVar33;
      fVar34 = (float)(__int64)iStack_170 * fVar33 -
               (float)(__int64)iStack_1a0 * fVar33 * (float)(__int64)iStack_1a0 * fVar33;
      fVar33 = fVar33 * 0.0 -
               (float)(__int64)iStack_19c * fVar33 * (float)(__int64)iStack_19c * fVar33;
      fVar36 = fVar35 * lbl_8200D8C4 * lbl_82002C28;
      fVar35 = fVar35 * lbl_8200BF40 * lbl_82002C28;
      if ((((iVar53 < iStack_180) || (fVar34 < fVar35)) || (fVar36 < fVar34)) &&
         ((*(unsigned int *)(param_1 + 0x1c28) = 1, 1 < *(int *)(param_1 + 0x1c24) &&
          (((iVar53 < 0 || (fVar33 < fVar35)) || (fVar36 < fVar33)))))) {
        *(unsigned int *)(param_1 + 0x1c28) = 2;
      }
    }
  }
  return;
}

