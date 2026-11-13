extern int fn_82975B00();
extern int fn_82996970();
extern unsigned int lbl_8315BE90;
extern unsigned int lbl_8315BEA0;


unsigned __int64 fn_82999808(unsigned __int64 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = *(int *)((int)param_1 + 0xc);
  uVar8 = 0;
  if (iVar15 == 0) {
LAB_82999970:
    uVar7 = 0;
    if (iVar15 != 0) {
      iVar15 = (int)param_1;
      piVar5 = *(int **)(iVar15 + 0x18);
      do {
        *(unsigned int *)(iVar15 + 0x100) = uVar7;
        piVar1 = (int *)*piVar5;
        *(int **)(iVar15 + 0x104) = piVar1;
        if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (uVar9 = 0, piVar1[1] != 0)) {
          iVar14 = 0;
          do {
            iVar4 = *(int *)(*(int *)(piVar1[2] + iVar14) * 4 + *(int *)(iVar15 + 0x14));
            if ((*(int *)(iVar4 + 4) == *(int *)(iVar15 + 0x80)) &&
               (*(char *)(iVar4 + 0x6f) == '\x05')) {
              fn_82975B00(param_1,piVar1[0xf],0x11a0,0xffffffff82050e84);
              goto LAB_82999a84;
            }
            uVar9 = uVar9 + 1;
            iVar14 = iVar14 + 4;
          } while (uVar9 < *(unsigned int *)(*(int *)(iVar15 + 0x104) + 4));
        }
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar7 < *(unsigned int *)(iVar15 + 0xc));
    }
    uVar3 = 0;
  }
  else {
    iVar14 = *(int *)((int)param_1 + 0x18);
    lVar10 = 0;
    uVar6 = 0x11000000;
LAB_82999838:
    iVar4 = (int)param_1;
    *(int *)(iVar4 + 0x100) = (int)uVar8;
    puVar11 = *(unsigned int **)((int)lVar10 + iVar14);
    *(unsigned int **)(iVar4 + 0x104) = puVar11;
    if ((puVar11 == (unsigned int *)0x0) || (uVar7 = *puVar11, uVar7 == 0)) {
LAB_8299995c:
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 4;
      if ((unsigned __int64)*(unsigned int *)((int)param_1 + 0xc) <= (uVar8 & 0xffffffff)) goto LAB_82999970;
      goto LAB_82999838;
    }
    uVar13 = (unsigned __int64)uVar7 & 0xfff00000;
    uVar12 = (unsigned __int64)uVar7 & 0xfffff;
    if (0x60c00000 < uVar13) {
      if (uVar13 == 0x60d00000) {
        iVar15 = 2;
      }
      else {
        if (uVar13 == 0x61100000) {
          iVar15 = 3;
          goto LAB_829998b8;
        }
        if (uVar13 != 0x61200000) goto LAB_829998e4;
        iVar15 = 3;
      }
      goto LAB_82999a48;
    }
    if (uVar13 == 0x60c00000) {
      iVar15 = 2;
LAB_829998b8:
      iVar14 = 1;
    }
    else {
      if (uVar13 == 0x60200000) {
        iVar15 = 0;
        goto LAB_829998b8;
      }
      if (uVar13 != 0x60300000) {
        if (uVar13 == 0x60700000) {
          if (*(short *)(iVar4 + 0xca) != 0x104) {
            iVar15 = 1;
            goto LAB_829998b8;
          }
        }
        else if (uVar13 == 0x60800000) {
          iVar15 = 1;
          goto LAB_82999a48;
        }
LAB_829998e4:
        iVar4 = fn_82996970(uVar13);
        if ((iVar4 == 0) && ((uVar13 & 0xffffffff) != (uVar6 & 0xffffffff))) goto LAB_8299995c;
        iVar2 = (int)param_1;
        iVar4 = *(int *)(*(int *)(puVar11[2] +
                                 (int)((-(unsigned __int64)(uVar6 != uVar13) & uVar12 & 0xffffffff) << 2))
                         * 4 + *(int *)(iVar2 + 0x14));
        if (*(int *)(iVar4 + 0x3c) != 0) {
          if (((*(unsigned int *)(iVar2 + 200) & 0xffff) != 0x104) &&
             ((*(unsigned int *)(*(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(iVar2 + 0x10)) + 4) & 0x10) !=
              0)) {
            fn_82975B00(param_1,puVar11[0xf],0x11b4,0xffffffff82050ec4,
                          *(unsigned int *)(iVar2 + 200) & 0xff);
            goto LAB_82999a84;
          }
        }
        goto LAB_8299995c;
      }
      iVar15 = 0;
LAB_82999a48:
      iVar14 = 0;
    }
    fn_82975B00(param_1,puVar11[0xf],0x11b4,0xffffffff82050ef4,(&lbl_8315BE90)[iVar15],
                  (&lbl_8315BEA0)[iVar14],*(unsigned char *)(iVar4 + 0xcb));
LAB_82999a84:
    uVar3 = 0xffffffff80004005;
  }
  return uVar3;
}

