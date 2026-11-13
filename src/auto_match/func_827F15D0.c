extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern int fn_827F05E0();
extern int fn_827F08E8();
extern int fn_827F1250();
extern int fn_827F1B20();
extern int fn_827F1B90();
extern int fn_827F1DB0();
extern int fn_827F1F30();
extern int fn_827F3980();
extern int fn_827F3C20();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern int fn_827F3C58();
extern int fn_827F4010();
extern unsigned int uStack_54;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


/* WARNING: Type propagation algorithm not settling */

void fn_827F15D0(__int64 param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned short *puVar5;
  unsigned int uVar6;
  short sVar12;
  char cVar13;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar3;
  unsigned int ******ppppppuVar10;
  unsigned int uVar11;
  unsigned __int64 uVar4;
  unsigned __int64 uVar14;
  unsigned int *******pppppppuVar16;
  unsigned __int64 uVar15;
  __int64 lVar17;
  __int64 lVar18;
  unsigned short uVar20;
  __int64 lVar19;
  unsigned short *puVar21;
  int iVar22;
  int *piVar23;
  unsigned short auStack_80 [2];
  unsigned int auStack_7c [3];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int *******pppppppuStack_68;
  unsigned int *******pppppppuStack_64;
  unsigned int *******pppppppuStack_60;
  unsigned int *******pppppppuStack_5c;
  unsigned int uStack_54;
  
  iVar1 = (int)param_1;
  if ((*(unsigned short *)(iVar1 + 0xea) >> 1 & 1) == 0) {
    fn_827F08E8();
  }
  *(unsigned short *)(iVar1 + 0xe0) = 0;
  *(unsigned short *)(iVar1 + 0xe2) = 0;
  *(unsigned short *)(iVar1 + 0xe6) = 0;
  *(unsigned short *)(iVar1 + 0xe4) = 1;
  if (*(int *)(iVar1 + 0xf0) != 0xffff) {
    auStack_80[0] = 0xffff;
    uVar20 = *(unsigned short *)(iVar1 + 0xee);
    puVar5 = (unsigned short *)fn_827F1F30(auStack_80 + 1,*(unsigned short *)(iVar1 + 0xe8),auStack_80);
    auStack_80[0] = ~uVar20 & ~*puVar5;
    fn_827F1250(param_1,*(unsigned int *)(iVar1 + 0xf0) & 0xffff,auStack_80,param_1 + 0x20,param_1 + 0xe0,
                  param_1 + 0xe4);
    puVar5 = (unsigned short *)(param_1 + 0xe0);
    *(unsigned short *)(iVar1 + 0xe2) = *puVar5;
    puVar21 = (unsigned short *)(param_1 + 0xe4);
    uVar20 = *puVar21;
    uVar6 = (**(int (***)())(**(int **)(iVar1 + 4) + 4))();
    if ((uVar6 & 0xffff) + 1 <= (unsigned int)uVar20) {
      sVar12 = (**(int (***)())(**(int **)(iVar1 + 4) + 4))();
      uVar20 = sVar12 + 1;
    }
    *puVar21 = uVar20;
    if (auStack_80[0] != 0) {
      uVar14 = (unsigned __int64)*(unsigned short *)(iVar1 + 0xe8);
      while (uVar14 = uVar14 - 1, -1 < (__int64)uVar14) {
        if (((*(unsigned short *)((int)auStack_80 + ((unsigned int)uVar14 >> 3 & 0x1ffe)) >> ((unsigned int)uVar14 & 0xf) &
             1) != 0) && (cVar13 = fn_827F05E0(param_1,uVar14 & 0xffff), cVar13 == '\0')) {
          fn_827F1250(param_1,uVar14 & 0xffff,auStack_80,
                        ((unsigned __int64)*(unsigned short *)(iVar1 + 0xe2) + 8) * 4 + param_1,auStack_80 + 1,
                        auStack_7c);
          *(unsigned short *)(iVar1 + 0xe2) = *(short *)(iVar1 + 0xe2) + auStack_80[1];
        }
      }
    }
    lVar18 = (unsigned __int64)*puVar5 - 1;
    if (-1 < lVar18) {
      lVar17 = ((unsigned __int64)*puVar5 + 7) * 4 + param_1;
      do {
        iVar22 = *puVar5 - 1;
        iVar9 = (int)lVar18;
        if (iVar9 < iVar22) {
          lVar19 = (unsigned __int64)(*puVar5 + 7) * 4 + param_1;
          do {
            uVar20 = *(unsigned short *)lVar17;
            iVar7 = fn_827F3C20(*(unsigned int *)((*(unsigned short *)lVar19 + 0x28) * 4 + iVar1));
            iVar8 = fn_827F3C20(*(unsigned int *)((uVar20 + 0x28) * 4 + iVar1));
            if (iVar8 == iVar7) break;
            iVar22 = iVar22 + -1;
            lVar19 = lVar19 + -4;
          } while (iVar9 < iVar22);
        }
        if (iVar22 == iVar9) {
          *(short *)(iVar1 + 0xe6) = *(short *)(iVar1 + 0xe6) + 1;
        }
        lVar18 = lVar18 + -1;
        lVar17 = lVar17 + -4;
      } while (-1 < lVar18);
    }
  }
  pppppppuStack_68 = &pppppppuStack_68;
  pppppppuStack_60 = &pppppppuStack_68;
  uStack_70 = 0;
  pppppppuStack_64 = &pppppppuStack_68;
  uStack_6c = 0;
  pppppppuStack_5c = &pppppppuStack_68;
  uVar14 = (unsigned __int64)*(unsigned short *)(iVar1 + 0xe8) - 1;
  uStack_54 = 0;
  if (-1 < (__int64)uVar14) {
    lVar18 = ((unsigned __int64)*(unsigned short *)(iVar1 + 0xe8) + 0x27) * 4 + param_1;
    do {
      piVar23 = (int *)lVar18;
      iVar9 = fn_827F4010(*piVar23);
      piVar23[-0x10] = iVar9;
      if ((*(unsigned short *)((((unsigned int)((uVar14 & 0xffffffff) >> 4) & 0xfff) + 0x77) * 2 + iVar1) >>
           ((unsigned int)uVar14 & 0xf) & 1) == 0) {
        uVar3 = fn_827F3C30(*piVar23);
        uVar3 = uVar3 & 0xffff;
joined_r0x827f18c4:
        uVar3 = uVar3 - 1;
        if (-1 < (__int64)uVar3) {
          uVar2 = uVar3 & 0xffff;
          ppppppuVar10 = (unsigned int ******)fn_827F3C48(*piVar23,uVar2);
          pppppppuVar16 = pppppppuStack_60;
          if (pppppppuStack_60 != pppppppuStack_5c) goto LAB_827f18e8;
          goto LAB_827f1908;
        }
        goto LAB_827f1988;
      }
      pppppppuVar16 = pppppppuStack_60;
      if (pppppppuStack_60 == pppppppuStack_5c) {
LAB_827f1898:
        uStack_54 = uStack_54 + 1;
        fn_827F1DB0(&uStack_70,pppppppuStack_5c,lVar18);
      }
      else {
        do {
          if (*pppppppuVar16 == (unsigned int ******)*piVar23) break;
          pppppppuVar16 = (unsigned int *******)pppppppuVar16[2];
        } while (pppppppuVar16 != pppppppuStack_5c);
        if (pppppppuVar16 == pppppppuStack_5c) goto LAB_827f1898;
      }
LAB_827f1988:
      uVar14 = uVar14 - 1;
      lVar18 = lVar18 + -4;
    } while (-1 < (__int64)uVar14);
  }
  uVar6 = uStack_54;
  uVar11 = fn_827F3C30(param_1);
  if (uVar6 != (uVar11 & 0xffff)) {
    fn_827F3980(param_1,uStack_54 & 0xffff,0);
  }
  while (pppppppuStack_60 != pppppppuStack_5c) {
    uStack_54 = uStack_54 - 1;
    uVar4 = fn_827F1B90(&uStack_70,pppppppuStack_5c[1]);
    fn_827F3C58(param_1,uStack_54 & 0xffff,uVar4);
  }
  *(unsigned short *)(iVar1 + 0xea) = *(unsigned short *)(iVar1 + 0xea) | 1;
  fn_827F1B20();
  return;
LAB_827f18e8:
  do {
    if (*pppppppuVar16 == ppppppuVar10) break;
    pppppppuVar16 = (unsigned int *******)pppppppuVar16[2];
  } while (pppppppuVar16 != pppppppuStack_5c);
  if (pppppppuVar16 == pppppppuStack_5c) {
LAB_827f1908:
    iVar9 = fn_827F3C48(*piVar23,uVar2);
    uVar15 = (unsigned __int64)*(unsigned short *)(iVar1 + 0xe8) - 1;
    if (-1 < (__int64)uVar15) {
      lVar17 = ((unsigned __int64)*(unsigned short *)(iVar1 + 0xe8) + 0x27) * 4 + param_1;
      do {
        if (*(int *)lVar17 == iVar9) {
          uVar15 = uVar15 & 0xffff;
          goto LAB_827f1948;
        }
        uVar15 = uVar15 - 1;
        lVar17 = lVar17 + -4;
      } while (-1 < (__int64)uVar15);
    }
    uVar15 = 0xffff;
LAB_827f1948:
    if (uVar15 == 0xffff) {
      auStack_7c[0] = fn_827F3C48(*piVar23,uVar2);
      uStack_54 = uStack_54 + 1;
      fn_827F1DB0(&uStack_70,pppppppuStack_5c,auStack_7c);
    }
  }
  goto joined_r0x827f18c4;
}

