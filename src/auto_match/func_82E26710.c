typedef unsigned char bool;
extern int fn_82E260A8();
extern int fn_82E26138();
extern int fn_82E26630();
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_821533D8;
extern unsigned int lbl_821533E8;
extern unsigned int lbl_82153408;
extern unsigned int lbl_82153448;
extern unsigned int lbl_83187448;
extern unsigned int lbl_83187510;
extern unsigned int lbl_83187518;
extern unsigned int lbl_83187520;
extern unsigned int lbl_83187524;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82E26710(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar13;
  unsigned __int64 uVar12;
  unsigned char *pbVar15;
  unsigned __int64 uVar14;
  unsigned char *pbVar16;
  unsigned int *puVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned int *puVar20;
  int iVar21;
  unsigned char *pbVar22;
  int iVar23;
  unsigned int *puVar24;
  unsigned int uVar25;
  unsigned int *puVar26;
  int iVar27;
  
  iVar21 = (int)param_4;
  pbVar22 = (unsigned char *)(param_5 + 0x2c);
  pbVar18 = &lbl_821533D8;
  uVar25 = 0;
  pbVar13 = pbVar22;
  pbVar15 = pbVar18;
  do {
    bVar2 = *pbVar13;
    bVar3 = *pbVar15;
    if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
    pbVar13 = pbVar13 + 1;
    pbVar15 = pbVar15 + 1;
  } while (pbVar13 != (unsigned char *)(param_5 + 0x3c));
  pbVar15 = (unsigned char *)&lbl_82153408;
  pbVar19 = &lbl_82153448;
  pbVar13 = (unsigned char *)&lbl_821533E8;
  if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
LAB_82e26830:
    puVar17 = *(unsigned int **)(param_5 + 0x44);
    puVar26 = puVar17 + 0xc;
  }
  else {
    pbVar11 = pbVar15;
    pbVar16 = pbVar22;
    do {
      bVar2 = *pbVar16;
      bVar3 = *pbVar11;
      if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
      pbVar16 = pbVar16 + 1;
      pbVar11 = pbVar11 + 1;
    } while (pbVar16 != (unsigned char *)(param_5 + 0x3c));
    if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) goto LAB_82e26830;
    pbVar11 = pbVar13;
    pbVar16 = pbVar22;
    do {
      bVar2 = *pbVar16;
      bVar3 = *pbVar11;
      if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
      pbVar16 = pbVar16 + 1;
      pbVar11 = pbVar11 + 1;
    } while (pbVar16 != (unsigned char *)(param_5 + 0x3c));
    if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) != 0) {
      pbVar11 = pbVar19;
      pbVar16 = pbVar22;
      do {
        bVar2 = *pbVar16;
        bVar3 = *pbVar11;
        if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
        pbVar16 = pbVar16 + 1;
        pbVar11 = pbVar11 + 1;
      } while (pbVar16 != (unsigned char *)(param_5 + 0x3c));
      if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) != 0) {
        return 0xffffffff80070057;
      }
    }
    puVar17 = *(unsigned int **)(param_5 + 0x44);
    puVar26 = puVar17 + 0x12;
  }
  pbVar11 = pbVar22;
  do {
    bVar2 = *pbVar11;
    bVar3 = *pbVar18;
    if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
    pbVar11 = pbVar11 + 1;
    pbVar18 = pbVar18 + 1;
  } while (pbVar11 != (unsigned char *)(param_5 + 0x3c));
  if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
    if (*(unsigned int *)(param_5 + 0x40) < 0x58) {
      return 0xffffffff80070057;
    }
    uVar25 = *(unsigned int *)(param_5 + 0x40) - 0x30;
  }
  else {
    pbVar18 = pbVar22;
    do {
      bVar2 = *pbVar18;
      bVar3 = *pbVar13;
      if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
      pbVar18 = pbVar18 + 1;
      pbVar13 = pbVar13 + 1;
    } while (pbVar18 != (unsigned char *)(param_5 + 0x3c));
    if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
      if (*(unsigned int *)(param_5 + 0x40) < 0x70) {
        return 0xffffffff80070057;
      }
      uVar25 = *(unsigned int *)(param_5 + 0x40) - 0x48;
    }
    else {
      pbVar13 = pbVar22;
      do {
        bVar2 = *pbVar13;
        bVar3 = *pbVar15;
        if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
        pbVar13 = pbVar13 + 1;
        pbVar15 = pbVar15 + 1;
      } while (pbVar13 != (unsigned char *)(param_5 + 0x3c));
      if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) == 0) {
        bVar1 = *(unsigned int *)(param_5 + 0x40) < 0x68;
      }
      else {
        do {
          bVar2 = *pbVar22;
          bVar3 = *pbVar19;
          if ((unsigned __int64)bVar2 - (unsigned __int64)bVar3 != 0) break;
          pbVar22 = pbVar22 + 1;
          pbVar19 = pbVar19 + 1;
        } while (pbVar22 != (unsigned char *)(param_5 + 0x3c));
        if ((int)((unsigned __int64)bVar2 - (unsigned __int64)bVar3) != 0) goto LAB_82e26944;
        bVar1 = *(unsigned int *)(param_5 + 0x40) < 0x88;
      }
      if (bVar1) {
        return 0xffffffff80070057;
      }
      uVar25 = 0x28;
    }
  }
LAB_82e26944:
  puVar17[4] = 0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar24 = &lbl_83187510;
  puVar17[7] = 0;
  *puVar17 = 0;
  iVar23 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  uVar14 = 0;
  puVar17[3] = 0;
  puVar26[1] = (int)param_2;
  puVar26[2] = (int)param_3;
  *(unsigned short *)(puVar26 + 3) = 1;
  puVar20 = puVar24;
  while (uVar10 = (unsigned int)param_1, (param_1 & 0xffffffff) != (unsigned __int64)*puVar20) {
    uVar14 = uVar14 + 0x24;
    iVar23 = iVar23 + 1;
    puVar20 = puVar20 + 9;
    if ((uVar14 & 0xffffffff) == 0x804) {
      puVar26[4] = uVar10;
      *(unsigned short *)((int)puVar26 + 0xe) = 0;
      puVar26[5] = 0;
      *(unsigned int *)(param_5 + 0x24) = 1;
      uVar8 = lbl_8208E05C;
      uVar7 = lbl_8208E058;
      uVar6 = lbl_8208E054;
      *(unsigned int *)(param_5 + 0x10) = uVar10;
      *(unsigned int *)(param_5 + 0x18) = uVar7;
      *(unsigned int *)(param_5 + 0x14) = uVar6;
      *(unsigned int *)(param_5 + 0x1c) = uVar8;
      return 0;
    }
  }
  iVar27 = iVar23 * 0x24;
  uVar4 = (&lbl_83187524)[iVar23 * 9];
  uVar14 = (unsigned __int64)uVar4;
  if (iVar21 == 0) {
    trapWord(6,uVar14,0);
    iVar21 = (int)((param_2 & 0xffffffff) / uVar14);
    trapWord(6,uVar14,0);
    if (param_2 != (__int64)(int)((param_2 & 0xffffffff) / uVar14) * (__int64)(int)uVar4) {
      iVar21 = iVar21 + 1;
    }
    uVar14 = (__int64)(int)uVar4 * (__int64)iVar21;
    iVar21 = (int)(((__int64)(int)(&lbl_83187520)[iVar23 * 9] * (__int64)iVar21 & 0xffffffffU) >>
                  3);
    iVar9 = fn_82E260A8(param_1,0);
    if (iVar9 == 0) {
      iVar21 = -iVar21;
    }
  }
  else {
    trapWord(6,(unsigned __int64)(unsigned int)(&lbl_83187520)[iVar23 * 9],0);
    uVar14 = (__int64)
             (int)((((param_4 ^ (__int64)(iVar21 >> 0x1f)) - (__int64)(iVar21 >> 0x1f) &
                    0x1fffffff) << 3) / (unsigned __int64)(unsigned int)(&lbl_83187520)[iVar23 * 9]) *
             (__int64)(int)uVar4;
  }
  uVar12 = uVar14;
  if ((uVar14 & 0xffffffff) < (param_2 & 0xffffffff)) {
    uVar12 = param_2;
  }
  if ((param_2 & 0xffffffff) < (uVar14 & 0xffffffff)) {
    puVar17[7] = puVar26[2];
    puVar17[6] = puVar26[1];
    puVar26[1] = (int)uVar12;
  }
  iVar9 = fn_82E260A8(param_1,0);
  if ((iVar9 == 0) && (0 < iVar21)) {
    puVar26[2] = -puVar26[2];
  }
  if ((&lbl_83187518)[iVar23 * 9] == -1) {
    puVar26[4] = uVar10;
  }
  else {
    puVar26[4] = (&lbl_83187518)[iVar23 * 9];
  }
  uVar7 = lbl_8208E05C;
  uVar6 = lbl_8208E058;
  puVar5 = *(unsigned int **)(iVar27 + -0x7ce78aec);
  if (puVar5 == (unsigned int *)lbl_83187448) {
    *(unsigned int *)(param_5 + 0x14) = lbl_8208E054;
    *(unsigned int *)(param_5 + 0x18) = uVar6;
    *(unsigned int *)(param_5 + 0x1c) = uVar7;
    *(unsigned int *)(param_5 + 0x10) = uVar10;
  }
  else {
    *(unsigned int *)(param_5 + 0x10) = *puVar5;
    *(unsigned int *)(param_5 + 0x14) = puVar5[1];
    *(unsigned int *)(param_5 + 0x18) = puVar5[2];
    *(unsigned int *)(param_5 + 0x1c) = puVar5[3];
  }
  uVar10 = fn_82E26630(param_1,param_3,puVar26[1]);
  puVar26[5] = uVar10;
  *(unsigned int *)(param_5 + 0x28) = uVar10;
  uVar14 = 0;
  trapWord(6,(unsigned __int64)(unsigned int)(&lbl_83187524)[iVar23 * 9],0);
  *(short *)((int)puVar26 + 0xe) =
       (short)(*(unsigned int *)(iVar27 + -0x7ce78ae4) / (unsigned int)(&lbl_83187524)[iVar23 * 9]);
  do {
    if ((param_1 & 0xffffffff) == (unsigned __int64)*puVar24) {
      uVar10 = 1;
      goto LAB_82e26c00;
    }
    uVar14 = uVar14 + 0x24;
    puVar24 = puVar24 + 9;
  } while ((uVar14 & 0xffffffff) != 0x804);
  uVar10 = 0;
LAB_82e26c00:
  *(unsigned int *)(param_5 + 0x24) = (unsigned int)LZCOUNT(uVar10) >> 5;
  uVar10 = fn_82E26138(param_1,0);
  *(unsigned int *)(param_5 + 0x20) = uVar10;
  if ((&lbl_83187518)[iVar23 * 9] == 3) {
    if (uVar25 < 0x34) {
      return 0xffffffff80070057;
    }
    puVar26[10] = *(unsigned int *)(iVar27 + -0x7ce78ad8);
    puVar26[0xb] = *(unsigned int *)(iVar27 + -0x7ce78ad4);
    puVar26[0xc] = *(unsigned int *)(iVar27 + -0x7ce78ad0);
  }
  *puVar17 = puVar17[4];
  puVar17[1] = puVar17[5];
  puVar17[2] = puVar17[6];
  puVar17[3] = puVar17[7];
  return 0;
}

