extern int fn_82AB15D0();
extern int fn_82B6EA60();


unsigned int * fn_82B76540(int param_1,unsigned short *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  int iVar12;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar1 = *param_2;
  uVar3 = *(unsigned int *)(param_2 + 2) & 0xffff;
  uVar6 = 0;
  uVar4 = (unsigned __int64)uVar1 & 0x1fff;
  if (*(int *)(((*(unsigned int *)(param_2 + 2) >> 10 & 0xfc0) + uVar3 + 0x1068) * 4 + iVar2) == -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820daa10,0xffffffff820da3b8,0x2f07);
  }
  if (*(int *)(((param_2[2] & 0x3f) * 0x40 + uVar3 + 0x1068) * 4 + iVar2) == -0x11111112) {
    uVar6 = fn_82B6EA60(param_1);
    uVar5 = (unsigned __int64)uVar1 & 3;
    puVar11 = param_3 + 2;
    *(unsigned int *)(((param_2[2] & 0x3f) * 0x40 + uVar3 + 0x1068) * 4 + iVar2) = uVar6;
    *(unsigned short *)((int)param_3 + 2) = 0x41;
    *param_3 = *param_3 & 0xe000ffff;
    *(short *)((int)param_3 + 6) = (short)uVar6;
    param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
    *(unsigned short *)((int)param_3 + 10) = 0;
    *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
    *(unsigned char *)puVar11 = 1;
    puVar11 = param_3 + 3;
    if (uVar5 == 1) {
      uVar10 = *puVar11 & 0xfffffff8;
    }
    else {
      uVar10 = *puVar11 & 0xfffffff8 | 1;
    }
    uVar7 = uVar4 >> 2 & 3;
    *puVar11 = uVar10;
    if (uVar7 == 1) {
      uVar10 = uVar10 & 0xffffff8f;
    }
    else {
      uVar10 = uVar10 & 0xffffff8f | 0x10;
    }
    uVar8 = uVar4 >> 4 & 3;
    *puVar11 = uVar10;
    if (uVar8 == 1) {
      uVar10 = uVar10 & 0xfffff8ff;
    }
    else {
      uVar10 = uVar10 & 0xfffff8ff | 0x100;
    }
    *puVar11 = uVar10;
    uVar9 = uVar4 >> 6 & 3;
    if (uVar9 == 1) {
      uVar10 = *puVar11 & 0xffff8fff;
    }
    else {
      uVar10 = *puVar11 & 0xffff8fff | 0x1000;
    }
    *puVar11 = uVar10;
    puVar11 = param_3 + 4;
    *(unsigned short *)((int)param_3 + 0x12) = 0;
    *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
    *(unsigned char *)puVar11 = 1;
    puVar11 = param_3 + 5;
    if (uVar5 == 1) {
      uVar10 = *puVar11 & 0xfffffff8;
    }
    else {
      uVar10 = *puVar11 & 0xfffffff8 | 1;
    }
    *puVar11 = uVar10;
    if (uVar7 == 1) {
      uVar10 = uVar10 & 0xffffff8f;
    }
    else {
      uVar10 = uVar10 & 0xffffff8f | 0x10;
    }
    *puVar11 = uVar10;
    if (uVar8 == 1) {
      uVar10 = uVar10 & 0xfffff8ff;
    }
    else {
      uVar10 = uVar10 & 0xfffff8ff | 0x100;
    }
    *puVar11 = uVar10;
    if (uVar9 == 1) {
      uVar10 = uVar10 & 0xffff8fff;
    }
    else {
      uVar10 = uVar10 & 0xffff8fff | 0x1000;
    }
    *puVar11 = uVar10;
    param_3 = param_3 + 6;
    uVar6 = 1;
  }
  uVar3 = *(unsigned int *)(((param_2[2] & 0x3f) * 0x40 + uVar3 + 0x1068) * 4 + iVar2);
  if (0x13 < uVar3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da9e4,0xffffffff820da3b8,0x2f93);
  }
  iVar12 = uVar3 * 0x1c + iVar2;
  uVar10 = (unsigned int)uVar4;
  *(unsigned int *)(iVar12 + 0x30a8) = uVar10 >> 9 & 1;
  *(unsigned int *)(iVar12 + 0x3094) = uVar10 & 3;
  *(unsigned int *)(iVar12 + 0x3098) = uVar10 >> 2 & 3;
  *(unsigned int *)(iVar12 + 0x309c) = uVar10 >> 4 & 3;
  *(unsigned int *)(iVar12 + 0x30a4) = uVar10 >> 8 & 1;
  *(unsigned int *)(iVar12 + 0x30a0) = uVar10 >> 6 & 3;
  *(unsigned int *)((uVar3 + 0x1bc) * 0x1c + iVar2) = param_2[2] & 0x3f;
  *param_4 = uVar6;
  return param_3;
}

