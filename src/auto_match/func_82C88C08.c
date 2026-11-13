extern unsigned int lbl_820FD898;
extern unsigned int lbl_820FD8C8;
extern unsigned int lbl_820FD8F8;


unsigned __int64
fn_82C88C08(int param_1, int param_2, unsigned __int64 param_3, int param_4, int param_5, __int64 param_6, int *param_7, unsigned int *param_8, int in_stack_00000054, int in_stack_0000005c)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  int *piVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned __int64 uVar10;
  unsigned char *puVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned char *puVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned char *puVar20;
  unsigned int *puVar21;
  unsigned char *puVar22;
  unsigned int *puVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  __int64 lVar27;


  
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  iVar15 = (int)param_3;
  if (param_4 == 0) {
    if (param_5 == 0) {
      *(unsigned int *)(param_1 + 8) = 0xffffffff;
      lVar27 = 0xd;
      puVar21 = (unsigned int *)(*(int *)(param_1 + 0x1c) + 8);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x14) + 1;
      do {
        puVar21 = puVar21 + 1;
        *puVar21 = 0x80808080;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    else {
      puVar21 = *(unsigned int **)(param_1 + 0x18);
      puVar23 = (unsigned int *)(param_2 - iVar15);
      *(unsigned int *)(param_1 + 8) = 0xffffffff;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x14) + 1;
      puVar13 = (unsigned int *)((int)puVar23 - iVar15);
      if (param_6 + -1 < 1) {
        bVar5 = *(unsigned char *)((int)puVar23 + 7);
        *puVar21 = *puVar23;
        uVar24 = puVar23[1];
        iVar15 = (unsigned int)bVar5 * 0x1010101;
        puVar21[3] = iVar15;
        puVar21[2] = iVar15;
        puVar21[1] = uVar24;
        puVar21[4] = *puVar13;
        puVar21[5] = puVar13[1];
      }
      else {
        *puVar21 = *puVar23;
        puVar21[1] = puVar23[1];
        puVar21[2] = puVar23[2];
        puVar21[3] = puVar23[3];
        puVar21[4] = *puVar13;
        puVar21[5] = puVar13[1];
      }
      pbVar8 = *(unsigned char **)(param_1 + 0x18);
      iVar15 = ((int)((unsigned int)pbVar8[7] + (unsigned int)pbVar8[6] + (unsigned int)pbVar8[5] + (unsigned int)pbVar8[4] +
                      (unsigned int)pbVar8[3] + (unsigned int)pbVar8[2] + (unsigned int)pbVar8[1] + (unsigned int)*pbVar8 + 4) >> 3)
               * 0x1010101;
      *(int *)(pbVar8 + -4) = iVar15;
      *(int *)(pbVar8 + -8) = iVar15;
      *(int *)(pbVar8 + -0xc) = iVar15;
      *(int *)(pbVar8 + -0x10) = iVar15;
      *(int *)(pbVar8 + -0x14) = iVar15;
    }
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = iVar15;
    if (param_5 == 0) {
      puVar22 = (unsigned char *)(param_2 + -1);
      *(unsigned char *)(*(int *)(param_1 + 0x14) + -1) = *puVar22;
      bVar5 = *(unsigned char *)(*(int *)(param_1 + 0x14) + -1);
      *(unsigned char *)(*(int *)(param_1 + 0x14) + -2) = puVar22[iVar15];
      bVar6 = *(unsigned char *)(*(int *)(param_1 + 0x14) + -2);
      *(unsigned char *)(*(int *)(param_1 + 0x14) + -3) = puVar22[(int)((param_3 & 0xffffffff) << 1)];
      bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x14) + -3);
      *(unsigned char *)(*(int *)(param_1 + 0x14) + -4) =
           puVar22[iVar15 + (int)((param_3 & 0xffffffff) << 1)];
      bVar2 = *(unsigned char *)(*(int *)(param_1 + 0x14) + -4);
      *(unsigned char *)(*(int *)(param_1 + 0x14) + -5) = puVar22[(int)((param_3 & 0xffffffff) << 2)];
      bVar3 = *(unsigned char *)(*(int *)(param_1 + 0x14) + -5);
      *(unsigned char *)(*(int *)(param_1 + 0x14) + -6) =
           puVar22[iVar15 + (int)((param_3 & 0xffffffff) << 2)];
      bVar4 = *(unsigned char *)(*(int *)(param_1 + 0x14) + -6);
      *(unsigned char *)(*(int *)(param_1 + 0x14) + -7) =
           puVar22[(int)((param_3 + (param_3 & 0x7fffffff) * 2 & 0xffffffff) << 1)];
      iVar12 = *(int *)(param_1 + 0x14);
      *(unsigned char *)(iVar12 + -8) = puVar22[(int)((param_3 & 0xffffffff) << 3) - iVar15];
      iVar15 = (int)((unsigned int)(unsigned char)(*(unsigned char **)(param_1 + 0x14))[-8] +
                     (unsigned int)*(unsigned char *)(iVar12 + -7) +
                     (unsigned int)bVar4 +
                     (unsigned int)bVar3 + (unsigned int)bVar2 + (unsigned int)bVar1 + (unsigned int)bVar6 + (unsigned int)bVar5 + 4) >> 3;
      iVar12 = iVar15 * 0x1010101;
      **(unsigned char **)(param_1 + 0x14) = (char)iVar15;
      piVar7 = *(int **)(param_1 + 0x18);
      piVar7[5] = iVar12;
      piVar7[4] = iVar12;
      piVar7[3] = iVar12;
      piVar7[2] = iVar12;
      piVar7[1] = iVar12;
      *piVar7 = iVar12;
    }
    else {
      puVar23 = (unsigned int *)(param_2 - iVar15);
      puVar21 = *(unsigned int **)(param_1 + 0x18);
      if (param_4 < (int)param_6 + -1) {
        *puVar21 = *puVar23;
        puVar21[1] = puVar23[1];
        puVar21[2] = puVar23[2];
        puVar21[3] = puVar23[3];
        puVar21[4] = *(unsigned int *)((int)puVar23 - iVar15);
        uVar24 = ((unsigned int *)((int)puVar23 - iVar15))[1];
      }
      else {
        bVar5 = *(unsigned char *)((int)puVar23 + 7);
        *puVar21 = *puVar23;
        puVar21[1] = puVar23[1];
        iVar12 = (unsigned int)bVar5 * 0x1010101;
        puVar21[3] = iVar12;
        puVar21[2] = iVar12;
        puVar21[4] = *(unsigned int *)((int)puVar23 - iVar15);
        uVar24 = ((unsigned int *)((int)puVar23 - iVar15))[1];
      }
      puVar21[5] = uVar24;
      puVar16 = (unsigned char *)(param_2 + -1);
      puVar11 = puVar16 + iVar15 * 4;
      puVar22 = *(unsigned char **)(param_1 + 0x14);
      *puVar22 = puVar16[-iVar15];
      puVar22[-1] = *puVar16;
      puVar22[-5] = *puVar11;
      puVar16 = puVar16 + iVar15;
      puVar22[-2] = *puVar16;
      puVar11 = puVar11 + iVar15;
      puVar22[-6] = *puVar11;
      puVar22[-3] = puVar16[iVar15];
      puVar22[-7] = puVar11[iVar15];
      puVar22[-4] = (puVar16 + iVar15)[iVar15];
      puVar22[-8] = (puVar11 + iVar15)[iVar15];
    }
  }
  pbVar8 = *(unsigned char **)(param_1 + 0x18);
  pbVar9 = *(unsigned char **)(param_1 + 0x14);
  iVar12 = 0;
  iVar15 = 0;
  lVar27 = 4;
  uVar17 = (unsigned int)*pbVar8;
  uVar26 = (unsigned int)*pbVar9;
  uVar18 = uVar17;
  do {
    bVar5 = pbVar8[iVar12];
    uVar25 = (unsigned int)bVar5;
    bVar6 = pbVar9[iVar12 + -8];
    uVar14 = (unsigned int)bVar6;
    uVar26 = uVar14 + uVar25 + uVar26;
    uVar19 = uVar25;
    if ((bVar5 <= uVar18) && (uVar19 = uVar18, bVar5 < uVar17)) {
      uVar17 = uVar25;
    }
    uVar18 = uVar14;
    if ((bVar6 <= uVar19) && (uVar18 = uVar19, bVar6 < uVar17)) {
      uVar17 = uVar14;
    }
    bVar6 = pbVar9[iVar12 + -7];
    uVar14 = (unsigned int)bVar6;
    bVar5 = pbVar8[iVar12 + 1];
    uVar25 = (unsigned int)bVar5;
    iVar15 = iVar15 + uVar14 + uVar25;
    uVar19 = uVar25;
    if ((bVar5 <= uVar18) && (uVar19 = uVar18, bVar5 < uVar17)) {
      uVar17 = uVar25;
    }
    uVar18 = uVar14;
    if ((bVar6 <= uVar19) && (uVar18 = uVar19, bVar6 < uVar17)) {
      uVar17 = uVar14;
    }
    iVar12 = iVar12 + 2;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  iVar12 = uVar18 - uVar17;
  if (((iVar12 < in_stack_00000054) || (iVar12 < 3)) && (*param_7 = 0, iVar12 < 3)) {
    *(unsigned int *)(param_1 + 0xc) = 1;
    iVar15 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x18) + 9) +
             (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x18) + 8) + iVar15 + uVar26 + 9;
    *(int *)(param_1 + 0x10) =
         ((((iVar15 * 3 >> 4) + iVar15 * 0xf >> 5) + iVar15 >> 2) + iVar15 >> 1) + iVar15 >> 5;
  }
  iVar15 = *param_7;
  if (in_stack_0000005c == 0) {
    if (iVar15 == 2) {
      puVar20 = &lbl_820FD8C8;
    }
    else if (iVar15 == 1) {
      puVar20 = &lbl_820FD8F8;
    }
    else {
      puVar20 = &lbl_820FD898;
    }
    *param_8 = puVar20;
    iVar15 = *param_7 << 2;
    *param_7 = iVar15;
    if (iVar12 < in_stack_00000054 << 1) {
      if ((param_4 == 0) || (param_5 == 0)) {
        *param_7 = 0;
      }
      else {
        if (iVar15 == 4) {
          *param_7 = 0xb;
          return 0;
        }
        if (iVar15 == 8) {
          *param_7 = 10;
          return 0;
        }
      }
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
    *param_7 = iVar15 << 2;
  }
  return uVar10;
}

