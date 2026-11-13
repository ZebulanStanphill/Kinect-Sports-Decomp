typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_94;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern int fn_822315A0();
extern int fn_822437F0();
extern int fn_82243DA8();
extern int fn_82381BC0();
extern int fn_823AB478();
extern int fn_82511928();
extern int fn_82513728();
extern int fn_82513D20();
extern int fn_82517D50();
extern int fn_8265C9E0();
extern int fn_828904D8();
extern int fn_82899F38();
extern int fn_828A1B90();
extern int fn_828AB5B8();
extern int fn_828AB870();
extern int fn_828AC428();
extern int fn_828AC488();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828AD0F8();
extern int fn_828AD188();
extern int fn_828AD270();
extern int fn_828AD488();
extern int fn_828AD4A0();
extern int fn_828AD588();
extern int fn_828AD740();
extern int fn_828ADE08();
extern unsigned int iStack_e4;
extern unsigned int lbl_82197448;
extern unsigned int lbl_82197488;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83297810;
extern unsigned int stack0x00000000;


void fn_82242B10(int param_1)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned int uVar4;
  bool bVar5;
  int iVar10;
  int *piVar11;
  char cVar15;
  unsigned __int64 uVar6;
  int iVar12;
  unsigned int *puVar13;
  __int64 lVar7;
  int iVar14;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar16;
  int *piVar17;
  int aiStack_f0 [2];
  unsigned char auStack_e8 [4];
  int iStack_e4;
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [8];
  unsigned char auStack_b8 [36];
  unsigned char auStack_94 [148];
  
  if (((*(int *)(param_1 + 4) == 0) || (*(char *)(param_1 + 0x18) != '\0')) ||
     (bVar5 = true, *(char *)(param_1 + 0x19) != '\0')) {
    bVar5 = false;
  }
  if (!bVar5) {
    return;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    return;
  }
  piVar17 = (int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar10 = lbl_83297810;
    if (lbl_83297810 == 0) {
      iVar10 = fn_82511928();
    }
    if (*(int *)(iVar10 + 0x28) != 0) {
      return;
    }
    iVar10 = lbl_83297810;
    if (lbl_83297810 == 0) {
      iVar10 = fn_82511928();
    }
    piVar11 = (int *)fn_82513728(&stack0x00000000 + -0xe8,iVar10,
                                       *(unsigned int *)(param_1 + 0x14));
    iVar14 = 0;
    iVar10 = 0;
    if ((int *)(&stack0x00000000 + -0xf0) != piVar11) {
      iVar10 = piVar11[1];
      piVar11[1] = 0;
      iVar14 = *piVar11;
      *piVar11 = 0;
    }
    iVar16 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar10;
    *piVar17 = iVar14;
    if (iVar16 != 0) {
      fn_822315A0();
    }
    if (iStack_e4 != 0) {
      fn_822315A0();
    }
  }
  iVar10 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar14 = *(int *)(*piVar17 + 8);
  cVar15 = fn_828ACCE8(iVar10);
  if (cVar15 == '\0') {
    uVar4 = *(unsigned int *)(*piVar17 + 4);
    iVar10 = lbl_83297810;
    if (lbl_83297810 == 0) {
      iVar10 = fn_82511928();
    }
    iVar16 = 0x24;
LAB_82242c54:
    fn_82513D20(iVar10,uVar4,iVar16);
    iVar10 = *(int *)(param_1 + 0x10);
    *(unsigned int *)(param_1 + 0x10) = 0;
    *piVar17 = 0;
    if (iVar10 != 0) {
      fn_822315A0();
    }
    *(unsigned char *)(param_1 + 0x19) = 1;
  }
  else {
    if (*(int *)(iVar14 + 0xa0) == 0) {
      cVar15 = fn_828AD0F8(iVar10);
      if (cVar15 == '\0') {
        cVar15 = fn_828AD488(iVar10);
        if (cVar15 != '\0') {
          fn_828AD4A0(iVar14);
        }
      }
      else {
        fn_828AD188(iVar14);
      }
    }
    if (*(int *)(iVar14 + 0xa0) == 0) {
      return;
    }
    cVar15 = fn_828ACC40(iVar14);
    if (cVar15 != '\0') {
      iVar16 = *(int *)(iVar14 + 0xb4);
      if (iVar16 != 1) {
        uVar4 = *(unsigned int *)(*piVar17 + 4);
        iVar10 = lbl_83297810;
        if (lbl_83297810 == 0) {
          iVar10 = fn_82511928();
        }
        goto LAB_82242c54;
      }
      cVar15 = fn_828AD740(iVar10);
      uVar4 = lbl_83265988;
      if (cVar15 == '\0') {
        if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
          iVar12 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
          iVar16 = *(int *)(param_1 + 0x20);
          iVar12 = (**(int (***)())(*(int *)(iVar12 + 0x9c) + 0x3c))();
          if (iVar12 != iVar16) {
            lVar7 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
            fn_828AB870(lVar7 + 0x9c,iVar16);
          }
          iVar16 = *(int *)(param_1 + 0x20);
          iVar12 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
          iVar12 = (**(int (***)())(*(int *)(iVar12 + 0xf0) + 0x3c))();
          if (iVar12 == iVar16) {
            fn_828AC428(&stack0x00000000 + -0xe0);
            lVar7 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
            fn_822437F0(lVar7 + 0x48,&stack0x00000000 + -0xc0,&stack0x00000000 + -0xe0);
            uVar4 = lbl_83265988;
            fn_828AD0F8(iVar14);
            uVar6 = fn_823AB478(uVar4);
            fn_828ADE08(iVar14,uVar6,1,1,0,&stack0x00000000 + -0xc0,&stack0x00000000 + -0x94,
                              &stack0x00000000 + -0xb8);
            fn_828AC488(&stack0x00000000 + -0xe0);
          }
        }
      }
      else {
        iVar16 = *piVar17;
        cVar15 = fn_828AD0F8(iVar14);
        if (cVar15 == '\0') {
          cVar15 = fn_828AD488(iVar14);
          if (cVar15 != '\0') {
            uVar6 = fn_823AB478(uVar4);
            fn_828AD588(iVar14,uVar6,1,0,2,0,0);
          }
        }
        else {
          uVar1 = *(unsigned char *)(iVar16 + 0x12);
          uVar2 = *(unsigned char *)(iVar16 + 0x11);
          uVar3 = *(unsigned char *)(iVar16 + 0x10);
          uVar6 = fn_823AB478(uVar4);
          fn_828AD270(iVar14,uVar6,1,0,0,uVar3,uVar2,uVar1);
        }
      }
    }
    cVar15 = fn_828ACCE8(iVar14);
    if (cVar15 != '\0') {
      cVar15 = fn_828AD740(iVar14);
      if (cVar15 != '\0') {
        if (*(int *)(param_1 + 0x1c) == 0) {
          puVar13 = (unsigned int *)fn_8265C9E0(0x80);
          if (puVar13 == (unsigned int *)0x0) {
            puVar13 = (unsigned int *)0x0;
          }
          else {
            fn_82517D50(puVar13,iVar10,7);
            *puVar13 = &lbl_82197448;
            puVar13[0x1a] = &lbl_82197488;
          }
          *(unsigned int **)(param_1 + 0x1c) = puVar13;
          uVar6 = fn_828A1B90(&stack0x00000000 + -0xc0,iVar14);
          lVar7 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))(*(int **)(param_1 + 0x1c));
          fn_82243DA8(lVar7 + 0x48,uVar6,iVar14 + 0x60,1);
          fn_828904D8(*(unsigned int *)(param_1 + 0x1c));
        }
        else {
          uVar6 = fn_828A1B90(&stack0x00000000 + -0xc0,iVar14);
          lVar7 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))(*(int **)(param_1 + 0x1c));
          fn_82243DA8(lVar7 + 0x48,uVar6,iVar14 + 0x60,1);
        }
        if (*(unsigned int *)(iVar14 + 0x204) < *(unsigned int *)(iVar10 + 0x204)) {
          piVar11 = *(int **)(iVar10 + 0x210);
          piVar17 = (int *)*piVar11;
          while (piVar17 != piVar11) {
            uVar4 = piVar17[4];
            iVar14 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
            uVar8 = (**(int (***)())(*(int *)(iVar14 + 0x9c) + 0x38))((int *)(iVar14 + 0x9c),uVar4);
            iVar14 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))(*(int **)(param_1 + 0x1c));
            uVar9 = (**(int (***)())(*(int *)(iVar14 + 0xf0) + 0x38))((int *)(iVar14 + 0xf0),uVar4);
            if ((uVar8 & 0xffffffff) != (uVar9 & 0xffffffff)) {
              lVar7 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
              cVar15 = fn_82899F38(lVar7 + 0x48,uVar4);
              if (cVar15 != '\0') {
                lVar7 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 8))();
                fn_828AB5B8(lVar7 + 0xf0,uVar8,uVar4);
              }
            }
            fn_82381BC0(&stack0x00000000 + -0xf0);
            piVar11 = *(int **)(iVar10 + 0x210);
          }
          return;
        }
      }
      *(unsigned char *)(param_1 + 0x18) = 1;
    }
  }
  return;
}

