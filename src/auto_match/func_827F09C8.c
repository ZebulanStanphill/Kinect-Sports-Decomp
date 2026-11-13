#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define BADSPACEBASE char
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_827F3A60();
extern int fn_827F3AE8();
extern int fn_827F3B30();
extern int fn_827F3B90();
extern int fn_827F3BA8();
extern int fn_827F3C08();
extern int fn_827F3C18();
extern int fn_827F40B8();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_827F09C8(__int64 param_1)

{
  short sVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  int iVar13;
  __int64 lVar12;
  char cVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  int iVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  unsigned int auStack_f0 [16];
  unsigned int auStack_b0 [44];
  
  uVar6 = ZEXT48(&stack0x00000000);
  iVar19 = (int)(uVar6 - 0x180);
  *(BADSPACEBASE **)iVar19 = register0x0000000c;
  piVar5 = (int *)param_1;
  if (*(char *)(piVar5 + 0x62) == '\0') {
    (**(int (***)())(*piVar5 + 4))((double)lbl_821AAD20);
  }
  uVar3 = piVar5[0x3c];
  if (uVar3 == 0xffff) {
    fn_827F40B8(param_1);
  }
  else if ((*(unsigned short *)(((uVar3 >> 4 & 0xfff) + 0x77) * 2 + (int)piVar5) >> (uVar3 & 0xf) & 1) == 0)
  {
    lVar10 = fn_827F3C08(param_1);
    lVar11 = fn_827F3A60(param_1);
    lVar20 = (__int64)(int)(*(unsigned short *)((int)piVar5 + 0xe6) - 1) * (__int64)(int)lVar11 + lVar10;
    iVar13 = fn_827F3C18(param_1);
    uVar21 = (unsigned __int64)
             (unsigned int)((iVar13 + ((int)lVar10 - (int)lVar20)) / (int)(unsigned int)*(unsigned short *)(piVar5 + 0x39))
             & 0xfffffff0;
    lVar12 = (**(int (***)())(*(int *)piVar5[1] + 8))((int *)piVar5[1]);
    lVar12 = uVar21 - (lVar12 + 0xfU & 0xfffffff0);
    uVar7 = fn_827F3BA8(param_1);
    fn_827F3B30(piVar5[piVar5[0x3c] + 0x28],uVar7);
    uVar18 = 1;
    *(unsigned int *)(iVar19 + 0x50) = 0;
    uVar15 = (unsigned __int64)*(unsigned short *)(piVar5 + 0x39);
    uVar16 = uVar15 - 1;
    if (-1 < (__int64)uVar16) {
      lVar20 = (__int64)(int)uVar16 * (__int64)(int)uVar21 + lVar20;
      lVar17 = (uVar16 & 0x3fffffff) << 2;
      do {
        iVar13 = (int)lVar20;
        *(int *)((int)lVar17 + iVar19 + 0xd0) = iVar13;
        lVar20 = lVar20 - uVar21;
        *(int *)((int)lVar17 + iVar19 + 0x90) = iVar13 + (int)lVar12;
        lVar17 = lVar17 + -4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    uVar21 = (unsigned __int64)*(unsigned short *)(piVar5 + 0x38) - 1;
    if (-1 < (__int64)((unsigned __int64)*(unsigned short *)(piVar5 + 0x38) - 1)) {
      do {
        lVar20 = 0;
        sVar1 = *(short *)((int)piVar5 + (int)((uVar21 & 0xffffffff) << 2) + 0x22);
        uVar15 = uVar21;
        if (-1 < (int)uVar21) {
          lVar17 = (uVar18 & 0x3fffffff) * 4 + (uVar6 - 0x180) + 0x4c;
          lVar22 = (uVar21 + 9 & 0x3fffffff) * 4 + param_1;
          iVar19 = 0;
          do {
            iVar13 = (int)lVar22;
            if ((*(short *)(iVar13 + -2) != sVar1) ||
               ((int)(unsigned int)*(unsigned short *)(piVar5 + 0x39) <= (int)lVar20)) break;
            cVar14 = fn_827F3AE8(piVar5[*(unsigned short *)(iVar13 + -4) + 0x28]);
            if (cVar14 == '\0') {
              uVar2 = *(unsigned short *)(iVar13 + -4);
              lVar17 = lVar17 + 4;
              *(unsigned int *)lVar17 = (int)uVar15;
              uVar18 = uVar18 + 1;
              fn_827F3B30(piVar5[uVar2 + 0x28],lVar10);
              lVar10 = lVar11 + lVar10;
            }
            fn_827F3B90(piVar5[*(unsigned short *)(iVar13 + -4) + 0x28],
                         *(unsigned int *)((int)auStack_b0 + iVar19),lVar12);
            lVar22 = lVar22 + -4;
            piVar4 = *(int **)((int)auStack_f0 + iVar19);
            (**(int (***)())(*(int *)piVar5[1] + 0xc))
                      ((int *)piVar5[1],piVar4,piVar5[*(unsigned short *)lVar22 + 0x28]);
            (**(int (***)())(*piVar4 + 4))(piVar4);
            uVar15 = uVar15 - 1;
            lVar20 = lVar20 + 1;
            iVar19 = iVar19 + 4;
          } while (-1 < (__int64)uVar15);
        }
        uVar16 = lVar20 - 1;
        if (-1 < (__int64)uVar16) {
          lVar20 = (uVar16 & 0x3fffffff) * 4 + (uVar6 - 0xec);
          lVar17 = ((uVar21 - uVar16) + 7 & 0x3fffffff) * 4 + param_1;
          do {
            lVar20 = lVar20 + -4;
            piVar4 = (int *)*(unsigned int *)lVar20;
            (**(int (***)())(*piVar4 + 8))(piVar4);
            (**(int (***)())(*piVar4 + 0xc))(piVar4);
            lVar17 = lVar17 + 4;
            fn_827F3B90(piVar5[*(unsigned short *)lVar17 + 0x28],0,0);
            uVar16 = uVar16 - 1;
          } while (-1 < (__int64)uVar16);
        }
        uVar21 = uVar15;
      } while (-1 < (int)uVar15);
    }
    uVar18 = uVar18 - 1;
    if (-1 < (__int64)uVar18) {
      lVar10 = (uVar18 & 0x3fffffff) * 4 + (uVar6 - 300);
      do {
        lVar10 = lVar10 + -4;
        fn_827F3B30(piVar5[*(unsigned short *)(piVar5 + *(int *)lVar10 + 8) + 0x28],0);
        uVar18 = uVar18 - 1;
      } while (-1 < (__int64)uVar18);
    }
  }
  else {
    uVar7 = fn_827F3A60(piVar5[uVar3 + 0x28]);
    uVar8 = fn_827F3BA8(piVar5[piVar5[0x3c] + 0x28]);
    uVar9 = fn_827F3BA8(param_1);
    fn_82F68CC0(uVar9,uVar8,uVar7);
  }
  return;
}

