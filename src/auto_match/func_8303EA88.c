#define true 1
extern int fn_82F98728();


void fn_8303EA88(int param_1,int *param_2)

{
  float fVar1;
  unsigned short uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  float *pfVar9;
  __int64 lVar8;
  unsigned __int64 uVar10;
  float *pfVar11;
  float *pfVar12;
  int *piVar13;
  float *pfVar14;
  int *piVar15;
  int *piVar16;
  unsigned int uVar17;
  int *piVar18;
  __int64 lVar19;
  
  piVar18 = param_2 + 0xc;
  uVar17 = 0;
  iVar5 = fn_82F98728(param_2);
  if (iVar5 != 0) {
    lVar19 = 0;
    piVar16 = piVar18;
    do {
      uVar6 = 0;
      while( true ) {
        uVar7 = *(unsigned int *)(param_1 + 0x104);
        uVar10 = 0;
        if (uVar7 == 0) break;
        do {
          uVar10 = uVar10 + 1;
          uVar7 = uVar7 - 1 & uVar7;
        } while (uVar7 != 0);
        if ((uVar10 & 0xffffffff) <= (uVar6 & 0xffffffff)) break;
        uVar2 = *(unsigned short *)(param_2 + 3);
        fVar1 = *(float *)((int)((lVar19 + uVar6 + 8 & 0xffffffff) << 2) + (int)piVar18);
        pfVar11 = (float *)(uVar2 * uVar17 * 4 + *param_2);
        pfVar9 = pfVar11 + uVar2;
        pfVar14 = (float *)((unsigned int)*(unsigned short *)(param_1 + 0x10c) * (int)uVar6 * 4 +
                           *(int *)(param_1 + 0x100));
        fVar3 = (*(float *)((int)((lVar19 + uVar6 & 0xffffffff) << 2) + (int)piVar18) - fVar1) /
                (float)(__int64)(int)(unsigned int)uVar2;
        if (pfVar11 < pfVar9) {
          uVar7 = (int)pfVar9 + (3 - (int)pfVar11);
          if (3 < (int)(((int)uVar7 >> 2) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 3) != 0))) {
            do {
              *pfVar14 = *pfVar11 * fVar1 + *pfVar14;
              fVar4 = fVar3 + fVar3 + fVar1;
              pfVar14[1] = pfVar11[1] * (fVar3 + fVar1) + pfVar14[1];
              fVar1 = fVar3 + fVar4;
              pfVar14[2] = pfVar11[2] * fVar4 + pfVar14[2];
              pfVar12 = pfVar11 + 3;
              pfVar11 = pfVar11 + 4;
              pfVar14[3] = *pfVar12 * fVar1 + pfVar14[3];
              fVar1 = fVar3 + fVar1;
              pfVar14 = pfVar14 + 4;
            } while ((int)pfVar11 < (int)(pfVar9 + -3));
          }
          if (pfVar11 < pfVar9) {
            pfVar12 = pfVar11 + -1;
            pfVar14 = pfVar14 + -1;
            lVar8 = (unsigned __int64)((unsigned int)((int)pfVar9 + (-1 - (int)pfVar11)) >> 2) + 1;
            do {
              pfVar12 = pfVar12 + 1;
              pfVar9 = pfVar14 + 1;
              pfVar14 = pfVar14 + 1;
              *pfVar14 = *pfVar12 * fVar1 + *pfVar9;
              fVar1 = fVar3 + fVar1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
        }
        uVar6 = uVar6 + 1;
      }
      piVar13 = piVar16 + 7;
      piVar15 = piVar16 + -1;
      lVar8 = 6;
      do {
        piVar15 = piVar15 + 1;
        piVar13 = piVar13 + 1;
        *piVar13 = *piVar15;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x10;
      piVar16 = piVar16 + 0x10;
      uVar7 = fn_82F98728(param_2);
    } while (uVar17 < uVar7);
  }
  *(unsigned short *)(param_1 + 0x10e) = *(unsigned short *)(param_2 + 3);
  return;
}

