extern int fn_8276B628();


void fn_8276D5E8(int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((unsigned int)(*piVar1 * 5) <= (unsigned int)((piVar1[1] + 1) * 4)) goto LAB_8276d644;
    lVar6 = ((unsigned __int64)(unsigned int)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8276B628(param_1,param_2,lVar6);
LAB_8276d644:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar5 = param_4 * 0x10 + iVar2;
  puVar12 = (unsigned int *)(iVar5 + 8);
  uVar3 = *puVar12;
  uVar7 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar12 = 0xffffffff;
    *(unsigned short *)(iVar5 + 0x10) = *(unsigned short *)param_3;
    *(unsigned short *)(iVar5 + 0x12) = *(unsigned short *)((int)param_3 + 2);
    *(unsigned int *)(iVar5 + 0x14) = param_3[1];
  }
  else {
    do {
      uVar7 = *(unsigned int *)(iVar2 + 4) & uVar7 + 1;
      iVar10 = uVar7 * 0x10 + iVar2;
      puVar11 = (unsigned int *)(iVar10 + 8);
    } while (*puVar11 != 0xfffffffe);
    uVar8 = *(unsigned int *)(iVar5 + 0xc);
    if (uVar8 == param_4) {
      if (puVar11 != (unsigned int *)0x0) {
        *puVar11 = uVar3;
        *(unsigned int *)(iVar10 + 0xc) = *(unsigned int *)(iVar5 + 0xc);
        *(unsigned short *)(iVar10 + 0x10) = *(unsigned short *)(iVar5 + 0x10);
        *(unsigned short *)(iVar10 + 0x12) = *(unsigned short *)(iVar5 + 0x12);
        *(unsigned int *)(iVar10 + 0x14) = *(unsigned int *)(iVar5 + 0x14);
      }
      *(unsigned int *)(iVar5 + 0x10) = *param_3;
      uVar4 = param_3[1];
      *puVar12 = uVar7;
      *(unsigned int *)(iVar5 + 0x14) = uVar4;
    }
    else {
      while (puVar9 = (unsigned int *)(uVar8 * 0x10 + iVar2 + 8), *puVar9 != param_4) {
        uVar8 = *puVar9;
      }
      if (puVar11 != (unsigned int *)0x0) {
        *puVar11 = uVar3;
        *(unsigned int *)(iVar10 + 0xc) = *(unsigned int *)(iVar5 + 0xc);
        *(unsigned short *)(iVar10 + 0x10) = *(unsigned short *)(iVar5 + 0x10);
        *(unsigned short *)(iVar10 + 0x12) = *(unsigned short *)(iVar5 + 0x12);
        *(unsigned int *)(iVar10 + 0x14) = *(unsigned int *)(iVar5 + 0x14);
      }
      *puVar9 = uVar7;
      *(unsigned int *)(iVar5 + 0x10) = *param_3;
      uVar4 = param_3[1];
      *puVar12 = 0xffffffff;
      *(unsigned int *)(iVar5 + 0x14) = uVar4;
    }
  }
  *(unsigned int *)(iVar5 + 0xc) = param_4;
  return;
}

