extern int fn_82E85CF0();
extern int fn_82E97EA0();
extern int fn_82E9B280();
extern int fn_82F07788();
extern int fn_82F0F9A0();
extern int fn_82F26618();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8215F7F0;
extern unsigned int lbl_83248EB4;
extern unsigned int lbl_83248EB8;
extern unsigned int lbl_83248EBC;


void fn_82E98148(void)

{
  unsigned int uVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned short *puVar8;
  unsigned int uVar10;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  unsigned int uVar12;
  double *pdVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  __int64 lStack_a0;
  
  iVar5 = fn_82F6A548();
  *(unsigned int *)(iVar5 + 0x1e94) = 4;
  *(unsigned int *)(iVar5 + 0x904) = 1;
  *(int *)(iVar5 + 0x4b1c) = *(int *)(iVar5 + 0x588) << 4;
  fn_82E97EA0(iVar5,*(unsigned int *)(iVar5 + 0x1fa8));
  if (*(int *)(iVar5 + 0xaf0) == 1) {
    uVar11 = *(unsigned int *)(iVar5 + 0x5158);
  }
  else {
    uVar11 = *(unsigned int *)(iVar5 + 0x515c);
  }
  *(unsigned int *)(iVar5 + 0x5154) = uVar11;
  if (*(int *)(iVar5 + 0x6d74) == 0) {
    iVar6 = *(int *)(iVar5 + 0x588);
  }
  else {
    iVar6 = *(int *)(iVar5 + 0x6f14);
  }
  *(int *)(iVar5 + 0x4b20) = iVar6 << 2;
  fn_82F0F9A0(iVar5,6);
  fn_82F07788(iVar5,((unsigned __int64)*(unsigned int *)(iVar5 + 0x2d0) + 4 & 0x3fffffff) << 2);
  if (*(int *)(iVar5 + 0xaf0) == 2) {
    if ((*(int *)(iVar5 + 0x89c) == 0) || (*(int *)(iVar5 + 0x89c) == 1)) {
      *(unsigned int *)(iVar5 + 0x89c) = 1;
    }
    else {
      *(unsigned int *)(iVar5 + 0x89c) = 3;
    }
  }
  uVar11 = *(unsigned int *)(iVar5 + 0x7b2c);
  if (*(int *)(iVar5 + 0x6d74) != 0) {
    *(unsigned int *)(iVar5 + 0x7b2c) = 0;
    if (*(int *)(iVar5 + 0x594) == 0) {
      uVar12 = *(unsigned int *)(iVar5 + 0x201c);
    }
    else {
      uVar12 = *(unsigned int *)(iVar5 + 0x2020);
    }
    *(unsigned int *)(iVar5 + 0x2010) = uVar12;
  }
  fn_82F0F9A0(iVar5,10);
  *(unsigned int *)(iVar5 + 0x4c00) = *(unsigned int *)(iVar5 + 0x4c00) >> 2;
  if (*(int *)(iVar5 + 0x6d74) != 0) {
    *(unsigned int *)(iVar5 + 0x7b2c) = uVar11;
    if (*(int *)(iVar5 + 0x594) == 0) {
      uVar11 = *(unsigned int *)(iVar5 + 0x2014);
    }
    else {
      uVar11 = *(unsigned int *)(iVar5 + 0x2018);
    }
    *(unsigned int *)(iVar5 + 0x2010) = uVar11;
  }
  if (*(int *)(iVar5 + 0xaf0) != 1) goto LAB_82e984a4;
  uVar10 = 0;
  uVar1 = *(unsigned int *)(iVar5 + 0x658);
  if (*(int *)(iVar5 + 0x6d5c) == 0) {
    dVar20 = lbl_82005710;
    dVar21 = lbl_82005710;
    dVar22 = lbl_82005710;
    if (uVar1 != 0) {
      pdVar13 = (double *)(iVar5 + 0x7e0);
      do {
        uVar10 = uVar10 + 1;
        pdVar2 = pdVar13 + 0x78;
        dVar21 = pdVar13[0x77] + dVar21;
        pdVar13 = pdVar13 + 0x79;
        dVar22 = *pdVar2 + dVar22;
        dVar20 = *pdVar13 + dVar20;
      } while (uVar10 < *(unsigned int *)(iVar5 + 0x658));
    }
    uVar1 = *(unsigned int *)(iVar5 + 0x68c);
    if ((uVar1 & 1) == 0) {
      dVar21 = lbl_8215F7F0;
    }
    if ((uVar1 & 2) == 0) {
      dVar22 = lbl_8215F7F0;
    }
    if ((uVar1 & 4) == 0) {
      dVar20 = lbl_8215F7F0;
    }
    if (dVar22 <= dVar21) {
      if (dVar22 < dVar20) {
        *(unsigned int *)(iVar5 + 0x89c) = 2;
        lbl_83248EB8 = lbl_83248EB8 + 1;
        goto LAB_82e984a4;
      }
    }
    else if (dVar21 < dVar20) {
      *(unsigned int *)(iVar5 + 0x89c) = 1;
      lbl_83248EB4 = lbl_83248EB4 + 1;
      goto LAB_82e984a4;
    }
    *(unsigned int *)(iVar5 + 0x89c) = 3;
    lbl_83248EBC = lbl_83248EBC + 1;
    goto LAB_82e984a4;
  }
  dVar20 = lbl_82005710;
  dVar21 = lbl_82005710;
  dVar22 = lbl_82005710;
  dVar23 = lbl_82005710;
  if (uVar1 != 0) {
    pdVar13 = (double *)(iVar5 + 0x7e0);
    do {
      uVar10 = uVar10 + 1;
      dVar20 = pdVar13[0x76] + dVar20;
      pdVar2 = pdVar13 + 0x78;
      dVar22 = pdVar13[0x77] + dVar22;
      pdVar13 = pdVar13 + 0x79;
      dVar23 = *pdVar2 + dVar23;
      dVar21 = *pdVar13 + dVar21;
    } while (uVar10 < uVar1);
  }
  uVar1 = *(unsigned int *)(iVar5 + 0x68c);
  if ((uVar1 & 1) == 0) {
    dVar22 = lbl_8215F7F0;
  }
  if ((uVar1 & 2) == 0) {
    dVar23 = lbl_8215F7F0;
  }
  if ((uVar1 & 4) == 0) {
    dVar21 = lbl_8215F7F0;
  }
  if (*(int *)(iVar5 + 0x6d74) == 0) {
    iVar6 = fn_82E9B280(iVar5);
    iVar6 = iVar6 * *(int *)(iVar5 + 0x588) * 2;
  }
  else {
    iVar6 = fn_82E9B280(iVar5);
    iVar6 = iVar6 * *(int *)(iVar5 + 0x6f14);
  }
  lStack_a0 = (__int64)iVar6;
  dVar20 = (double)lStack_a0 + dVar20;
  if (dVar22 <= dVar20) {
    if (dVar23 <= dVar22) goto LAB_82e983b8;
    if (dVar22 < dVar21) {
      *(unsigned int *)(iVar5 + 0x89c) = 1;
      goto LAB_82e984a4;
    }
  }
  else if (dVar23 <= dVar20) {
LAB_82e983b8:
    if (dVar23 < dVar21) {
      *(unsigned int *)(iVar5 + 0x89c) = 2;
      goto LAB_82e984a4;
    }
  }
  else if (dVar20 < dVar21) {
    *(unsigned int *)(iVar5 + 0x89c) = 0;
    goto LAB_82e984a4;
  }
  *(unsigned int *)(iVar5 + 0x89c) = 3;
LAB_82e984a4:
  if (*(int *)(iVar5 + 0xaf0) != 1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(iVar5 + 0x1a88),0,*(unsigned int *)(iVar5 + 0x2d8));
  }
  iVar6 = *(int *)(iVar5 + 0x89c);
  if (iVar6 == 0) {
    iVar6 = (((unsigned __int64)(lStack_a0) >> 0) & 0xFFFFFFFF);
  }
  else {
    *(unsigned int *)(iVar5 + 0x4c00) = 0;
    if ((iVar6 == 1) || (*(int *)(iVar5 + 0x680) == 0)) {
      lStack_a0 = ((((unsigned __int64)(lStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(*(int *)(iVar5 + 0x1d6c))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      iVar6 = *(int *)(iVar5 + 0x1d70);
    }
    else if (iVar6 == 2) {
      lStack_a0 = ((((unsigned __int64)(lStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(*(int *)(iVar5 + 0x1d7c))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      iVar6 = *(int *)(iVar5 + 0x1d80);
    }
    else {
      lStack_a0 = ((((unsigned __int64)(lStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(*(int *)(iVar5 + 0x1d74))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      iVar6 = *(int *)(iVar5 + 0x1d78);
    }
  }
  lVar15 = 0;
  uVar18 = 0;
  if (0 < *(int *)(iVar5 + 0x2d4)) {
    do {
      lVar17 = 0;
      if (0 < *(int *)(iVar5 + 0x2d0)) {
        lVar14 = uVar18 * 0x114;
        lVar16 = (uVar18 & 0x1fffffff) << 3;
        lVar19 = (uVar18 & 0x7fffffff) << 1;
        do {
          uVar9 = (((__int64)(int)lVar15 * (__int64)*(int *)(iVar5 + 0x2d0) & 0x7fffffffU) * 2 +
                   lVar17 & 0x7fffffff) * 2;
          if (*(int *)(iVar5 + 0x89c) == 0) {
            uVar7 = 1;
            if (*(char *)(*(int *)(iVar5 + 0x1a88) + (int)uVar18) != '\0') {
              uVar7 = 0;
            }
LAB_82e986e4:
            fn_82F26618(iVar5,lVar17,lVar15,uVar7);
          }
          else {
            iVar3 = (int)lVar19;
            *(unsigned char *)(*(int *)(iVar5 + 0x1a88) + (int)uVar18) = 0;
            iVar4 = (int)((uVar9 & 0x7fffffff) << 1);
            *(unsigned short *)(iVar4 + *(int *)(iVar5 + 0x9f0)) =
                 *(unsigned short *)((((unsigned __int64)(lStack_a0) >> 0) & 0xFFFFFFFF) + iVar3);
            *(unsigned short *)
             ((int)((((unsigned __int64)*(unsigned int *)(iVar5 + 0x2d0) & 0x7fffffff) * 2 + uVar9 & 0xffffffff) <<
                   1) + *(int *)(iVar5 + 0x9f0)) = *(unsigned short *)(*(int *)(iVar5 + 0x9f0) + iVar4);
            puVar8 = (unsigned short *)
                     ((int)((((unsigned __int64)*(unsigned int *)(iVar5 + 0x2d0) & 0x7fffffff) * 2 + uVar9 &
                            0xffffffff) << 1) + *(int *)(iVar5 + 0x9f0));
            puVar8[1] = *puVar8;
            *(unsigned short *)(*(int *)(iVar5 + 0x9f0) + iVar4 + 2) =
                 *(unsigned short *)
                  ((int)((((unsigned __int64)*(unsigned int *)(iVar5 + 0x2d0) & 0x7fffffff) * 2 + uVar9 + 1 &
                         0xffffffff) << 1) + *(int *)(iVar5 + 0x9f0));
            *(unsigned short *)(iVar4 + *(int *)(iVar5 + 0x9f4)) = *(unsigned short *)(iVar3 + iVar6);
            *(unsigned short *)
             ((int)((((unsigned __int64)*(unsigned int *)(iVar5 + 0x2d0) & 0x7fffffff) * 2 + uVar9 & 0xffffffff) <<
                   1) + *(int *)(iVar5 + 0x9f4)) = *(unsigned short *)(*(int *)(iVar5 + 0x9f4) + iVar4);
            puVar8 = (unsigned short *)
                     ((int)((((unsigned __int64)*(unsigned int *)(iVar5 + 0x2d0) & 0x7fffffff) * 2 + uVar9 &
                            0xffffffff) << 1) + *(int *)(iVar5 + 0x9f4));
            puVar8[1] = *puVar8;
            *(unsigned short *)(*(int *)(iVar5 + 0x9f4) + iVar4 + 2) =
                 *(unsigned short *)
                  ((int)((((unsigned __int64)*(unsigned int *)(iVar5 + 0x2d0) & 0x7fffffff) * 2 + uVar9 + 1 &
                         0xffffffff) << 1) + *(int *)(iVar5 + 0x9f4));
            if (*(short *)(iVar4 + *(int *)(iVar5 + 0x9f0)) != 0x4000) {
              uVar7 = 1;
              goto LAB_82e986e4;
            }
            *(unsigned short *)(*(int *)(iVar5 + 0x9f8) + iVar3) = 0x4000;
            *(unsigned short *)(*(int *)(iVar5 + 0x9fc) + iVar3) = 0x4000;
            if ((0 < *(int *)(iVar5 + 0x84c)) && (*(int *)(iVar5 + 0xaf0) == 1)) {
              *(unsigned short *)(*(int *)(iVar5 + 0xaec) + (int)lVar16) = 0;
              *(unsigned short *)(*(int *)(iVar5 + 0xaec) + (int)lVar16 + 2) = 0;
              *(unsigned int *)(*(int *)(iVar5 + 0x1e6c) + (int)lVar14 + 0x54) = 3;
              fn_82F26618(iVar5,lVar17,lVar15,1);
            }
            *(int *)(iVar5 + 0x4c00) = *(int *)(iVar5 + 0x4c00) + 1;
          }
          lVar17 = lVar17 + 1;
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + 2;
          lVar16 = lVar16 + 8;
          lVar14 = lVar14 + 0x114;
        } while ((int)lVar17 < *(int *)(iVar5 + 0x2d0));
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < *(int *)(iVar5 + 0x2d4));
  }
  if (*(unsigned int *)(iVar5 + 0x4c04) < *(unsigned int *)(iVar5 + 0x4c00)) {
    *(unsigned int *)(iVar5 + 0x1be4) = 1;
  }
  if ((*(int *)(iVar5 + 0xaf0) == 1) && (*(int *)(iVar5 + 0x1be4) == 0)) {
    fn_82E85CF0(iVar5,iVar5 + 0x7618);
  }
  fn_82F6A594(*(unsigned int *)(iVar5 + 0x4c00));
  return;
}

