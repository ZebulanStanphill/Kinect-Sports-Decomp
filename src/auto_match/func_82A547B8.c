#define true 1
extern unsigned int fStack_b0;
extern int fn_82A70900();
extern int memset();
extern unsigned int lbl_8208A038;


unsigned __int64 fn_82A547B8(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  short sVar8;
  unsigned __int64 uVar7;
  short sVar9;
  int iVar10;
  short sVar11;
  unsigned int uVar12;
  int *piVar13;
  unsigned int uVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  float fStack_b0;
  
  iVar3 = *(int *)(param_3 + 0x38);
  dataCacheBlockTouch(0xffffffff8208a038);
  dataCacheBlockTouch(0xffffffff8208a0b8);
  iVar15 = *(int *)(param_1 + 0xe0);
  if ((0 < iVar15) && (0 < *(short *)(param_3 + 0x76))) {
    uVar14 = 0;
    uVar1 = (iVar15 << 0xc) / (int)*(short *)(param_3 + 0x76);
    uVar5 = uVar1;
    while (1 < uVar5) {
      uVar14 = uVar14 + 1;
      uVar5 = uVar1 >> (uVar14 & 0x3f);
    }
    uVar12 = 0;
    uVar5 = *(int *)(param_1 + 0x100) / iVar15;
    uVar6 = uVar5;
    while (1 < uVar6) {
      uVar12 = uVar12 + 1;
      uVar6 = uVar5 >> (uVar12 & 0x3f);
    }
    iVar15 = uVar12 * 0x74 + *(int *)(param_1 + 0x158);
    uVar12 = 0;
    uVar6 = uVar5;
    while (1 < uVar6) {
      uVar12 = uVar12 + 1;
      uVar6 = uVar5 >> (uVar12 & 0x3f);
    }
    piVar13 = (int *)(iVar15 + 4);
    sVar8 = (short)*(unsigned int *)(param_3 + 0x24) + -1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x154) + uVar12 * 4);
    iVar17 = 0;
    sVar16 = -1;
    if (*(int *)(iVar15 + 4) <= (int)((int)*(short *)(param_1 + 0xca) * uVar1) >> 0xc) {
      do {
        piVar13 = piVar13 + 1;
        iVar17 = iVar17 + 1;
      } while (*piVar13 <= (int)((int)*(short *)(param_1 + 0xca) * uVar1) >> 0xc);
    }
    uVar7 = (**(int (***)())(param_1 + 0x1e4))(param_2,param_3);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    dVar18 = (double)fStack_b0;
    sVar9 = *(short *)(param_1 + 0xca) + (short)*(unsigned int *)(param_1 + 0x10) + 1;
    iVar10 = (int)sVar9;
    *(short *)(param_1 + 0xca) = sVar9;
    for (; (sVar11 = (short)iVar10, sVar9 < sVar8 && (iVar17 < iVar4)); iVar17 = iVar17 + 1) {
      piVar13 = (int *)((iVar17 + 1) * 4 + iVar15);
      if (*piVar13 <= (int)(iVar10 * uVar1) >> 0xc) {
        do {
          piVar13 = piVar13 + 1;
          iVar17 = iVar17 + 1;
        } while (*piVar13 <= (int)((int)*(short *)(param_1 + 0xca) * uVar1) >> 0xc);
      }
      if (iVar4 <= iVar17) break;
      if (sVar11 == sVar16) {
        dVar19 = (double)(float)((double)(__int64)*(int *)(param_1 + 0x14) * dVar18);
        dVar18 = (double)fn_82A70900(param_1,param_3,iVar17);
      }
      else {
        dVar18 = (double)fn_82A70900(param_1,param_3,iVar17);
        dVar19 = (double)(float)((double)(__int64)*(int *)(param_1 + 0x14) * dVar18);
      }
      iVar10 = (iVar17 + 1) * 4;
      if ((int)uVar14 < 0xd) {
        sVar9 = (short)(*(int *)(iVar10 + iVar15) << (0xc - uVar14 & 0x3f));
      }
      else {
        sVar9 = (short)((1 << (uVar14 - 0xd & 0x3f)) + *(int *)(iVar10 + iVar15) >>
                       (uVar14 - 0xc & 0x3f));
      }
      sVar16 = sVar9 + -1;
      if (sVar8 < (short)(sVar9 + -1)) {
        sVar16 = sVar8;
      }
      while( true ) {
        if (*(int *)(param_1 + 0x18) != 0) {
          dVar19 = -dVar19;
        }
        *(float *)(*(short *)(param_1 + 0xca) * 4 + iVar3) = (float)dVar19;
        uVar7 = (**(int (***)())(param_1 + 0x1e4))(param_2,param_3);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        sVar9 = *(short *)(param_1 + 0xca) + (short)*(unsigned int *)(param_1 + 0x10) + 1;
        iVar10 = (int)sVar9;
        *(short *)(param_1 + 0xca) = sVar9;
        if (sVar16 <= iVar10) break;
        iVar10 = *(int *)(param_1 + 0x14);
        if (iVar10 < 0x40) {
          dVar19 = (double)(float)((double)*(float *)(&lbl_8208A038 + iVar10 * 4) * dVar18);
        }
        else {
          dVar19 = (double)(float)((double)(__int64)iVar10 * dVar18);
        }
      }
      sVar9 = *(short *)(param_1 + 0xca);
    }
    if (sVar11 == sVar8) {
      if (sVar16 <= sVar11) {
        iVar10 = iVar17 + -1;
        if (iVar10 < iVar4) {
          piVar13 = (int *)(iVar17 * 4 + iVar15);
          do {
            if ((int)((int)sVar11 * uVar1) >> 0xc < *piVar13) break;
            iVar10 = iVar10 + 1;
            iVar17 = iVar17 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar10 < iVar4);
        }
        if (iVar17 + -1 <= iVar4) {
          dVar18 = (double)fn_82A70900(param_1,param_3);
        }
      }
      fVar2 = (float)((double)(__int64)*(int *)(param_1 + 0x14) * dVar18);
      if (*(int *)(param_1 + 0x18) != 0) {
        fVar2 = -fVar2;
      }
      *(float *)(*(short *)(param_1 + 0xca) * 4 + iVar3) = fVar2;
    }
    if (*(short *)(param_1 + 0xca) <= *(short *)(param_3 + 0x76)) {
      if (0 < *(int *)(param_1 + 0x108)) {
                    /* WARNING: Subroutine does not return */
        memset(iVar3,0,*(int *)(param_1 + 0x108) << 2);
      }
                    /* WARNING: Subroutine does not return */
      memset(*(unsigned int *)(param_1 + 0x1d8) * 4 + iVar3,0,
                   ((__int64)*(short *)(param_3 + 0x78) - (unsigned __int64)*(unsigned int *)(param_1 + 0x1d8) &
                   0x3fffffff) << 2);
    }
  }
  return 0xffffffff80040002;
}

