#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_69c;
extern unsigned int fStack_6a4;
extern unsigned int fStack_6a8;
extern unsigned int fStack_6ac;
extern unsigned int fStack_6b0;
extern int fn_826310E0();
extern int fn_82631290();
extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_82192734;
extern float lbl_821958F8;
extern unsigned int lbl_82195C08;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_6b4;
extern unsigned int uStack_6b8;
extern unsigned int uStack_6bc;
extern unsigned int uStack_6c0;
extern unsigned int uStack_6c4;
extern unsigned int uStack_6c8;
extern unsigned int uStack_6d0;
extern unsigned int uStack_6d4;
extern unsigned int uStack_6d8;
extern unsigned int uStack_6dc;
extern unsigned int uStack_6e0;
extern unsigned int uStack_6e8;
extern unsigned int uStack_6f0;


void fn_825D7C08(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  unsigned __int64 *puVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  int *piVar22;
  int iVar23;
  unsigned int *puVar24;
  int iVar25;
  int iVar26;
  unsigned int uStack_6f0;
  unsigned int uStack_6e8;
  unsigned int uStack_6e0;
  unsigned int uStack_6dc;
  unsigned int uStack_6d8;
  unsigned int uStack_6d4;
  unsigned __int64 uStack_6d0;
  unsigned int uStack_6c8;
  unsigned int uStack_6c4;
  unsigned int uStack_6c0;
  unsigned int uStack_6bc;
  unsigned int uStack_6b8;
  unsigned int uStack_6b4;
  struct { float first; float second; } stack_pair_6b0;

  float fStack_6a8;
  float fStack_6a4;
  unsigned int auStack_69c [407];
  
  puVar17 = lbl_8320A898;
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    uVar11 = *(unsigned int *)(param_1 + 0x20);
    if (uVar11 == 0) {
      iVar26 = 0x1c;
      iVar25 = 7;
      uVar20 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28) * 5;
    }
    else if (uVar11 == 1) {
      iVar26 = 0x20;
      iVar25 = 8;
      uVar20 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0x3fffffff) << 2;
    }
    else if (uVar11 < 3) {
      iVar26 = 0x28;
      iVar25 = 10;
      uVar20 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0x3fffffff) << 2;
    }
    else {
      uVar20 = 0;
      iVar26 = 0x20;
      iVar25 = 8;
    }
    uVar18 = (unsigned int)uVar20;
    if (uVar11 < 2) {
      uVar11 = *(unsigned int *)(param_1 + 0x138);
      uStack_6e0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(unsigned int *)(lbl_8320A898 + 0x1f0) = uStack_6e0;
      uStack_6b4 = uVar18 & 0x7fffff | 0x4b000000;
      uStack_6d8 = uStack_6d8 & 0xc0f8 | 0x4b072502;
      uStack_6b8 = uStack_6b8 & 0xc0f8 | 0x4b072002;
      uStack_6c0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(unsigned int *)((int)puVar17 + 0xf8c) = uStack_6b4;
      uVar21 = (unsigned int)((uVar20 & 0xffffffff) << 1) & 0x7ffffe | 0x4b000000;
      *(unsigned int *)((int)puVar17 + 0xf84) = 0x4b000000;
      *(unsigned int *)(puVar17 + 0x1f1) = uStack_6d8;
      uVar18 = uStack_6c8 & 0xc0f8 | 0x4b072402;
      uStack_6f0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      uStack_6d0 = CONCAT44(((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2,
                            0x4b000000) | 0x4000000000000000;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x1f2) = uStack_6c0;
      *(unsigned int *)((int)puVar17 + 0xf94) = 0x4b000000;
      *(unsigned int *)(puVar17 + 499) = uStack_6b8;
      *(unsigned int *)((int)puVar17 + 0xf9c) = uStack_6b4;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 500) = uStack_6f0;
      *(unsigned int *)((int)puVar17 + 0xfa4) = 0x4b000000;
      *(unsigned int *)(puVar17 + 0x1f5) = uStack_6e8 & 0xc0f8 | 0x4b020602;
      *(unsigned int *)((int)puVar17 + 0xfac) = uVar21;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(float *)(lbl_8320A898 + 0x1f6) = (((unsigned __int64)(uStack_6d0) >> 0) & 0xFFFFFFFF);
      *(unsigned int *)((int)puVar17 + 0xfb4) = 0x4b000000;
      uStack_6c8 = uVar18;
      uStack_6c4 = uVar21;
    }
    else {
      uVar11 = *(unsigned int *)(param_1 + 0x138);
      uVar19 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      uStack_6c8 = uStack_6c8 & 0xc0f8 | 0x4b072002;
      uStack_6d0 = CONCAT44(uVar19,0x4b000000);
      *(unsigned int *)(lbl_8320A898 + 0x1f0) =
           ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(unsigned int *)(puVar17 + 0x1f1) = uStack_6e8 & 0xc0f8 | 0x4b072602;
      uVar21 = (unsigned int)((uVar20 & 0xffffffff) << 1) & 0x7ffffe | 0x4b000000;
      uStack_6c4 = uVar18 & 0x7fffff | 0x4b000000;
      uStack_6c0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      *(unsigned int *)((int)puVar17 + 0xf84) = 0x4b000000;
      uStack_6b8 = uStack_6b8 & 0xc0f8 | 0x4b020602;
      *(unsigned int *)((int)puVar17 + 0xf8c) = uVar18 >> 1 & 0x7fffff | 0x4b000000;
      uStack_6e0 = ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1ffffffc) >> 2 | 0x40000000;
      uVar18 = uStack_6d8 & 0xc0f8 | 0x4b072402;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x1f2) = uVar19;
      *(unsigned int *)((int)puVar17 + 0xf94) = 0x4b000000;
      *(unsigned int *)(puVar17 + 499) = uStack_6c8;
      *(unsigned int *)((int)puVar17 + 0xf9c) = uStack_6c4;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 500) = uStack_6c0;
      *(unsigned int *)((int)puVar17 + 0xfa4) = 0x4b000000;
      *(unsigned int *)(puVar17 + 0x1f5) = uStack_6b8;
      *(unsigned int *)((int)puVar17 + 0xfac) = uVar21;
      *puVar17 = *puVar17 | 0x80000000;
      puVar17 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x1f6) = uStack_6e0;
      *(unsigned int *)((int)puVar17 + 0xfb4) = 0x4b000000;
      uStack_6d8 = uVar18;
      uStack_6b4 = uVar21;
    }
    puVar17 = lbl_8320A898;
    uStack_6bc = 0x4b000000;
    uStack_6dc = 0x4b000000;
    *(unsigned int *)(lbl_8320A898 + 0x1f7) = uVar18;
    *(unsigned int *)((int)puVar17 + 0xfbc) = uVar21;
    *puVar17 = *puVar17 | 0x80000000;
    fVar16 = lbl_821CA460;
    fVar15 = lbl_82192734;
    iVar23 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = iVar23 * 0x19660d + 0x3c6ef35f;
    uVar20 = CONCAT44(iVar23,(((unsigned __int64)(uStack_6d0) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff;
    uStack_6d0 = ((((unsigned __int64)(uStack_6d0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned int)(uVar20 >> 0x20) | 0x3f800000))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uVar11 = *(unsigned int *)(param_1 + 0x170);
    fVar14 = (((unsigned __int64)(uStack_6d0) >> 0) & 0xFFFFFFFF) - lbl_821CA460;
    uStack_6d0 = ((((unsigned __int64)(uStack_6d0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar20)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_6d0 = CONCAT44(lbl_83265A28,(((unsigned __int64)(uStack_6d0) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff | 0x3f80000000000000;
    uVar18 = 0;
    stack_pair_6b0.first = fVar14 * lbl_82195C08 + lbl_821CA460;
    stack_pair_6b0.second = ((((unsigned __int64)(uStack_6d0) >> 0) & 0xFFFFFFFF) - lbl_821CA460) * lbl_821958F8;
    fStack_6a4 = (float)*(unsigned int *)(param_1 + 0x28);
    fStack_6a8 = (float)*(unsigned int *)(param_1 + 0x2c);
    if (uVar11 != 0) {
      iVar23 = *(int *)(param_1 + 0x20);
      piVar22 = (int *)(param_1 + 0x148);
      puVar24 = auStack_69c;
      do {
        iVar12 = *piVar22;
        iVar13 = *(int *)(iVar12 + 0x160);
        uVar2 = *(unsigned int *)(iVar12 + 0x7c);
        uVar3 = *(unsigned int *)(iVar12 + 0x80);
        uVar4 = *(unsigned int *)(iVar12 + 200);
        uVar5 = *(unsigned int *)(iVar12 + 0x84);
        uVar6 = *(unsigned int *)(iVar12 + 0x88);
        uVar7 = *(unsigned int *)(iVar12 + 0x8c);
        puVar24[-1] = *(unsigned int *)(iVar12 + 0x78);
        *puVar24 = uVar2;
        puVar24[1] = uVar3;
        puVar24[2] = uVar4;
        puVar24[3] = uVar5;
        puVar24[4] = uVar6;
        puVar24[5] = uVar7;
        fVar14 = fVar15;
        if (iVar13 != 0) {
          fVar14 = fVar16;
        }
        iVar12 = *piVar22;
        puVar24[6] = fVar14;
        uVar2 = *(unsigned int *)(iVar12 + 0xd0);
        uVar3 = *(unsigned int *)(iVar12 + 0xd4);
        uVar4 = *(unsigned int *)(iVar12 + 0xd8);
        uVar5 = *(unsigned int *)(iVar12 + 0x98);
        uVar6 = *(unsigned int *)(iVar12 + 0x9c);
        uVar7 = *(unsigned int *)(iVar12 + 0xa4);
        uVar8 = *(unsigned int *)(iVar12 + 0xa8);
        uVar9 = *(unsigned int *)(iVar12 + 0xb8);
        uVar10 = *(unsigned int *)(iVar12 + 0xbc);
        puVar24[7] = *(unsigned int *)(iVar12 + 0xcc);
        puVar24[8] = uVar2;
        puVar24[9] = uVar3;
        puVar24[10] = uVar4;
        puVar24[0xb] = uVar5;
        puVar24[0xc] = uVar6;
        puVar24[0xd] = uVar7;
        puVar24[0xe] = uVar8;
        puVar24[0xf] = uVar9;
        puVar24[0x10] = uVar10;
        if (iVar23 == 0) {
          iVar13 = *(int *)(iVar12 + 0x160);
          uVar2 = *(unsigned int *)(iVar12 + 0x13c);
          puVar24[0x11] = *(unsigned int *)(iVar12 + 0x138);
          puVar24[0x12] = uVar2;
          if (iVar13 != 0) {
            uVar2 = *(unsigned int *)(iVar12 + 0x16c);
            uVar3 = *(unsigned int *)(iVar12 + 0x170);
            uVar4 = *(unsigned int *)(iVar12 + 0x174);
            puVar24[0x13] = *(unsigned int *)(iVar12 + 0x168);
            puVar24[0x14] = uVar2;
            puVar24[0x15] = uVar3;
            puVar24[0x16] = uVar4;
          }
          uVar2 = *(unsigned int *)(*piVar22 + 0x178);
          puVar24[0x17] = *(unsigned int *)(*piVar22 + 0x130);
          puVar24[0x18] = uVar2;
        }
        else {
          cVar1 = *(char *)(param_1 + 0xfe);
          uVar2 = *(unsigned int *)(iVar12 + 0xc4);
          uVar3 = *(unsigned int *)(iVar12 + 0x138);
          uVar4 = *(unsigned int *)(iVar12 + 0x13c);
          uVar5 = *(unsigned int *)(iVar12 + 0x178);
          puVar24[0x11] = *(unsigned int *)(iVar12 + 0xc0);
          puVar24[0x12] = uVar2;
          puVar24[0x13] = uVar3;
          puVar24[0x14] = uVar4;
          puVar24[0x15] = uVar5;
          if (cVar1 != '\0') {
            puVar24[0x16] = *(unsigned int *)(*piVar22 + 0x1a0);
          }
          if (*(int *)(*piVar22 + 0x160) != 0) {
            iVar12 = *piVar22;
            uVar2 = *(unsigned int *)(iVar12 + 0x16c);
            uVar3 = *(unsigned int *)(iVar12 + 0x170);
            uVar4 = *(unsigned int *)(iVar12 + 0x174);
            puVar24[0x17] = *(unsigned int *)(iVar12 + 0x168);
            puVar24[0x18] = uVar2;
            puVar24[0x19] = uVar3;
            puVar24[0x1a] = uVar4;
          }
          iVar13 = *piVar22;
          uStack_6d0 = (unsigned __int64)*(int *)(iVar13 + 0x104);
          puVar24[0x1e] = *(unsigned int *)(iVar13 + 0x110);
          iVar12 = *(int *)(iVar13 + 0x108);
          puVar24[0x1d] = *(unsigned int *)(iVar13 + 0x10c);
          puVar24[0x1c] = (float)(__int64)iVar12;
          puVar24[0x1b] = (float)(__int64)uStack_6d0;
          if (iVar23 == 2) {
            iVar12 = *piVar22;
            uVar2 = *(unsigned int *)(iVar12 + 0x40);
            uVar3 = *(unsigned int *)(iVar12 + 0x44);
            uVar4 = *(unsigned int *)(iVar12 + 0x48);
            uVar5 = *(unsigned int *)(iVar12 + 0x4c);
            uVar6 = *(unsigned int *)(iVar12 + 0x50);
            uVar7 = *(unsigned int *)(iVar12 + 0x54);
            puVar24[0x1f] = *(unsigned int *)(iVar12 + 0x3c);
            puVar24[0x20] = uVar2;
            puVar24[0x21] = uVar3;
            puVar24[0x23] = uVar4;
            puVar24[0x24] = uVar5;
            puVar24[0x25] = uVar6;
            puVar24[0x26] = uVar7;
          }
        }
        uVar18 = uVar18 + 1;
        piVar22 = piVar22 + 1;
        puVar24 = puVar24 + iVar26;
      } while (uVar18 < uVar11);
    }
    uStack_6d4 = uStack_6b4;
    fn_826310E0(lbl_8320A898,0x84,&stack_pair_6b0.first,(__int64)(int)uVar11 * (__int64)iVar25 + 1,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((__int64)(int)uVar11 * (__int64)iVar25 + 0x84U & 0xffffffff) >> 2) - 0x21 &
                 0x7f)) >> 0x21);
    uStack_6e0 = (unsigned int)*(unsigned char *)(param_1 + 0xfc);
    uStack_6dc = (unsigned int)*(unsigned char *)(param_1 + 0xfd);
    if ((*(unsigned char *)(param_1 + 0xfc) == 0) && (uStack_6dc == 0)) {
      uStack_6d8 = 1;
    }
    else {
      uStack_6d8 = 0;
    }
    uStack_6d4 = (unsigned int)*(unsigned char *)(param_1 + 0xfe);
    fn_82631290(lbl_8320A898,0,&uStack_6e0,4);
    puVar17 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x5db) = 0;
    puVar17[2] = puVar17[2] | 0x80000;
    fn_82631920(lbl_8320A898,*(unsigned int *)(param_1 + 0x174));
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,*(unsigned int *)(param_1 + 0x178));
  }
  return;
}

