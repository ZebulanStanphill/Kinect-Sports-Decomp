void fn_8307E218(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  unsigned int *puVar9;
  
  param_2 = param_2 * 0x60;
  puVar9 = (unsigned int *)(param_2 + *(int *)(param_1 + 8));
  uVar1 = *(unsigned short *)((int)puVar9 + 0x52);
  *param_4 = (puVar9[9] & 0x1f) * 0x100 + puVar9[0x11] + (unsigned int)uVar1;
  uVar3 = param_3 << (puVar9[1] >> 0x1d & 1) + 1;
  uVar6 = 0;
  uVar8 = uVar3;
  if (uVar1 != 0) {
    uVar6 = 0x100 - uVar1;
    if (uVar3 < uVar6) {
      uVar8 = 0;
      *(unsigned short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar3 + uVar1;
      uVar6 = uVar3;
    }
    else {
      *(unsigned short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = 0;
      uVar8 = (puVar9[9] & 0x1f) + 1;
      puVar9[1] = puVar9[1] | 0x80000000;
      uVar8 = -(unsigned int)(uVar8 < (*puVar9 >> 0x16 & 0x1f)) & uVar8;
      puVar9[9] = uVar8 & 0x1f | puVar9[9] & 0xffffffe0;
      uVar8 = -(unsigned int)(uVar8 != 0) & uVar3 - uVar6;
    }
  }
  uVar5 = (unsigned __int64)(uVar8 >> 8);
  uVar3 = *puVar9;
  uVar8 = uVar8 & 0xff;
  uVar4 = (unsigned __int64)puVar9[9] & 0x1f;
  uVar2 = (unsigned __int64)(uVar3 >> 0x1b);
  uVar7 = 0;
  if (uVar4 < uVar2) {
    uVar7 = uVar2 - uVar4;
  }
  else if ((uVar2 < uVar4) || ((puVar9[1] & 0x80000000) == 0)) {
    uVar7 = ((unsigned __int64)(uVar3 >> 0x16) & 0x1f) - uVar4;
  }
  if (uVar5 != 0) {
    if ((uVar7 & 0xffffffff) <= uVar5) {
      uVar5 = uVar7;
    }
    uVar6 = (int)((uVar5 & 0xffffffff) << 8) + uVar6;
    puVar9[1] = puVar9[1] | 0x80000000;
    uVar7 = uVar7 - uVar5;
    puVar9[9] = -(unsigned int)(uVar4 + uVar5 < ((unsigned __int64)(uVar3 >> 0x16) & 0x1f)) & (unsigned int)(uVar4 + uVar5)
                & 0x1f | puVar9[9] & 0xffffffe0;
  }
  if ((uVar8 != 0) && ((uVar7 & 0xffffffff) != 0)) {
    uVar6 = uVar8 + uVar6;
    *(short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar8;
  }
  param_2 = param_2 + *(int *)(param_1 + 8);
  *(unsigned int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + (uVar6 >> (puVar9[1] >> 0x1d & 1) + 1);
  return;
}

