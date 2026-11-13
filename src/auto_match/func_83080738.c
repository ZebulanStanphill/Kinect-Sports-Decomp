extern unsigned int *auStack_4c;
extern int fn_82CE5410();
extern int fn_830831B0();
extern unsigned int uStack_50;


void fn_83080738(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  uVar5 = param_2 + 3 & 0xfffffffc;
  uVar11 = (unsigned int)uVar5;
  uStack_50 = uVar11;
  if (uVar11 == 0) {
    iVar2 = 0;
LAB_83080794:
    uVar10 = 0x80000000;
  }
  else {
    iVar2 = fn_82CE5410();
    iVar2 = (**(int (***)())(**(int **)(iVar2 + 0xc) + 0xc))(*(int **)(iVar2 + 0xc),&uStack_50,8);
    uVar10 = uStack_50;
    if (uStack_50 == 0) goto LAB_83080794;
  }
  iVar3 = 0;
  if (0 < (int)uVar11) {
    piVar6 = (int *)(param_1 + -0x20);
    piVar7 = (int *)(iVar2 + -4);
    uVar13 = uVar5;
    do {
      piVar6 = piVar6 + 8;
      piVar7[1] = *piVar6;
      piVar7 = piVar7 + 2;
      *piVar7 = iVar3;
      iVar3 = iVar3 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  auStack_4c[0] = uVar11;
  if (uVar11 == 0) {
    uVar1 = 0;
LAB_83080800:
    uVar11 = 0x80000000;
  }
  else {
    iVar3 = fn_82CE5410();
    uVar1 = (**(int (***)())(**(int **)(iVar3 + 0xc) + 0xc))(*(int **)(iVar3 + 0xc),auStack_4c,8);
    uVar11 = auStack_4c[0];
    if (auStack_4c[0] == 0) goto LAB_83080800;
  }
  fn_830831B0(iVar2,uVar5,uVar1);
  iVar3 = fn_82CE5410();
  if ((uVar11 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),uVar1,uVar11 & 0x3fffffff,8);
  }
  uVar11 = (unsigned int)param_2;
  auStack_4c[0] = uVar11;
  if (uVar11 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82CE5410();
    iVar3 = (**(int (***)())(**(int **)(iVar3 + 0xc) + 0xc))(*(int **)(iVar3 + 0xc),auStack_4c,0x20);
    uVar12 = auStack_4c[0];
    if (auStack_4c[0] != 0) goto LAB_83080888;
  }
  uVar12 = 0x80000000;
LAB_83080888:
  if (0 < (int)uVar11) {
    piVar6 = (int *)(iVar2 + 4);
    uVar5 = param_2;
    iVar4 = iVar3;
    do {
      puVar9 = (unsigned int *)(iVar4 + -4);
      lVar14 = 2;
      puVar8 = (unsigned int *)(*piVar6 * 0x20 + param_1 + -4);
      do {
        puVar9[1] = puVar8[1];
        puVar9[2] = puVar8[2];
        puVar9[3] = puVar8[3];
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
        *puVar9 = *puVar8;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
      iVar4 = iVar4 + 0x20;
    } while (uVar5 != 0);
  }
  lVar14 = (param_2 & 0x7ffffff) << 1;
  if ((int)lVar14 != 0) {
    puVar8 = (unsigned int *)(iVar3 + -4);
    puVar9 = (unsigned int *)(param_1 + 8);
    do {
      puVar9[-2] = puVar8[1];
      puVar9[-1] = puVar8[2];
      *puVar9 = *(unsigned int *)((iVar3 - param_1) + (int)puVar9);
      puVar8 = puVar8 + 4;
      puVar9[1] = *puVar8;
      puVar9 = puVar9 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar4 = fn_82CE5410();
  if ((uVar12 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),iVar3,uVar12 & 0x3fffffff,0x20);
  }
  iVar3 = fn_82CE5410();
  if ((uVar10 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),iVar2,uVar10 & 0x3fffffff,8);
  }
  return;
}

