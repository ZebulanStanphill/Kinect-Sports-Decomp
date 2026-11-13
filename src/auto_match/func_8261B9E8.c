extern int fn_82D41968();
extern unsigned int ltcg_pool_0_0f;


void fn_8261B9E8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned __int64 uVar7;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 0x1c)) {
    return;
  }
  piVar1 = *(int **)(param_2 + 0x24);
  piVar12 = (int *)piVar1[3];
  piVar10 = piVar1;
  while (piVar2 = piVar12, piVar2 != (int *)0x0) {
    piVar10 = piVar2;
    piVar12 = (int *)piVar2[3];
  }
  if (*(char *)(piVar10 + 6) == '\x01') {
    iVar8 = (int)*(char *)(piVar10 + 4) + (int)piVar10;
  }
  else {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    return;
  }
  piVar12 = (int *)piVar1[3];
  piVar10 = piVar1;
  while (piVar2 = piVar12, piVar2 != (int *)0x0) {
    piVar10 = piVar2;
    piVar12 = (int *)piVar2[3];
  }
  if (*(char *)(piVar10 + 6) == '\x01') {
    iVar11 = (int)*(char *)(piVar10 + 4) + (int)piVar10;
  }
  else {
    iVar11 = 0;
  }
  iVar9 = 0;
  if (iVar11 != 0) {
    iVar9 = *(int *)(iVar11 + 0xc);
  }
  for (piVar12 = *(int **)(param_1 + 8); piVar12 < *(int **)(param_1 + 0xc); piVar12 = piVar12 + 1)
  {
    if (iVar9 == *piVar12) {
      return;
    }
    if (iVar8 == *piVar12) {
      return;
    }
  }
  if (*(int *)(*piVar1 + 0xc) == 3) {
    iVar8 = (*(int **)piVar1[3])[3];
    if (iVar8 == 10) {
      uVar7 = (**(int (***)())(**(int **)piVar1[3] + 0x10))();
      uVar6 = uVar7 - 0x10;
      if ((uVar7 & 0xffffffff) == 0) {
        uVar6 = 0;
      }
      iVar8 = *(int *)(param_2 + 0x24);
    }
    else {
      if (iVar8 != 0xe) goto LAB_8261bb6c;
      iVar8 = *(int *)(param_2 + 0x24);
      uVar6 = (unsigned __int64)**(unsigned int **)(iVar8 + 0xc);
    }
    iVar8 = fn_82D41968(uVar6,*(unsigned int *)(iVar8 + 4));
    if (iVar8 != 0) {
      uVar3 = *(unsigned int *)(iVar8 + 8);
      if ((*(unsigned int *)(param_1 + 0x10) & uVar3) == 0) {
        return;
      }
      uVar4 = *(unsigned int *)(param_1 + 0x14);
      if (((uVar4 & 0xfef1bfff) != 0) && ((uVar3 & uVar4) != 0)) {
        return;
      }
      if (((uVar3 & 0x10e4000) != 0) && ((uVar3 & ~uVar4 & 0x10e4000) == 0)) {
        return;
      }
    }
  }
LAB_8261bb6c:
  *(unsigned char *)(param_1 + 0x1c) = 1;
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 0x1c);
  uVar5 = ltcg_pool_0_0f;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar5 = *(unsigned int *)(param_2 + 0x1c);
  }
  *(unsigned int *)(param_1 + 4) = uVar5;
  return;
}

