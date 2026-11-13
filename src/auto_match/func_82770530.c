extern int fn_8276FF80();


void fn_82770530(int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int *puVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((unsigned int)(*piVar1 * 5) <= (unsigned int)((piVar1[1] + 1) * 4)) goto LAB_8277058c;
    lVar4 = ((unsigned __int64)(unsigned int)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8276FF80(param_1,param_2,lVar4);
LAB_8277058c:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar11 = param_4 * 0x18 + iVar2;
  puVar12 = (unsigned int *)(iVar11 + 8);
  uVar3 = *puVar12;
  uVar5 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar12 = 0xffffffff;
    *(unsigned int *)(iVar11 + 0x10) = *param_3;
    *(unsigned int *)(iVar11 + 0x14) = param_3[1];
    *(unsigned int *)(iVar11 + 0x18) = param_3[2];
    uVar10 = param_3[3];
  }
  else {
    do {
      uVar5 = *(unsigned int *)(iVar2 + 4) & uVar5 + 1;
      iVar8 = uVar5 * 0x18 + iVar2;
      puVar9 = (unsigned int *)(iVar8 + 8);
    } while (*puVar9 != 0xfffffffe);
    uVar6 = *(unsigned int *)(iVar11 + 0xc);
    if (uVar6 == param_4) {
      if (puVar9 != (unsigned int *)0x0) {
        *puVar9 = uVar3;
        *(unsigned int *)(iVar8 + 0xc) = *(unsigned int *)(iVar11 + 0xc);
        *(unsigned int *)(iVar8 + 0x10) = *(unsigned int *)(iVar11 + 0x10);
        *(unsigned int *)(iVar8 + 0x14) = *(unsigned int *)(iVar11 + 0x14);
        *(unsigned int *)(iVar8 + 0x18) = *(unsigned int *)(iVar11 + 0x18);
        *(unsigned int *)(iVar8 + 0x1c) = *(unsigned int *)(iVar11 + 0x1c);
      }
      *(unsigned int *)(iVar11 + 0x10) = *param_3;
      *(unsigned int *)(iVar11 + 0x14) = param_3[1];
      *(unsigned int *)(iVar11 + 0x18) = param_3[2];
      uVar10 = param_3[3];
      *puVar12 = uVar5;
    }
    else {
      while (puVar7 = (unsigned int *)(uVar6 * 0x18 + iVar2 + 8), *puVar7 != param_4) {
        uVar6 = *puVar7;
      }
      if (puVar9 != (unsigned int *)0x0) {
        *puVar9 = uVar3;
        *(unsigned int *)(iVar8 + 0xc) = *(unsigned int *)(iVar11 + 0xc);
        *(unsigned int *)(iVar8 + 0x10) = *(unsigned int *)(iVar11 + 0x10);
        *(unsigned int *)(iVar8 + 0x14) = *(unsigned int *)(iVar11 + 0x14);
        *(unsigned int *)(iVar8 + 0x18) = *(unsigned int *)(iVar11 + 0x18);
        *(unsigned int *)(iVar8 + 0x1c) = *(unsigned int *)(iVar11 + 0x1c);
      }
      *puVar7 = uVar5;
      *(unsigned int *)(iVar11 + 0x10) = *param_3;
      *(unsigned int *)(iVar11 + 0x14) = param_3[1];
      *(unsigned int *)(iVar11 + 0x18) = param_3[2];
      uVar10 = param_3[3];
      *puVar12 = 0xffffffff;
    }
  }
  *(unsigned int *)(iVar11 + 0x1c) = uVar10;
  *(unsigned int *)(iVar11 + 0xc) = param_4;
  return;
}

