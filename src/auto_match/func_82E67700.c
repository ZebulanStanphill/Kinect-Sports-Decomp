#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82E674C0();


unsigned __int64
fn_82E67700(int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int *param_4,int param_5,
             __int64 param_6)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar8;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned int *puVar10;
  
  puVar10 = (unsigned int *)param_2[0x1d];
  iVar1 = *param_1;
  iVar9 = 0;
  iVar5 = (param_2[9] - (int)puVar10) * 8 + param_2[0x12];
  if (*(int *)(iVar1 + 0xd4) != 1) {
    *(unsigned char *)((int)param_2 + 0x81) = 0;
    param_2[0x24] = 0;
    param_2[0x22] = 1;
    if (param_5 == 0) {
      return 0;
    }
    *(unsigned int *)param_2[0x1e] = 0;
    *(unsigned int *)param_2[0x1f] = 0;
    return 0;
  }
  uVar8 = *param_4 + iVar5;
  *param_4 = uVar8;
  if ((int)*(unsigned int *)(iVar1 + 0xc) <= (int)uVar8) {
    uVar8 = *(unsigned int *)(iVar1 + 0xc);
  }
  *param_4 = uVar8;
  if (*(int *)(*param_1 + 0x3c) < 3) {
    iVar2 = 8 << (*(unsigned int *)(iVar1 + 8) & 0x3f);
    iVar9 = 4;
    iVar4 = iVar2 + -8;
    if ((((0 < (int)uVar8) &&
         ((iVar4 < (int)(param_2[0x10] - uVar8) || ((iVar2 + -0x18) * 2 < (int)param_2[0x10])))) &&
        ((param_5 != 0 || ((param_1[0x4270] != 0 && (param_6 < 0)))))) ||
       ((iVar4 < (int)*param_4 && ((param_5 != 0 || ((param_1[0x4270] != 0 && (param_6 < 0)))))))) {
      return 0xffffffff8001000c;
    }
  }
  uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    uVar6 = 0;
  }
  else if (*(int *)(iVar1 + 0x3c) < 3) {
    uVar6 = uVar6 + 0xb & 0xff;
  }
  else if (*(int *)(iVar1 + 0x25c) == 0) {
    uVar6 = uVar6 + 6 & 0xff;
  }
  else {
    uVar6 = uVar6 + 0x11 & 0xff;
  }
  if (iVar5 != 0) {
    if (param_5 == 0) goto LAB_82e67a68;
    puVar10 = (unsigned int *)param_2[0x1d];
    lVar3 = (uVar6 >> 3 & 0x1c) + ZEXT48(puVar10);
    fn_82E674C0(ZEXT48(puVar10),iVar5,lVar3,uVar6 - (uVar6 & 0xe0),
                  ((unsigned __int64)param_2[10] - lVar3) + (unsigned __int64)*param_2);
  }
  if (param_5 != 0) {
    *(unsigned int *)param_2[0x1e] = 0;
    *(unsigned int *)param_2[0x1f] = 0;
    if (0xf < *(unsigned char *)(param_2 + 0x20)) {
      *(unsigned char *)(param_2 + 0x20) = 0;
    }
    if (uVar6 < 0x20) {
      *puVar10 = 0xffffffffU >> ((unsigned int)uVar6 & 0x3f) & *puVar10;
    }
    else {
      *puVar10 = 0;
    }
    uVar8 = (unsigned int)*(unsigned char *)(param_2 + 0x20) << 0x1c | *puVar10;
    *puVar10 = uVar8;
    if (*(int *)(iVar1 + 0x3c) < 3) {
      uVar8 = 0 << (0x1cU - iVar9 & 0x3f) | uVar8;
      *puVar10 = uVar8;
      *puVar10 = *param_4 << ((0x19 - iVar9) - *(int *)(iVar1 + 8) & 0x3fU) | uVar8;
    }
    else {
      uVar8 = *param_4;
      iVar5 = *(int *)(iVar1 + 8);
      *(short *)(param_2 + 0xd) = (short)uVar6;
      param_2[0xe] = uVar8;
      *puVar10 = *(int *)(iVar1 + 0xc) << (0x1aU - iVar5 & 0x3f) | *puVar10;
    }
    *(char *)(param_2 + 0x20) = *(char *)(param_2 + 0x20) + '\x01';
  }
LAB_82e67a68:
  uVar7 = uVar6 + param_2[0x12];
  iVar9 = (int)uVar7;
  iVar5 = (iVar9 >> 3) + (unsigned int)(iVar9 < 0 && (uVar7 & 7) != 0);
  uVar8 = param_2[9] + iVar5;
  param_2[9] = uVar8;
  param_2[0x11] = param_2[0x11] + iVar5;
  param_2[0x12] = iVar9 + ((iVar9 >> 3) + (unsigned int)(iVar9 < 0 && (uVar7 & 7) != 0)) * -8;
  if ((param_2[10] + *param_2 < uVar8) && (param_5 != 0)) {
    return 0xffffffff80040003;
  }
  *(unsigned char *)((int)param_2 + 0x81) = 0;
  if (*(int *)(iVar1 + 0x3c) < 3) {
    param_2[0x21] = 1;
  }
  param_2[0x22] = 1;
  *(unsigned __int64 *)(param_2 + 0x16) = *(__int64 *)(param_2 + 0x16) - param_2[0x1a] * uVar6;
  return 0;
}

