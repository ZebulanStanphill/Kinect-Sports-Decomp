#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_b0;
extern int fn_82381BC0();
extern int fn_8265CA20();
extern int fn_8287D550();
extern int fn_8287D5C0();
extern int fn_8287FD98();
extern int fn_828831D8();
extern int fn_8288A398();
extern int fn_8288B4B8();
extern int fn_82897BD0();
extern int fn_828A12E8();
extern int fn_828C9250();
extern int fn_828C9918();
extern int fn_828C9AC8();
extern int fn_828CAAC8();
extern int fn_828EA790();
extern int fn_82F63108();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int lbl_82026434;
extern unsigned int uStack_98;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_828CAC20(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar8;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  char cVar12;
  int *piVar9;
  int *piVar10;
  __int64 *plVar11;
  __int64 *plVar13;
  unsigned __int64 *puVar15;
  unsigned int *puVar16;
  __int64 lVar14;
  unsigned int uVar17;
  int iVar18;
  int iVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  double dVar22;
  unsigned int uStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned __int64 uStack_b8;
  unsigned char auStack_b0 [16];
  struct { int first; int second; } stack_pair_a0;

  unsigned int uStack_98;
  
  fn_828A12E8(param_2);
  iVar8 = fn_8288B4B8();
  iStack_c4 = **(int **)(param_2 + 0x210);
  if ((int *)iStack_c4 != *(int **)(param_2 + 0x210)) {
    do {
      uVar17 = *(unsigned int *)(iStack_c4 + 0x10);
      uStack_d0 = uVar17;
      uVar6 = fn_82897BD0(uVar17);
      uVar7 = fn_8287FD98();
      cVar12 = fn_8287D5C0(uVar7,uVar6);
      if (cVar12 != '\0') {
        if (*(int *)(param_1 + 0x38) != 0) {
          if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          cVar12 = (**(int (***)())(**(int **)(param_1 + 0x38) + 4))
                             (*(int **)(param_1 + 0x38),param_2,uVar17);
          if (cVar12 == '\0') goto LAB_828caf28;
        }
        fn_828C9918(&iStack_cc,param_1 + 8,&uStack_d0);
        if (iStack_cc == *(int *)(param_1 + 0xc)) {
          fn_828CAAC8(param_1,uVar17);
          piVar9 = (int *)fn_828C9918(auStack_b0,param_1 + 8,&uStack_d0);
          iStack_cc = *piVar9;
        }
        iVar4 = iStack_cc;
        stack_pair_a0.first = 0;
        stack_pair_a0.second = 0;
        iVar19 = iStack_cc + 0x18;
        uStack_98 = 0;
        uVar1 = *(unsigned int *)(iVar8 + 8);
        cVar12 = fn_828C9250(&stack_pair_a0.first,uVar1);
        iVar5 = stack_pair_a0.first;
        iVar18 = stack_pair_a0.second;
        if (cVar12 != '\0') {
          if (uVar1 != 0) {
            puVar15 = (unsigned __int64 *)(stack_pair_a0.first + -8);
            uVar21 = uVar1;
            do {
              puVar15 = puVar15 + 1;
              *puVar15 = 0;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          iVar18 = uVar1 * 8 + stack_pair_a0.first;
        }
        iStack_c8 = **(int **)(iVar8 + 4);
        if ((int *)iStack_c8 != *(int **)(iVar8 + 4)) {
          plVar13 = (__int64 *)(stack_pair_a0.first + -8);
          do {
            uVar20 = 0;
            piVar9 = *(int **)(iStack_c8 + 0x10);
            uStack_d0 = 0;
            piVar2 = (int *)**(int **)(iVar4 + 0x28);
            uStack_b8 = CONCAT44(piVar9,(((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF));
            if (piVar2 != *(int **)(iVar4 + 0x28)) {
              do {
                piVar3 = (int *)piVar2[2];
                piVar10 = (int *)fn_8288A398();
                uVar6 = (**(int (***)())(*piVar10 + 4))();
                (**(int (***)())(*piVar9 + 0x28))(piVar9,uVar6);
                (**(int (***)())(*piVar3 + 4))(&uStack_c0,piVar3,uVar6);
                uStack_bc = uStack_c0;
                puVar16 = &uStack_bc;
                if (uStack_c0 <= uVar20) {
                  puVar16 = &uStack_d0;
                }
                uStack_d0 = *puVar16;
                uVar20 = (unsigned __int64)uStack_d0;
                piVar2 = (int *)*piVar2;
              } while (piVar2 != (int *)*(int *)(iVar4 + 0x28));
            }
            plVar11 = (__int64 *)fn_828831D8(iVar19,&uStack_b8);
            lVar14 = *plVar11;
            *plVar11 = uVar20 + lVar14;
            plVar13 = plVar13 + 1;
            *plVar13 = uVar20 + lVar14;
            fn_828EA790(&iStack_c8);
          } while (iStack_c8 != *(int *)(iVar8 + 4));
        }
        fn_828C9AC8(iVar5,iVar18,iVar18 - iVar5 >> 3);
        uVar6 = fn_82897BD0(uVar17);
        uVar7 = fn_8287FD98();
        dVar22 = (double)fn_8287D550(uVar7,uVar6);
        uStack_b8 = (__int64)(dVar22 * (double)lbl_82026434);
        if ((((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF) < uVar1) {
          plVar13 = (__int64 *)((uVar1 - (((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF)) * 8 + iVar5);
          uVar17 = 0;
          lVar14 = *plVar13;
          *(unsigned int *)(iVar4 + 0x40) = 0;
          *(__int64 *)(iVar4 + 0x38) = lVar14;
          if ((((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF) != 0) {
            do {
              if (*plVar13 != lVar14) break;
              uVar17 = uVar17 + 1;
              plVar13 = plVar13 + 1;
              *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 1;
            } while (uVar17 < (((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF));
          }
        }
        else {
          *(unsigned int *)(iVar4 + 0x40) = uVar1;
          *(unsigned __int64 *)(iVar4 + 0x38) = 0;
        }
        if (iVar5 != 0) {
          fn_8265CA20(iVar5);
        }
        stack_pair_a0.first = 0;
        stack_pair_a0.second = 0;
        uStack_98 = 0;
      }
LAB_828caf28:
      fn_82381BC0(&iStack_c4);
    } while (iStack_c4 != *(int *)(param_2 + 0x210));
  }
  return;
}

