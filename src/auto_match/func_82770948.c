extern int fn_8276FF80();


void fn_82770948(int *param_1,unsigned __int64 param_2,int *param_3,unsigned int param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  int iVar9;
  unsigned int *puVar10;
  int iVar11;
  unsigned int *puVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((unsigned int)(*piVar1 * 5) <= (unsigned int)((piVar1[1] + 1) * 4)) goto LAB_827709a4;
    lVar5 = ((unsigned __int64)(unsigned int)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8276FF80(param_1,param_2,lVar5);
LAB_827709a4:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar11 = param_4 * 0x18 + iVar2;
  puVar12 = (unsigned int *)(iVar11 + 8);
  uVar3 = *puVar12;
  uVar6 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar12 = 0xffffffff;
    puVar4 = (unsigned int *)*param_3;
    *(unsigned int *)(iVar11 + 0x10) = *puVar4;
    *(unsigned int *)(iVar11 + 0x14) = puVar4[1];
    *(unsigned int *)(iVar11 + 0x18) = puVar4[2];
    *(unsigned int *)(iVar11 + 0x1c) = *(unsigned int *)param_3[1];
  }
  else {
    do {
      uVar6 = *(unsigned int *)(iVar2 + 4) & uVar6 + 1;
      iVar9 = uVar6 * 0x18 + iVar2;
      puVar10 = (unsigned int *)(iVar9 + 8);
    } while (*puVar10 != 0xfffffffe);
    uVar7 = *(unsigned int *)(iVar11 + 0xc);
    if (uVar7 == param_4) {
      if (puVar10 != (unsigned int *)0x0) {
        *puVar10 = uVar3;
        *(unsigned int *)(iVar9 + 0xc) = *(unsigned int *)(iVar11 + 0xc);
        *(unsigned int *)(iVar9 + 0x10) = *(unsigned int *)(iVar11 + 0x10);
        *(unsigned int *)(iVar9 + 0x14) = *(unsigned int *)(iVar11 + 0x14);
        *(unsigned int *)(iVar9 + 0x18) = *(unsigned int *)(iVar11 + 0x18);
        *(unsigned int *)(iVar9 + 0x1c) = *(unsigned int *)(iVar11 + 0x1c);
      }
      puVar4 = (unsigned int *)*param_3;
      *(unsigned int *)(iVar11 + 0x10) = *puVar4;
      *(unsigned int *)(iVar11 + 0x14) = puVar4[1];
      *(unsigned int *)(iVar11 + 0x18) = puVar4[2];
      *(unsigned int *)(iVar11 + 0x1c) = *(unsigned int *)param_3[1];
      *puVar12 = uVar6;
    }
    else {
      while (puVar8 = (unsigned int *)(uVar7 * 0x18 + iVar2 + 8), *puVar8 != param_4) {
        uVar7 = *puVar8;
      }
      if (puVar10 != (unsigned int *)0x0) {
        *puVar10 = uVar3;
        *(unsigned int *)(iVar9 + 0xc) = *(unsigned int *)(iVar11 + 0xc);
        *(unsigned int *)(iVar9 + 0x10) = *(unsigned int *)(iVar11 + 0x10);
        *(unsigned int *)(iVar9 + 0x14) = *(unsigned int *)(iVar11 + 0x14);
        *(unsigned int *)(iVar9 + 0x18) = *(unsigned int *)(iVar11 + 0x18);
        *(unsigned int *)(iVar9 + 0x1c) = *(unsigned int *)(iVar11 + 0x1c);
      }
      *puVar8 = uVar6;
      puVar4 = (unsigned int *)*param_3;
      *(unsigned int *)(iVar11 + 0x10) = *puVar4;
      *(unsigned int *)(iVar11 + 0x14) = puVar4[1];
      *(unsigned int *)(iVar11 + 0x18) = puVar4[2];
      *(unsigned int *)(iVar11 + 0x1c) = *(unsigned int *)param_3[1];
      *puVar12 = 0xffffffff;
    }
  }
  *(unsigned int *)(iVar11 + 0xc) = param_4;
  return;
}

