extern int fn_825A4550();
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern unsigned int lbl_821C7FB8;
extern unsigned int lbl_821C7FC0;


void fn_825A33C8(unsigned int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar9;
  unsigned __int64 uVar7;
  int iVar10;
  unsigned __int64 uVar8;
  int *piVar11;
  unsigned int *puVar12;
  
  *param_1 = &lbl_821C7FC0;
  iVar6 = 0;
  if (0 < (int)param_1[2]) {
    iVar10 = 0;
    do {
      iVar5 = iVar10 + param_1[1];
      if (*(int *)(iVar5 + 0xc) != 0) {
        iVar3 = fn_82CE5410();
        fn_82CEA4B8(iVar5,*(unsigned int *)(iVar3 + 0x10));
        fn_82BA02A8(iVar5);
        iVar5 = 0;
        if (0 < *(int *)(iVar10 + param_1[1] + 0x20)) {
          iVar3 = 0;
          do {
            iVar9 = *(int *)(iVar10 + param_1[1] + 0x1c) + iVar3;
            iVar4 = fn_82CE5410();
            piVar1 = *(int **)(iVar4 + 0x10);
            *(unsigned int *)(iVar9 + 0x44) = 0;
            if ((*(unsigned int *)(iVar9 + 0x48) & 0x80000000) == 0) {
              (**(int (***)())(*piVar1 + 0x10))
                        (piVar1,*(unsigned int *)(iVar9 + 0x40),*(unsigned int *)(iVar9 + 0x48) & 0x3fffffff,4
                        );
            }
            *(unsigned int *)(iVar9 + 0x40) = 0;
            iVar5 = iVar5 + 1;
            *(unsigned int *)(iVar9 + 0x48) = 0x80000000;
            iVar3 = iVar3 + 0x60;
          } while (iVar5 < *(int *)(iVar10 + param_1[1] + 0x20));
        }
        iVar3 = iVar10 + param_1[1];
        piVar11 = (int *)(iVar3 + 0x1c);
        iVar5 = fn_82CE5410();
        uVar7 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x20);
        piVar1 = *(int **)(iVar5 + 0x10);
        if (0 < (int)*(unsigned int *)(iVar3 + 0x20)) {
          puVar12 = (unsigned int *)(*piVar11 + -0x18);
          do {
            iVar5 = fn_82CE5410();
            piVar2 = *(int **)(iVar5 + 0x10);
            puVar12[0x17] = 0;
            if ((puVar12[0x18] & 0x80000000) == 0) {
              (**(int (***)())(*piVar2 + 0x10))(piVar2,puVar12[0x16],puVar12[0x18] & 0x3fffffff,4);
            }
            puVar12[0x16] = 0;
            uVar7 = uVar7 - 1;
            puVar12 = puVar12 + 0x18;
            *puVar12 = 0x80000000;
          } while (uVar7 != 0);
        }
        *(unsigned int *)(iVar3 + 0x20) = 0;
        if ((*(unsigned int *)(iVar3 + 0x24) & 0x80000000) == 0) {
          (**(int (***)())(*piVar1 + 0x10))(piVar1,*piVar11,*(unsigned int *)(iVar3 + 0x24) & 0x3fffffff,0x60);
        }
        *piVar11 = 0;
        *(unsigned int *)(iVar3 + 0x24) = 0x80000000;
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 0x28;
    } while (iVar6 < (int)param_1[2]);
  }
  iVar6 = fn_82CE5410();
  iVar10 = 0;
  piVar1 = *(int **)(iVar6 + 0x10);
  if (0 < (int)param_1[8]) {
    do {
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_1[8]);
  }
  param_1[8] = 0;
  if ((param_1[9] & 0x80000000) == 0) {
    (**(int (***)())(*piVar1 + 0x10))(piVar1,param_1[7],param_1[9] & 0x3fffffff,0xc);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  iVar6 = fn_82CE5410();
  fn_82CEA4B8(param_1 + 4,*(unsigned int *)(iVar6 + 0x10));
  fn_82BA02A8(param_1 + 4);
  iVar6 = fn_82CE5410();
  uVar8 = (unsigned __int64)(unsigned int)param_1[2];
  uVar7 = (unsigned __int64)(unsigned int)param_1[1];
  piVar1 = *(int **)(iVar6 + 0x10);
  if (0 < (int)param_1[2]) {
    do {
      fn_825A4550(uVar7);
      uVar8 = uVar8 - 1;
      uVar7 = uVar7 + 0x28;
    } while (uVar8 != 0);
  }
  param_1[2] = 0;
  if ((param_1[3] & 0x80000000) == 0) {
    (**(int (***)())(*piVar1 + 0x10))(piVar1,param_1[1],param_1[3] & 0x3fffffff,0x28);
  }
  param_1[1] = 0;
  param_1[3] = 0x80000000;
  *param_1 = &lbl_821C7FB8;
  return;
}

