typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ACA638();
extern unsigned int lbl_820D7B2B;


void fn_82B81D80(unsigned int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  bool bVar8;
  int iVar9;
  char cVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int *puVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  
  uVar18 = *(unsigned int *)(param_1 + 8);
  uVar17 = uVar18 >> 1 & 0xf;
  uVar16 = uVar18 >> 7 & 0x7f;
  uVar6 = param_2 & 0xf;
  bVar1 = "SV_Depth"[uVar17 + 0xb];
  uVar20 = (((param_3 >> (bVar1 >> 5 & 0x3e) & 3) << 2 | param_3 >> (bVar1 >> 3 & 6) & 3) << 2 |
           param_3 >> (bVar1 >> 1 & 6) & 3) << 2 | param_3 >> ((bVar1 & 3) << 1) & 3;
  if ((uVar16 < 0x60) || (bVar8 = true, 0x66 < uVar16)) {
    bVar8 = false;
  }
  if (bVar8) {
    uVar12 = 0;
    uVar11 = 0;
    uVar14 = 0xe4;
    if (uVar16 == 0x60) {
      iVar9 = fn_82ABDD90(*(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x60,
                           uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
      uVar14 = *(unsigned int *)(iVar9 + param_1 + -8);
      uVar12 = uVar14 >> 0xc & 0xf;
      uVar11 = uVar14 >> 8 & 0xf;
      uVar14 = uVar14 >> 0x11 & 0xff;
    }
    else {
      if (((uVar16 == 0x61) || (uVar16 == 99)) || (bVar8 = false, uVar16 == 100)) {
        bVar8 = true;
      }
      if (bVar8) {
        iVar9 = fn_82ABDD90(*(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94),uVar16,
                             uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
        iVar9 = iVar9 + (param_1 - 0x18);
        uVar11 = *(unsigned int *)(iVar9 + 0xc);
        uVar14 = (unsigned int)*(unsigned char *)(iVar9 + 0xe);
        uVar12 = uVar11 >> 4 & 0xf;
        uVar11 = uVar11 & 0xf;
      }
    }
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    for (; uVar17 != 0; uVar17 = uVar17 - (uVar17 & ~(uVar17 - 1))) {
      uVar19 = 0x1f - LZCOUNT(uVar17 & ~(uVar17 - 1));
      uVar5 = (unsigned int)((uVar19 & 0xffffffff) << 1);
      uVar4 = 1 << ((unsigned int)uVar19 & 0x3f);
      uVar7 = uVar20 >> (uVar5 & 0x3e) & 3;
      uVar23 = (uVar14 >> (uVar5 & 0x3e) & 3) << (uVar7 << 1) | uVar23 & ~(3 << (uVar7 << 1));
      if ((uVar4 & uVar12) != 0) {
        uVar21 = (unsigned __int64)(unsigned int)(1 << uVar7);
      }
      if ((uVar4 & uVar11) != 0) {
        uVar22 = (unsigned __int64)(unsigned int)(1 << uVar7);
      }
    }
    if (uVar16 == 0x60) {
      iVar9 = fn_82ABDD90(*(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x60,
                           uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
      iVar9 = iVar9 + (param_1 - 0x14);
      uVar18 = (unsigned int)(((((unsigned __int64)uVar23 & 0xff) << 5 | uVar21 & 0xf) << 4 |
                      uVar22 & 0xffffffff0000000f) << 8) | *(unsigned int *)(iVar9 + 0xc) & 0xfe0100ff;
    }
    else {
      if (((uVar16 == 0x61) || (uVar16 == 99)) || (bVar8 = false, uVar16 == 100)) {
        bVar8 = true;
      }
      uVar2 = *(unsigned int *)(*(int *)(param_1 & 0xfffff000) + 0x94);
      if (!bVar8) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(uVar2,0xdac,0xffffffff820dbec8);
      }
      iVar9 = fn_82ABDD90(uVar2,uVar16,uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
      iVar9 = iVar9 + (param_1 - 0x18);
      *(char *)(iVar9 + 0xe) = (char)uVar23;
      uVar18 = (unsigned int)uVar22 & 0xf | (unsigned int)(uVar21 << 4) & 0xf0 | *(unsigned int *)(iVar9 + 0xc) & 0xffffff00
      ;
    }
    *(unsigned int *)(iVar9 + 0xc) = uVar18;
  }
  else if (uVar20 != 0xe4) {
    cVar10 = fn_82ACA638(param_1);
    if (cVar10 != '\0') {
      bVar1 = "SV_Depth"[(int)uVar6 + 0xb];
      uVar22 = ((0x8da691691448U >> uVar6) >> uVar6) >> uVar6;
      uVar21 = uVar22 & 7;
      uVar18 = 0;
      iVar9 = 0;
      if (uVar21 != 0) {
        uVar16 = 0;
        do {
          iVar13 = (((((bVar1 >> (param_3 >> 5 & 6) & 3) << 2 | bVar1 >> (param_3 >> 3 & 6) & 3) <<
                      2 | bVar1 >> (param_3 >> 1 & 6) & 3) << 2 | bVar1 >> ((param_3 & 3) << 1) & 3)
                    >> (uVar16 & 0x3f) & 3) << 1;
          uVar16 = uVar16 + 2;
          uVar11 = iVar9 << iVar13;
          iVar9 = iVar9 + 1;
          uVar18 = uVar18 & ~(3 << iVar13) | uVar11;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar15 = (unsigned int *)(param_1 + 0x2c);
      bVar1 = (&lbl_820D7B2B)[uVar17];
      for (uVar17 = 0; uVar17 < (*(unsigned int *)(param_1 + 8) >> 0x13 & 7); uVar17 = uVar17 + 1) {
        puVar3 = (unsigned int *)*puVar15;
        if ((*puVar3 & 0xe000000) != 0) {
          uVar16 = *puVar3 >> 5 & 0xff;
          *puVar3 = (unsigned int)((((((unsigned __int64)(uVar16 >> ((bVar1 >> (uVar18 >> 5 & 6) & 3) << 1)) & 3 |
                              (uVar22 & 7) << 0xe) << 2 |
                             (unsigned __int64)(uVar16 >> ((bVar1 >> (uVar18 >> 3 & 6) & 3) << 1)) &
                             0xffffffff00000003) << 2 |
                            (unsigned __int64)(uVar16 >> ((bVar1 >> (uVar18 >> 1 & 6) & 3) << 1)) &
                            0xffffffff00000003) << 2 |
                           (unsigned __int64)(uVar16 >> ((bVar1 >> ((uVar18 & 3) << 1) & 3) << 1)) &
                           0xffffffff00000003) << 5) | *puVar3 & 0xf1ffe01f;
        }
        puVar15 = puVar15 + 1;
      }
    }
  }
  for (puVar3 = *(unsigned int **)(param_1 + 4); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
    uVar18 = *puVar3;
    if ((uVar18 & 0xe000000) != 0) {
      if (uVar20 != 0xe4) {
        *puVar3 = ((((uVar20 >> (uVar18 >> 10 & 6) & 3) << 2 | uVar20 >> (uVar18 >> 8 & 6) & 3) << 2
                   | uVar20 >> (uVar18 >> 6 & 6) & 3) << 2 | uVar20 >> (uVar18 >> 4 & 6) & 3) << 5 |
                  uVar18 & 0xffffe01f;
      }
      *puVar3 = (unsigned int)((param_2 & 0xffffffff) << 0xd) & 0x1ffe000 | 0x40000000 |
                *puVar3 & 0xfe001fff;
    }
  }
  *(unsigned int *)(param_1 + 8) = (unsigned int)(uVar6 << 1) | *(unsigned int *)(param_1 + 8) & 0xffffffe1;
  return;
}

