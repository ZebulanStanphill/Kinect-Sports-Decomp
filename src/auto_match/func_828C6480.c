typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82230040();
extern int fn_82381BC0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82883118();
extern int fn_828A1C98();
extern int fn_828A24F8();
extern int fn_828C5120();
extern int fn_828C5200();
extern int fn_828C5CC0();
extern int fn_828C62E0();
extern int fn_828EA790();
extern int fn_82F622E0();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_820260B8;
extern unsigned int lbl_820260C8;
extern unsigned int uRam83214379;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_8c;


void fn_828C6480(int param_1,int param_2,char param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned int **ppuVar15;
  unsigned __int64 uVar13;
  __int64 lVar14;
  int iVar17;
  unsigned __int64 uVar16;
  bool bVar18;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int *apuStack_88 [2];
  struct { int first; int second; } stack_pair_80;

  unsigned char **ppuStack_78;
  unsigned int uStack_74;
  int *piStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;

  *(unsigned int *)(param_1 + 4) = 0;
  iVar10 = param_1 + 0xc;
  fn_828A24F8(iVar10,*(unsigned int *)(*(int *)(param_1 + 0x10) + 4));
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
  *(unsigned int *)*(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x14) = 0;
  puVar3 = *(unsigned int **)(param_1 + 8);
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())*puVar3)(puVar3,1);
  }
  stack_pair_90.first = **(int **)(param_2 + 4);
  if ((int *)stack_pair_90.first != *(int **)(param_2 + 4)) {
    do {
      iVar9 = stack_pair_90.first;
      puVar3 = (unsigned int *)fn_8265C9E0(0x10);
      if (puVar3 == (unsigned int *)0x0) {
        puVar3 = (unsigned int *)0x0;
      }
      else {
        ppuVar15 = (unsigned int **)(iVar9 + 0x10);
        apuStack_88[0] = (unsigned int *)0x1;
        if (*(int *)(iVar9 + 0x10) == 0) {
          ppuVar15 = apuStack_88;
        }
        puVar4 = *ppuVar15;
        uVar1 = *(unsigned int *)(iVar9 + 0xc);
        puVar3[1] = 0;
        *puVar3 = &lbl_820260B8;
        puVar3[2] = puVar4;
        puVar3[3] = uVar1;
      }
      puVar4 = (unsigned int *)fn_82883118(iVar10,iVar9 + 0xc);
      *puVar4 = puVar3;
      fn_82381BC0(&stack_pair_90.first);
    } while (stack_pair_90.first != *(int *)(param_2 + 4));
  }
  if (param_3 != '\0') {
    puVar3 = (unsigned int *)0x0;
    while( true ) {
      apuStack_88[0] = puVar3;
      fn_828A1C98(&stack_pair_80.first,iVar10,apuStack_88);
      iVar9 = stack_pair_80.second;
      iVar17 = 0;
      stack_pair_90.first = stack_pair_80.first;
      if (stack_pair_80.first == stack_pair_80.second) break;
      do {
        iVar17 = iVar17 + 1;
        fn_828EA790(&stack_pair_90.first);
      } while (stack_pair_90.first != iVar9);
      if (iVar17 == 0) break;
      puVar3 = (unsigned int *)((int)puVar3 + 1);
    }
    puVar4 = (unsigned int *)fn_8265C9E0(0x10);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4[3] = puVar3;
      *puVar4 = &lbl_820260B8;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    apuStack_88[0] = puVar3;
    puVar5 = (unsigned int *)fn_82883118(iVar10,apuStack_88);
    *puVar5 = puVar4;
    apuStack_88[0] = puVar3;
    puVar3 = (unsigned int *)fn_82883118(iVar10,apuStack_88);
    *(unsigned int *)(param_1 + 4) = *puVar3;
  }
  piStack_70 = (int *)0x0;
  piVar6 = (int *)fn_8265C9E0(8);
  if (piVar6 == (int *)0x0) {
    uStack_74 = 0;
    ppuStack_78 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_78);
  }
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
  *piVar6 = (int)&piStack_70;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  piStack_70 = piVar6;
  fn_828C5CC0(&piStack_70,*(unsigned int *)(param_1 + 0x14));
  uVar16 = 0;
  stack_pair_90.first = **(int **)(param_1 + 0x10);
  uVar7 = stack_pair_90.second;
  uVar8 = uStack_64;
  if ((int *)stack_pair_90.first != *(int **)(param_1 + 0x10)) {
    do {
      if ((unsigned __int64)uStack_60 <= (uVar16 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ad08c);
      }
      piVar6 = (int *)0x0;
      if ((piStack_70 != (int *)0x0) && ((unsigned int *)*piStack_70 != (unsigned int *)0x0)) {
        piVar6 = *(int **)*piStack_70;
      }
      uVar12 = uStack_64 + uVar16;
      if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
         (piVar6 = *(int **)*piVar6, piVar6 == (int *)0x0)) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar6;
      }
      uVar13 = (uVar12 & 0xffffffff) >> 2;
      if (*(unsigned int *)(iVar10 + 8) <= uVar13) {
        uVar13 = uVar13 - *(unsigned int *)(iVar10 + 8);
      }
      uVar16 = uVar16 + 1;
      *(unsigned int *)
       (*(int *)((int)((uVar13 & 0xffffffff) << 2) + *(int *)(iVar10 + 4)) +
       (int)((uVar12 & 3) << 2)) = *(unsigned int *)(stack_pair_90.first + 0x10);
      fn_828EA790(&stack_pair_90.first);
      uVar7 = stack_pair_90.second;
      uVar8 = uStack_64;
    } while (stack_pair_90.first != *(int *)(param_1 + 0x10));
  }
  do {
    stack_pair_90.second = uVar8;
    uStack_64 = stack_pair_90.second;
    if ((unsigned __int64)uStack_60 < 2) {
      iVar10 = 0;
      if (piStack_70 != (int *)0x0) {
        iVar10 = *piStack_70;
      }
      uVar8 = stack_pair_90.second >> 2;
      if (*(unsigned int *)(iVar10 + 8) <= uVar8) {
        uVar8 = uVar8 - *(unsigned int *)(iVar10 + 8);
      }
      *(unsigned int *)(param_1 + 8) =
           *(unsigned int *)(*(int *)(*(int *)(iVar10 + 4) + uVar8 * 4) + (stack_pair_90.second & 3) * 4);
      stack_pair_90.second = uVar7;
      fn_828C5200(&piStack_70);
      fn_8265CA20(piStack_70);
      return;
    }
    lVar14 = (unsigned __int64)uStack_60 + (unsigned __int64)stack_pair_90.second;
    if (((piStack_70 == (int *)0x0) || ((int *)*piStack_70 == (int *)0x0)) ||
       (piVar6 = *(int **)*piStack_70, piVar6 == (int *)0x0)) {
      stack_pair_80.first = 0;
    }
    else {
      stack_pair_80.first = *piVar6;
    }
    stack_pair_80.second = (int)lVar14;
    if (((piStack_70 == (int *)0x0) || ((unsigned int *)*piStack_70 == (unsigned int *)0x0)) ||
       (stack_pair_90.first = *(unsigned int *)*piStack_70, (int *)stack_pair_90.first == (int *)0x0)) {
      stack_pair_90.first = 0;
    }
    else {
      stack_pair_90.first = *(int *)stack_pair_90.first;
    }
    fn_828C62E0(CONCAT44(stack_pair_90.first,stack_pair_90.second),CONCAT44(stack_pair_80.first,stack_pair_80.second),
                  lVar14 - (unsigned __int64)stack_pair_90.second,uRam83214379);
    iVar10 = 0;
    if (piStack_70 != (int *)0x0) {
      iVar10 = *piStack_70;
    }
    uVar16 = (unsigned __int64)uStack_64;
    uVar7 = uStack_64 >> 2;
    if (*(unsigned int *)(iVar10 + 8) <= uVar7) {
      uVar7 = uVar7 - *(unsigned int *)(iVar10 + 8);
    }
    uVar12 = (unsigned __int64)uStack_68;
    piVar6 = *(int **)(*(int *)(*(int *)(iVar10 + 4) + uVar7 * 4) + (uStack_64 & 3) * 4);
    if (uStack_60 != 0) {
      uStack_60 = uStack_60 - 1;
      uVar16 = -(unsigned __int64)(uStack_60 != 0) &
               -(unsigned __int64)(uVar16 + 1 < ((unsigned __int64)uStack_68 & 0x3fffffff) << 2) & uVar16 + 1;
      uStack_64 = (unsigned int)uVar16;
    }
    iVar10 = 0;
    if (piStack_70 != (int *)0x0) {
      iVar10 = *piStack_70;
    }
    uVar13 = (uVar16 & 0xffffffff) >> 2;
    if (*(unsigned int *)(iVar10 + 8) <= uVar13) {
      uVar13 = uVar13 - *(unsigned int *)(iVar10 + 8);
    }
    lVar11 = (uVar13 & 0x3fffffff) << 2;
    lVar14 = (uVar16 & 3) << 2;
    iVar10 = *(int *)(*(int *)(iVar10 + 4) + (int)lVar11);
    piVar2 = *(int **)(iVar10 + (int)lVar14);
    if (uStack_60 != 0) {
      uVar16 = uVar16 + 1;
      uStack_60 = uStack_60 - 1;
      lVar11 = uVar16 + ((unsigned __int64)uStack_68 & 0x3fffffff) * -4;
      uVar12 = -(unsigned __int64)(uVar16 < ((unsigned __int64)uStack_68 & 0x3fffffff) * 4);
      iVar10 = -uStack_60;
      uStack_64 = -(unsigned int)(uStack_60 != 0) & (unsigned int)uVar12 & (unsigned int)uVar16;
    }
    uVar7 = (**(int (***)())(*piVar2 + 0xc))(piVar2,iVar10,uVar12,lVar14,lVar11);
    uVar8 = (**(int (***)())(*piVar6 + 0xc))(piVar6);
    if (uVar7 < uVar8) {
      bVar18 = true;
    }
    else {
      iVar10 = (**(int (***)())(*piVar2 + 0xc))(piVar2);
      iVar9 = (**(int (***)())(*piVar6 + 0xc))(piVar6);
      if (iVar9 == iVar10) {
        bVar18 = (unsigned int)piVar6[2] < (unsigned int)piVar2[2];
      }
      else {
        bVar18 = false;
      }
    }
    if (bVar18) {
      puVar3 = (unsigned int *)fn_8265C9E0(0x18);
      if (puVar3 == (unsigned int *)0x0) {
LAB_828c6a54:
        puVar3 = (unsigned int *)0x0;
      }
      else {
        iVar10 = piVar6[2];
        iVar9 = piVar2[2];
        *puVar3 = &lbl_820260C8;
        puVar3[1] = 0;
        puVar3[2] = iVar10 + iVar9;
        iVar10 = (**(int (***)())(*piVar6 + 0xc))(piVar6);
        puVar3[4] = piVar2;
        puVar3[5] = piVar6;
        puVar3[3] = iVar10 + 1;
        piVar2[1] = (int)puVar3;
        piVar6[1] = (int)puVar3;
      }
    }
    else {
      puVar3 = (unsigned int *)fn_8265C9E0(0x18);
      if (puVar3 == (unsigned int *)0x0) goto LAB_828c6a54;
      iVar10 = piVar6[2];
      iVar9 = piVar2[2];
      puVar3[1] = 0;
      *puVar3 = &lbl_820260C8;
      puVar3[2] = iVar10 + iVar9;
      iVar10 = (**(int (***)())(*piVar2 + 0xc))(piVar2);
      puVar3[4] = piVar6;
      puVar3[5] = piVar2;
      puVar3[3] = iVar10 + 1;
      piVar6[1] = (int)puVar3;
      piVar2[1] = (int)puVar3;
    }
    apuStack_88[0] = puVar3;
    fn_828C5120(&piStack_70,apuStack_88);
    uVar7 = stack_pair_90.second;
    uVar8 = uStack_64;
  } while( true );
}
