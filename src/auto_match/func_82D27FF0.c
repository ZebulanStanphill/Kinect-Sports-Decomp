extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEA160();
extern int fn_82CEAB00();
extern int fn_82D21590();
extern int fn_82D23B88();
extern int fn_82D27D00();
extern int fn_82D2D320();
extern int fn_82D2D400();
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_821344F4;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


__int64 fn_82D27FF0(int param_1,int *param_2,char param_3,char param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  int iVar14;
  int iVar15;
  unsigned int *puVar16;
  int *piVar17;
  double dVar18;
  double dVar19;
  struct { float first; float second; } stack_pair_c0;

  struct { int first; int second; } stack_pair_b8;

  unsigned int uStack_b0;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;

  uVar11 = 0xffffffffffffffff;
  for (puVar8 = *(unsigned int **)(param_1 + 0x2c); puVar8 != (unsigned int *)0x0;
      puVar8 = (unsigned int *)*puVar8) {
    if ((int)uVar11 < (int)puVar8[0xc]) {
      uVar11 = (unsigned __int64)(unsigned int)puVar8[0xc];
    }
  }
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    uStack_a0 = 0xffffffff;
    stack_pair_b8.first = 0;
    stack_pair_b8.second = 0;
    uStack_b0 = 0x80000000;
    uStack_a8 = 0;
    uStack_a4 = 0;
    iVar5 = fn_82CE5410();
    fn_82CEAB00(&uStack_a8,*(unsigned int *)(iVar5 + 0x10),0);
    iVar5 = fn_82CE5410();
    uVar1 = param_2[1];
    lVar12 = (unsigned __int64)uVar1 + lVar13;
    iVar6 = (int)lVar12;
    if ((int)(param_2[2] & 0x3fffffffU) < iVar6) {
      lVar4 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
      if (iVar6 < (int)lVar4) {
        lVar12 = lVar4;
      }
      fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_2,lVar12,4);
    }
    iVar5 = (int)lVar13;
    iVar14 = uVar1 * 4 + *param_2;
    param_2[1] = param_2[1] + iVar5;
    uVar1 = *(unsigned int *)(param_1 + 0x30);
    iVar6 = fn_82CE5410();
    fn_82CEAB00(&uStack_a8,*(unsigned int *)(iVar6 + 0x10),
                 (unsigned __int64)uVar1 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2);
    iVar6 = fn_82CE5410();
    if ((int)(uStack_b0 & 0x3fffffff) < iVar5) {
      lVar12 = ((unsigned __int64)uStack_b0 & 0x3fffffff) << 1;
      if ((int)lVar12 <= iVar5) {
        lVar12 = lVar13;
      }
      fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),&stack_pair_b8.first,lVar12,4);
    }
    stack_pair_b8.second = iVar5;
    if (0 < iVar5) {
      iVar6 = 0;
      lVar12 = lVar13;
      do {
        *(unsigned int *)(iVar6 + iVar14) = 0;
        iVar7 = fn_82CE5410();
        puVar8 = (unsigned int *)
                 (**(int (***)())(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0xc);
        if (puVar8 == (unsigned int *)0x0) {
          puVar8 = (unsigned int *)0x0;
        }
        else {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0xffffffff;
          iVar7 = fn_82CE5410();
          fn_82CEAB00(puVar8,*(unsigned int *)(iVar7 + 0x10),0);
        }
        lVar12 = lVar12 + -1;
        *(unsigned int **)(stack_pair_b8.first + iVar6) = puVar8;
        iVar6 = iVar6 + 4;
      } while (lVar12 != 0);
    }
    for (puVar8 = *(unsigned int **)(param_1 + 0x2c); puVar8 != (unsigned int *)0x0;
        puVar8 = (unsigned int *)*puVar8) {
      if (puVar8[0xc] != -1) {
        iVar6 = puVar8[0xc] * 4;
        if (*(int *)(iVar6 + iVar14) == 0) {
          iVar7 = fn_82CE5410();
          iVar7 = (**(int (***)())(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x7e0);
          *(unsigned short *)(iVar7 + 4) = 0x7e0;
          iVar7 = fn_82D27D00();
          *(int *)(iVar6 + iVar14) = iVar7;
          *(unsigned int *)(iVar7 + 0x38) = *(unsigned int *)(param_1 + 0x38);
        }
        uVar2 = *(unsigned int *)(puVar8[0xc] * 4 + stack_pair_b8.first);
        iVar7 = fn_82D2D400((unsigned __int64)*(unsigned int *)(iVar6 + iVar14) + 0x20,puVar8);
        lVar12 = 3;
        puVar16 = (unsigned int *)(iVar7 + 8);
        iVar15 = (int)puVar8 - iVar7;
        do {
          uVar3 = *(unsigned int *)(iVar15 + (int)puVar16);
          uVar11 = fn_82CEA280(uVar2,uVar3,0);
          if ((uVar11 & 0xffffffff) == 0) {
            uVar11 = fn_82D2D320((unsigned __int64)*(unsigned int *)(iVar6 + iVar14) + 8,uVar3);
            iVar9 = fn_82CE5410();
            fn_82CEA160(uVar2,*(unsigned int *)(iVar9 + 0x10),uVar3,uVar11);
          }
          *puVar16 = (int)uVar11;
          lVar12 = lVar12 + -1;
          puVar16[3] = 0;
          puVar16 = puVar16 + 1;
        } while (lVar12 != 0);
        piVar17 = (int *)(iVar7 + 0x14);
        lVar12 = 3;
        do {
          uVar1 = *(unsigned int *)((int)piVar17 + iVar15);
          if (((uVar1 & 0xfffffffc) != 0) && (*(int *)((uVar1 & 0xfffffffc) + 0x30) == puVar8[0xc]))
          {
            iVar6 = (uVar1 & 3) + (uVar1 & 0xfffffffc);
            uVar10 = fn_82CEA280(&uStack_a8,iVar6,0);
            uVar1 = uVar10 & 0xfffffffc;
            if (uVar1 == 0) {
              iVar9 = fn_82CE5410();
              fn_82CEA160(&uStack_a8,*(unsigned int *)(iVar9 + 0x10),iVar7 + iVar15,iVar7);
              *piVar17 = iVar6;
            }
            else {
              *piVar17 = (uVar10 & 3) + uVar1;
              *(int *)(((uVar10 & 3) + 5) * 4 + uVar1) = iVar7;
              fn_82CEA160(&uStack_a8,iVar6);
            }
          }
          lVar12 = lVar12 + -1;
          piVar17 = piVar17 + 1;
          iVar7 = iVar7 + 1;
        } while (lVar12 != 0);
      }
    }
    if (0 < iVar5) {
      iVar5 = 0;
      dVar18 = (double)lbl_82002D08;
      dVar19 = (double)lbl_821344F4;
      lVar12 = lVar13;
      do {
        iVar6 = *(int *)(iVar5 + stack_pair_b8.first);
        if (iVar6 != 0) {
          iVar7 = fn_82CE5410();
          fn_82CEA4B8(iVar6,*(unsigned int *)(iVar7 + 0x10));
          fn_82BA02A8(iVar6);
          iVar7 = fn_82CE5410();
          (**(int (***)())(**(int **)(iVar7 + 0x10) + 8))(*(int **)(iVar7 + 0x10),iVar6,0xc);
        }
        if (param_3 != '\0') {
          stack_pair_c0.first = (float)dVar19;
          stack_pair_c0.second = (float)dVar18;
          fn_82D23B88(*(unsigned int *)(iVar5 + iVar14),&stack_pair_c0.first);
        }
        if (param_4 != '\0') {
          fn_82D21590(*(unsigned int *)(iVar5 + iVar14));
        }
        lVar12 = lVar12 + -1;
        iVar5 = iVar5 + 4;
      } while (lVar12 != 0);
    }
    fn_82CE5410();
    fn_82CE5410();
    iVar5 = fn_82CE5410();
    fn_82CEA4B8(&uStack_a8,*(unsigned int *)(iVar5 + 0x10));
    fn_82BA02A8(&uStack_a8);
    iVar5 = fn_82CE5410();
    stack_pair_b8.second = 0;
    if ((uStack_b0 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),stack_pair_b8.first,uStack_b0 & 0x3fffffff,4);
    }
  }
  return lVar13;
}
