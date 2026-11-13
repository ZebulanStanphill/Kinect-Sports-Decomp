typedef unsigned char bool;
#define false 0


void fn_82A453D0(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  
  param_2 = param_2 * 0x60;
  puVar11 = (unsigned int *)(param_2 + *(int *)(param_1 + 8));
  bVar4 = false;
  uVar1 = *(unsigned short *)((int)puVar11 + 0x52);
  *param_4 = (puVar11[9] & 0x1f) * 0x100 + puVar11[0x11] + (unsigned int)uVar1;
  uVar2 = param_3 << (puVar11[1] >> 0x1d & 1) + 1;
  uVar5 = 0;
  uVar10 = uVar2;
  if (uVar1 != 0) {
    uVar5 = 0x100 - uVar1;
    if (uVar2 < uVar5) {
      uVar10 = 0;
      *(unsigned short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar2 + uVar1;
      uVar5 = uVar2;
    }
    else {
      *(unsigned short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = 0;
      uVar10 = puVar11[9] & 0x1f;
      uVar9 = uVar10 + 1;
      uVar9 = -(unsigned int)(uVar9 < (*puVar11 >> 0x16 & 0x1f)) & uVar9;
      if (uVar10 != uVar9) {
        puVar11[0xe] = 1;
        puVar11[9] = uVar9 & 0x1f | puVar11[9] & 0xffffffe0;
      }
      if ((puVar11[1] & 0x80000000) != 0x80000000) {
        puVar11[0xc] = 1;
        puVar11[1] = puVar11[1] | 0x80000000;
      }
      bVar4 = uVar9 == 0;
      uVar10 = -(unsigned int)!bVar4 & uVar2 - uVar5;
    }
  }
  uVar8 = (unsigned __int64)(uVar10 >> 8);
  uVar2 = *puVar11;
  uVar10 = uVar10 & 0xff;
  uVar3 = (unsigned __int64)puVar11[9] & 0x1f;
  uVar7 = (unsigned __int64)(uVar2 >> 0x1b);
  uVar6 = 0;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7) {
      if (((puVar11[1] & 0x80000000) != 0) && (bVar4)) goto LAB_82a45514;
    }
    uVar7 = (unsigned __int64)(uVar2 >> 0x16) & 0x1f;
  }
  uVar6 = uVar7 - uVar3;
LAB_82a45514:
  if (uVar8 != 0) {
    if ((uVar6 & 0xffffffff) <= uVar8) {
      uVar8 = uVar6;
    }
    uVar6 = uVar6 - uVar8;
    uVar5 = (int)((uVar8 & 0xffffffff) << 8) + uVar5;
    uVar8 = -(unsigned __int64)(uVar3 + uVar8 < ((unsigned __int64)(uVar2 >> 0x16) & 0x1f)) & uVar3 + uVar8;
    if (uVar3 != (uVar8 & 0xffffffff)) {
      puVar11[0xe] = 1;
      puVar11[9] = (unsigned int)uVar8 & 0x1f | puVar11[9] & 0xffffffe0;
    }
    if ((puVar11[1] & 0x80000000) != 0x80000000) {
      puVar11[0xc] = 1;
      puVar11[1] = puVar11[1] | 0x80000000;
    }
  }
  if ((uVar10 != 0) && ((uVar6 & 0xffffffff) != 0)) {
    uVar5 = uVar10 + uVar5;
    *(short *)(param_2 + *(int *)(param_1 + 8) + 0x52) = (short)uVar10;
  }
  param_2 = param_2 + *(int *)(param_1 + 8);
  *(unsigned int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + (uVar5 >> (puVar11[1] >> 0x1d & 1) + 1);
  return;
}

