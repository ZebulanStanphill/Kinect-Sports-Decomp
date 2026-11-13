void fn_82460070(int param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 0x34);
  uVar9 = 0;
  uVar8 = 0;
  *param_2 = 0;
  uVar7 = 0;
  uVar6 = 0;
  piVar3 = (int *)(iVar5 + 0x200);
  do {
    if (*piVar3 == *(int *)(iVar1 + 0x1c)) {
      iVar5 = uVar4 * 0x28 + iVar5;
      uVar9 = *(unsigned int *)(iVar5 + 0x20c);
      uVar8 = *(unsigned int *)(iVar5 + 0x210);
      uVar7 = *(unsigned int *)(iVar5 + 0x214);
      uVar6 = *(unsigned int *)(iVar5 + 0x218);
      break;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 10;
  } while (uVar4 < 0xc);
  if (*(int *)(iVar1 + 4) != 0) {
LAB_824601b4:
    *param_2 = uVar7;
    return;
  }
  iVar5 = *(int *)(iVar1 + 0x38);
  if (iVar2 != *(int *)(iVar1 + 0xc)) {
    if (iVar5 != 0) {
      if (*(float *)((1 - iVar2) * 0x11c + *(int *)(param_1 + 0x3c) + 0x114) <=
          *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114)) goto LAB_824601b4;
      if (iVar5 != 0) goto LAB_824601ac;
    }
    if (*(float *)((1 - iVar2) * 0x11c + *(int *)(param_1 + 0x3c) + 0x114) <
        *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114)) {
LAB_824601ac:
      *param_2 = uVar6;
      return;
    }
    goto LAB_824601b4;
  }
  if (iVar5 != 0) {
    if (*(float *)(iVar1 + 0x34) <= *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114))
    goto LAB_82460144;
    if (iVar5 != 0) goto LAB_8246014c;
  }
  if (*(float *)(iVar1 + 0x34) < *(float *)(iVar2 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114)) {
LAB_8246014c:
    *param_2 = uVar8;
    return;
  }
LAB_82460144:
  *param_2 = uVar9;
  return;
}

