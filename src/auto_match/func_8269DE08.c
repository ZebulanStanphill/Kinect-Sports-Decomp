extern int fn_8269B610();
extern int fn_8269DB80();


void fn_8269DE08(int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  __int64 lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  
  piVar7 = (int *)*param_1;
  if (piVar7 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((unsigned int)(*piVar7 * 5) <= (unsigned int)((piVar7[1] + 1) * 4)) goto LAB_8269de64;
    lVar5 = ((unsigned __int64)(unsigned int)piVar7[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8269DB80(param_1,param_2,lVar5);
LAB_8269de64:
  piVar7 = (int *)*param_1;
  param_4 = piVar7[1] & param_4;
  *piVar7 = *piVar7 + 1;
  iVar1 = *param_1;
  iVar8 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar8 + 8);
  puVar11 = (unsigned int *)(iVar8 + 8);
  uVar10 = param_4;
  if (iVar2 == -2) {
    *puVar11 = 0xffffffff;
    iVar1 = *(int *)*param_3;
    *(int *)(iVar8 + 0xc) = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(unsigned char *)(iVar8 + 0x10) = *(unsigned char *)param_3[1];
  }
  else {
    do {
      uVar10 = uVar10 + 1 & *(unsigned int *)(iVar1 + 4);
      iVar6 = uVar10 * 0xc + iVar1;
      piVar7 = (int *)(iVar6 + 8);
    } while (*piVar7 != -2);
    piVar4 = (int *)(iVar8 + 0xc);
    uVar3 = *(unsigned int *)(*(int *)(iVar8 + 0xc) + 0xc) & *(unsigned int *)(iVar1 + 4);
    if (uVar3 == param_4) {
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar6 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(unsigned char *)(iVar6 + 0x10) = *(unsigned char *)(iVar8 + 0x10);
      }
      fn_8269B610(piVar4,param_3);
      *puVar11 = uVar10;
    }
    else {
      while (puVar9 = (unsigned int *)(uVar3 * 0xc + iVar1 + 8), *puVar9 != param_4) {
        uVar3 = *puVar9;
      }
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar6 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(unsigned char *)(iVar6 + 0x10) = *(unsigned char *)(iVar8 + 0x10);
      }
      *puVar9 = uVar10;
      fn_8269B610(piVar4,param_3);
      *puVar11 = 0xffffffff;
    }
  }
  return;
}

