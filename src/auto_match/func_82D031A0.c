extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82D02A58();
extern int fn_82D03028();
extern int fn_82D030F0();


int fn_82D031A0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned char auStack_30 [4];
  unsigned int auStack_2c [11];
  
  uVar9 = param_2 + 0x1fU & 0xfffffff0;
  if (uVar9 < 0x100) {
    uVar9 = 0x100;
  }
  iVar3 = fn_82D030F0(param_1,uVar9);
  if (iVar3 != 0) {
    return iVar3;
  }
  pcVar4 = (char *)(**(int (***)())(**(int **)(param_1 + 0x98) + 4))(auStack_30);
  if ((*pcVar4 == '\0') || (iVar3 = *(int *)(param_1 + 0xa8), iVar3 == param_1 + 0xa4)) {
    auStack_2c[0] =
         (**(int (***)())(**(int **)(param_1 + 0x98) + 8))(*(int **)(param_1 + 0x98),uVar9 + 0x138);
    piVar6 = (int *)(**(int (***)())(**(int **)(param_1 + 0x98) + 0xc))
                              (*(int **)(param_1 + 0x98),auStack_2c[0],auStack_2c);
    if (piVar6 == (int *)0x0) {
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      (**(int (***)())(*piVar6 + 4))(piVar6,uVar9);
      iVar3 = fn_82D030F0(param_1,uVar9);
      if (iVar3 != 0) {
        return iVar3;
      }
      auStack_2c[0] =
           (**(int (***)())(**(int **)(param_1 + 0x98) + 8))(*(int **)(param_1 + 0x98),uVar9 + 0x138);
      piVar6 = (int *)(**(int (***)())(**(int **)(param_1 + 0x98) + 0xc))
                                (*(int **)(param_1 + 0x98),auStack_2c[0],auStack_2c);
      if (piVar6 == (int *)0x0) goto LAB_82d03298;
    }
    piVar6[2] = 0;
    piVar8 = (int *)(param_1 + 0xa4);
    piVar6[4] = (int)(piVar6 + 6);
    piVar6[3] = auStack_2c[0];
    piVar6[5] = (int)piVar6 + auStack_2c[0];
    piVar6[4] = (int)piVar6 + 0x27U & 0xfffffff0;
    piVar6[5] = (int)piVar6 + auStack_2c[0] & 0xfffffff0;
    for (piVar1 = *(int **)(param_1 + 0xa8); (piVar1 != piVar8 && (piVar1 < piVar6));
        piVar1 = (int *)piVar1[1]) {
    }
    piVar6[1] = (int)piVar1;
    iVar3 = *piVar1;
    *piVar6 = iVar3;
    *(int **)(iVar3 + 4) = piVar6;
    *piVar1 = (int)piVar6;
    if (*(int *)(param_1 + 0x10) != param_1 + 0x9c) {
      *(unsigned int *)(*(int *)(param_1 + 0x10) + 4) = *(unsigned int *)(param_1 + 0x14) | 1;
      *(int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) = *(int *)(param_1 + 0x14);
      fn_82D02A58(param_1,*(int *)(param_1 + 0x10),
                    *(unsigned int *)(*(int *)(param_1 + 0x10) + 4) & 0xfffffffc);
    }
    uVar7 = (piVar6[5] - piVar6[4]) - 0x10;
    *(unsigned int *)(param_1 + 0x14) = uVar7;
    iVar3 = piVar6[4];
    *(int *)(param_1 + 0x10) = iVar3;
    *(unsigned int *)(iVar3 + 4) = uVar7 | 1;
    *(int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) = *(int *)(param_1 + 0x14);
    iVar3 = piVar6[5];
    *(unsigned int *)(iVar3 + -0xc) = 2;
    if ((int *)piVar6[1] != piVar8) {
      *(unsigned int *)(iVar3 + -0xc) = ((int *)piVar6[1])[4] - (iVar3 + -0x10) | 2;
    }
    if ((int *)*piVar6 != piVar8) {
      iVar3 = ((int *)*piVar6)[5];
      *(unsigned int *)(iVar3 + -0xc) =
           *(int *)(param_1 + 0x10) - (iVar3 + -0x10) | *(unsigned int *)(iVar3 + -0xc) & 3;
    }
    iVar3 = *(int *)(param_1 + 0xc0);
    iVar5 = *(int *)(param_1 + 0xbc);
  }
  else {
    pcVar4 = (char *)fn_82D03028(auStack_30,param_1,*(int *)(iVar3 + 0xc) + uVar9);
    if (*pcVar4 == '\0') {
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      (**(int (***)())(*piVar6 + 4))(piVar6,uVar9);
      iVar5 = fn_82D030F0(param_1,uVar9);
      if (iVar5 != 0) {
        return iVar5;
      }
      pcVar4 = (char *)fn_82D03028(auStack_30,param_1,*(int *)(iVar3 + 0xc) + uVar9);
      if (*pcVar4 == '\0') {
LAB_82d03298:
        (**(int (***)())(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),uVar9);
        return 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0xc0);
    iVar5 = *(int *)(param_1 + 0xbc);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0xc0) = iVar3 + uVar9 + -0x10;
  uVar7 = *(int *)(param_1 + 0x14) - uVar9;
  *(unsigned int *)(param_1 + 0xbc) = iVar5 + uVar9;
  *(unsigned int *)(param_1 + 0x10) = iVar2 + uVar9;
  *(unsigned int *)(param_1 + 0x14) = uVar7;
  *(unsigned int *)(iVar2 + uVar9 + 4) = uVar7 | 1;
  *(unsigned int *)(iVar2 + uVar9) = uVar9;
  *(unsigned int *)(iVar2 + 4) = uVar9 | 3;
  return iVar2 + 0x10;
}

