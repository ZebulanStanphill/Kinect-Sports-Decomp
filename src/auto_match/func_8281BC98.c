extern unsigned int *auStack_270;
extern unsigned int *auStack_274;
extern int fn_8281B838();
extern int fn_828222B8();
extern int fn_828222C8();
extern int fn_82822608();
extern int fn_82822650();
extern int fn_828226F0();
extern int fn_82822728();
extern int fn_82822778();
extern int fn_82822798();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_8201EAB4;
extern unsigned int lbl_8320A754;
extern unsigned int lbl_8320A758;
extern unsigned int lbl_8320A764;
extern unsigned int stack0x00000000;
extern unsigned int uStack_278;
extern unsigned int uStack_27d;
extern unsigned int uStack_27e;
extern unsigned int uStack_27f;
extern unsigned int uStack_280;


unsigned __int64 fn_8281BC98(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int uVar2;
  int (**pcVar3)();
  unsigned int uVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  int *piVar9;
  unsigned int uVar10;
  char *pcVar11;
  char *pcVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned char uStack_280;
  unsigned char uStack_27f;
  unsigned char uStack_27e;
  unsigned char uStack_27d;
  unsigned char *puStack_27c;
  unsigned int uStack_278;
  unsigned char auStack_274 [4];
  unsigned char auStack_270 [16];
  int aiStack_260 [63];
  char cStack_161;
  char acStack_160 [352];
  
  iVar7 = 0;
  if ((*(unsigned int *)(param_1 + 0xc) & 8) != 0) {
    fn_828226F0(&stack0x00000000 + -0x160,0x101);
  }
  if ((*(unsigned int *)(param_1 + 0xc) & 0x80) != 0) {
    lbl_8320A764 = lbl_8320A764 + 1;
    fn_82822728(&stack0x00000000 + -0x260,0x40);
  }
  lbl_8320A764 = 0;
  if ((*(unsigned int *)(param_1 + 0xc) & 0x100) == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = fn_82822778();
    uVar4 = fn_82822798();
  }
  fn_82822608(&stack0x00000000 + -0x27e,&stack0x00000000 + -0x280,&stack0x00000000 + -0x27f,
                  &stack0x00000000 + -0x27d);
  fn_82822650(&stack0x00000000 + -0x27c,&stack0x00000000 + -0x278);
  uVar14 = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  uVar15 = param_2;
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
    uVar14 = *(unsigned int *)(param_1 + 0x78);
    uVar15 = ((unsigned __int64)uVar14 & 0x7fffffff) * 2 + param_2;
  }
  uVar5 = (*(int (**)())**(unsigned int **)(param_1 + 0x10))(param_1,uVar15,uVar14);
  if (uVar5 == 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    goto LAB_8281c098;
  }
  uVar14 = (unsigned int)param_2;
  if (*(int *)(param_1 + 0x4c) == 0) {
    pcVar3 = *(int (***)())(*(int *)(param_1 + 0x10) + 0x14);
    if (pcVar3 != (int (**)())0x0) goto LAB_8281bf3c;
  }
  else {
    iVar8 = 0;
    piVar9 = (int *)(&stack0x00000000 + -0x260);
    uVar13 = 0;
    do {
      uVar10 = uVar13;
      uVar13 = uVar10 + 4;
      if (*piVar9 == 0) break;
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < 0x40);
    uVar13 = -(unsigned int)(uVar10 != 0) & uVar13;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 0) {
      pcVar11 = &stack0x00000000 + -0x160;
      pcVar12 = pcVar11;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      lbl_8320A764 = lbl_8320A764 + 1;
      pcVar12 = pcVar12 + (uVar13 - (int)pcVar11) + 0x34;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x1;
      }
      iVar7 = fn_8281BC98(*(int *)(param_1 + 0x4c),pcVar12);
      if (iVar7 != 0) {
        iVar8 = iVar7 + 0x34;
        *(unsigned char *)(iVar7 + 0x10) = uStack_27e;
        *(unsigned char *)(iVar7 + 0x11) = uStack_280;
        *(unsigned char *)(iVar7 + 0x12) = uStack_27f;
        *(unsigned char *)(iVar7 + 0x13) = uStack_27d;
        if (puStack_27c == (unsigned char *)0x0) {
          puStack_27c = &lbl_8201EAB4;
        }
        *(unsigned char **)(iVar7 + 0x1c) = puStack_27c;
        *(unsigned int *)(iVar7 + 0x20) = uStack_278;
        *(unsigned int *)(iVar7 + 0x14) = *(unsigned int *)(param_1 + 0x5c);
        uVar2 = *(unsigned int *)(param_1 + 0x60);
        *(unsigned int *)(iVar7 + 0xc) = uVar6;
        *(unsigned int *)(iVar7 + 0x30) = uVar14;
        *(unsigned int *)(iVar7 + 0x18) = uVar2;
        if (uVar13 == 0) {
          *(unsigned int *)(iVar7 + 0x28) = 0;
        }
        else {
          *(int *)(iVar7 + 0x28) = iVar8;
          fn_82F68CC0(iVar8,&stack0x00000000 + -0x260,uVar13);
          iVar8 = iVar8 + uVar13;
        }
        pcVar12 = &stack0x00000000 + -0x161;
        *(int *)(iVar7 + 0x24) = iVar8;
        pcVar11 = (char *)(iVar8 + -1);
        do {
          pcVar12 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar11 = pcVar11 + 1;
          *pcVar11 = cVar1;
        } while (cVar1 != '\0');
        fn_828222B8(iVar7);
        if ((uVar4 & 0xffffffff) == 0) {
          *(unsigned char *)(iVar7 + 8) = 0;
        }
        else {
          fn_828222C8(uVar4,iVar7);
          *(unsigned char *)(iVar7 + 8) = 1;
        }
      }
      pcVar3 = *(int (***)())(*(int *)(param_1 + 0x10) + 0x14);
LAB_8281bf3c:
      (*pcVar3)(param_1,uVar5,iVar7);
    }
  }
  if (((*(unsigned int *)(param_1 + 0xc) & 2) != 0) && ((*(unsigned int *)(param_1 + 0xc) & 0x20) != 0)) {
    fn_8281B838(uVar5,uVar15,0xee,&stack0x00000000 + -0x274,&stack0x00000000 + -0x270);
  }
  if (iVar7 != 0) {
    *(unsigned int *)(iVar7 + 0x2c) = (unsigned int)uVar5;
  }
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar5,0xbb,*(unsigned int *)(param_1 + 0x78));
  }
  if ((*(unsigned int *)(param_1 + 0xc) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar5,0xcc,param_2);
  }
  uVar13 = *(unsigned int *)(param_1 + 0x50);
  if ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x50)) {
    uVar13 = (unsigned int)uVar5;
  }
  *(unsigned int *)(param_1 + 0x50) = uVar13;
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x54);
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x54) < (uVar5 & 0xffffffff)) {
    uVar4 = uVar5;
  }
  *(int *)(param_1 + 0x54) = (int)uVar4;
  iVar7 = *(int *)(param_1 + 0x34) - uVar14;
  *(int *)(param_1 + 0x34) = iVar7;
  *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uVar14;
  if ((*(unsigned int *)(param_1 + 0xc) & 4) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x78) * 2;
    *(int *)(param_1 + 0x34) = iVar7 + *(int *)(param_1 + 0x78) * -2;
  }
  uVar13 = *(int *)(param_1 + 0x3c) + 1;
  *(unsigned int *)(param_1 + 0x3c) = uVar13;
  if (uVar13 <= *(unsigned int *)(param_1 + 0x40)) {
    uVar13 = *(unsigned int *)(param_1 + 0x40);
  }
  *(unsigned int *)(param_1 + 0x40) = uVar13;
  uVar13 = *(unsigned int *)(param_1 + 0x44);
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x44)) {
    uVar13 = uVar14;
  }
  *(unsigned int *)(param_1 + 0x44) = uVar13;
  uVar13 = *(unsigned int *)(param_1 + 0x48);
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x48) < (param_2 & 0xffffffff)) {
    uVar13 = uVar14;
  }
  *(unsigned int *)(param_1 + 0x48) = uVar13;
LAB_8281c098:
  if ((uVar5 & 0xffffffff) == 0) {
    if (*(int (***)())(param_1 + 0x18) != (int (**)())0x0) {
      uVar5 = (**(int (***)())(param_1 + 0x18))(param_1,param_2);
    }
  }
  else if (*(int (***)())(param_1 + 0x14) != (int (**)())0x0) {
    uVar5 = (**(int (***)())(param_1 + 0x14))(param_1,uVar5,param_2);
  }
  lbl_8320A754 = 0;
  lbl_8320A758 = 0;
  return uVar5;
}

