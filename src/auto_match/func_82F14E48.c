#define true 1


__int64 fn_82F14E48(unsigned int *param_1,unsigned int param_2,__int64 param_3)

{
  unsigned char bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned char *pbVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  int iVar10;
  __int64 lVar11;
  int iVar13;
  unsigned __int64 uVar12;
  int *piVar14;
  int iVar15;
  __int64 lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  lVar8 = 0;
  param_1[2] = (unsigned int)(param_3 != 0);
  iVar15 = 0;
  if (0 < (int)param_1[3]) {
    piVar14 = param_1 + 10;
    do {
      piVar2 = (int *)*piVar14;
      piVar2[0xb] = piVar2[0x10];
      if (*(int *)(piVar2[0x12] + 8) != 0) {
        piVar2[10] = 0;
        piVar2[0xb] = 0;
      }
      if (piVar2[0xd] == 0) {
        lVar11 = 0;
      }
      else {
        iVar3 = piVar2[2];
        lVar16 = 0;
        piVar2[9] = 1;
        iVar17 = 1;
        if (iVar3 < 5) {
          iVar17 = 2;
        }
        iVar19 = 0;
        lVar11 = 0x7fffffff;
        if (0 < piVar2[4]) {
          iVar4 = *piVar2;
          iVar5 = piVar2[0xb];
          iVar20 = piVar2[6];
          do {
            iVar21 = iVar17;
            if ((iVar3 == 8) && (((iVar19 == 0x23 || (iVar19 == 0x24)) || (iVar19 == 0x48)))) {
              iVar21 = 1;
            }
            lVar9 = 0;
            iVar13 = 0;
            iVar10 = 0;
            while( true ) {
              iVar18 = (int)lVar11;
              iVar7 = iVar13 >> 1;
              if (((iVar18 <= (int)lVar9) && (iVar19 != iVar5)) || (iVar4 + -1 <= iVar13)) break;
              bVar1 = *(unsigned char *)(iVar7 + iVar20);
              pbVar6 = (unsigned char *)(piVar2[1] + iVar13);
              iVar7 = iVar13 + 1;
              iVar13 = iVar13 + 2;
              lVar9 = (__int64)
                      (int)((unsigned int)*(unsigned char *)(piVar2[1] + iVar7) + ((int)(unsigned int)bVar1 >> 4) + iVar21) *
                      (__int64)*(int *)(iVar10 + 4 + piVar2[0xc]) +
                      (__int64)(int)((unsigned int)*pbVar6 + (bVar1 & 0xf) + iVar21) *
                      (__int64)*(int *)(iVar10 + piVar2[0xc]) + lVar9;
              iVar10 = iVar10 + 8;
            }
            if (((int)lVar9 < iVar18) || (iVar19 == iVar5)) {
              if (iVar13 < iVar4) {
                iVar10 = iVar13 * 4;
                pbVar6 = (unsigned char *)(piVar2[1] + iVar13);
                iVar13 = iVar13 + 1;
                lVar9 = (__int64)(int)((*(unsigned char *)(iVar7 + iVar20) & 0xf) + (unsigned int)*pbVar6 + iVar21)
                        * (__int64)*(int *)(iVar10 + piVar2[0xc]) + lVar9;
              }
              if (iVar19 == iVar5) {
                lVar16 = lVar9;
              }
            }
            if ((iVar4 <= iVar13) && ((int)lVar9 < iVar18)) {
              piVar2[10] = iVar19;
              lVar11 = lVar9;
            }
            iVar19 = iVar19 + 1;
            iVar20 = iVar20 + (iVar4 + 1 >> 1);
          } while (iVar19 < piVar2[4]);
        }
        uVar12 = (unsigned __int64)(unsigned int)piVar2[5];
        if (piVar2[5] == 0) {
          uVar12 = 4;
        }
        if ((__int64)((lVar16 - uVar12) - lVar11) < 1) {
          piVar2[10] = piVar2[0xb];
        }
        if ((iVar3 == 8) && (*(int *)(piVar2[0x12] + 0x24) != 0)) {
          piVar2[1] = piVar2[1] + *piVar2;
        }
      }
      iVar15 = iVar15 + 1;
      lVar8 = lVar11 + lVar8;
      piVar14 = piVar14 + 1;
    } while (iVar15 < (int)param_1[3]);
  }
  iVar15 = param_1[0x16];
  *param_1 = 1;
  param_1[0x16] = param_1[0x15];
  param_1[4] = param_2;
  param_1[0x17] = iVar15 - param_1[0x15] >> 2;
  return lVar8;
}

