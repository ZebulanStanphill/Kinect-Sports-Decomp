extern int fn_82775240();
extern int fn_82F68CC0();


void fn_827757C8(int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    lVar3 = 8;
  }
  else {
    if ((unsigned int)(*piVar8 * 5) <= (unsigned int)((piVar8[1] + 1) * 4)) goto LAB_82775824;
    lVar3 = ((unsigned __int64)(unsigned int)piVar8[1] + 1 & 0x7fffffff) << 1;
  }
  fn_82775240(param_1,param_2,lVar3);
LAB_82775824:
  piVar8 = (int *)*param_1;
  param_4 = piVar8[1] & param_4;
  *piVar8 = *piVar8 + 1;
  iVar1 = *param_1;
  iVar6 = param_4 * 0x20 + iVar1;
  iVar2 = *(int *)(iVar6 + 8);
  puVar10 = (unsigned int *)(iVar6 + 8);
  uVar9 = param_4;
  if (iVar2 == -2) {
    *puVar10 = 0xffffffff;
    *(unsigned int *)(iVar6 + 0x10) = *param_3;
    *(unsigned int *)(iVar6 + 0x14) = param_3[1];
    *(unsigned int *)(iVar6 + 0x18) = param_3[2];
    *(unsigned int *)(iVar6 + 0x1c) = param_3[3];
    *(unsigned int *)(iVar6 + 0x20) = param_3[4];
    *(unsigned int *)(iVar6 + 0x24) = param_3[5];
  }
  else {
    do {
      uVar9 = *(unsigned int *)(iVar1 + 4) & uVar9 + 1;
      iVar7 = uVar9 * 0x20 + iVar1;
      piVar8 = (int *)(iVar7 + 8);
    } while (*piVar8 != -2);
    uVar4 = *(unsigned int *)(iVar6 + 0xc);
    if (uVar4 == param_4) {
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar6 + 0xc);
        *(unsigned int *)(iVar7 + 0x10) = *(unsigned int *)(iVar6 + 0x10);
        *(unsigned int *)(iVar7 + 0x14) = *(unsigned int *)(iVar6 + 0x14);
        *(unsigned int *)(iVar7 + 0x18) = *(unsigned int *)(iVar6 + 0x18);
        *(unsigned int *)(iVar7 + 0x1c) = *(unsigned int *)(iVar6 + 0x1c);
        *(unsigned int *)(iVar7 + 0x20) = *(unsigned int *)(iVar6 + 0x20);
        *(unsigned int *)(iVar7 + 0x24) = *(unsigned int *)(iVar6 + 0x24);
      }
      fn_82F68CC0(iVar6 + 0x10,param_3,0x18);
      *puVar10 = uVar9;
    }
    else {
      while (puVar5 = (unsigned int *)(uVar4 * 0x20 + iVar1 + 8), *puVar5 != param_4) {
        uVar4 = *puVar5;
      }
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar6 + 0xc);
        *(unsigned int *)(iVar7 + 0x10) = *(unsigned int *)(iVar6 + 0x10);
        *(unsigned int *)(iVar7 + 0x14) = *(unsigned int *)(iVar6 + 0x14);
        *(unsigned int *)(iVar7 + 0x18) = *(unsigned int *)(iVar6 + 0x18);
        *(unsigned int *)(iVar7 + 0x1c) = *(unsigned int *)(iVar6 + 0x1c);
        *(unsigned int *)(iVar7 + 0x20) = *(unsigned int *)(iVar6 + 0x20);
        *(unsigned int *)(iVar7 + 0x24) = *(unsigned int *)(iVar6 + 0x24);
      }
      *puVar5 = uVar9;
      fn_82F68CC0(iVar6 + 0x10,param_3,0x18);
      *puVar10 = 0xffffffff;
    }
  }
  *(unsigned int *)(iVar6 + 0xc) = param_4;
  return;
}

