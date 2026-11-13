void fn_82B75EF0(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  __int64 lVar14;
  
  uVar10 = *param_2;
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar11 = (unsigned char *)((int)param_3 + -1);
  lVar14 = 0x20;
  do {
    puVar11 = puVar11 + 1;
    *puVar11 = 0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  *(unsigned int *)(iVar1 + 0x5b3c) = (unsigned int)((uVar10 & 0x1fff0000) != 0);
  *(unsigned short *)((int)param_3 + 2) = 0x41;
  *param_3 = *param_3 & 0xe000ffff;
  puVar12 = param_3 + 2;
  *(short *)((int)param_3 + 6) = (short)*(unsigned int *)(iVar1 + 0x5b38);
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)param_2[4];
  uVar10 = *puVar12;
  uVar2 = param_2[4];
  *puVar12 = uVar2 & 0x3f0000 | uVar10 & 0xffc0ffff;
  *puVar12 = param_2[4] & 0x800000 | uVar2 & 0x3f0000 | uVar10 & 0xff40ffff | 0x400000;
  puVar12 = param_3 + 3;
  uVar2 = *puVar12;
  uVar3 = param_2[7] & 7;
  *puVar12 = uVar2 & 0xfffffff8 | uVar3;
  uVar4 = param_2[7] & 0x70;
  *puVar12 = uVar2 & 0xffffff88 | uVar3 | uVar4;
  uVar5 = param_2[7] & 0x700;
  *puVar12 = uVar2 & 0xfffff888 | uVar3 | uVar4 | uVar5;
  uVar6 = param_2[7] & 0x7000;
  *puVar12 = uVar2 & 0xffff8888 | uVar3 | uVar4 | uVar5 | uVar6;
  uVar7 = param_2[7] & 8;
  *puVar12 = uVar2 & 0xffff8880 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar8 = param_2[7] & 0x80;
  *puVar12 = uVar2 & 0xffff8800 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
  uVar9 = param_2[7] & 0x800;
  *puVar12 = uVar2 & 0xffff8000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
  uVar10 = param_2[7];
  *puVar12 = uVar2 & 0xffff0000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
             uVar10 & 0x8000;
  *puVar12 = uVar2 & 0xffef0000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
             uVar10 & 0x8000 | param_2[7] & 0x100000;
  puVar12 = param_3 + 4;
  if ((param_2[4] & 0x800000) != 0) {
    *puVar12 = param_2[10];
    puVar12 = param_3 + 5;
  }
  *(short *)((int)puVar12 + 2) = (short)param_2[4];
  uVar10 = *puVar12;
  uVar2 = param_2[4];
  *puVar12 = uVar2 & 0x3f0000 | uVar10 & 0xffc0ffff;
  *puVar12 = param_2[4] & 0x800000 | uVar2 & 0x3f0000 | uVar10 & 0xff40ffff | 0x400000;
  puVar13 = puVar12 + 1;
  uVar2 = *puVar13;
  uVar3 = param_2[7] & 7;
  *puVar13 = uVar2 & 0xfffffff8 | uVar3;
  uVar4 = param_2[7] & 0x70;
  *puVar13 = uVar2 & 0xffffff88 | uVar3 | uVar4;
  uVar5 = param_2[7] & 0x700;
  *puVar13 = uVar2 & 0xfffff888 | uVar3 | uVar4 | uVar5;
  uVar6 = param_2[7] & 0x7000;
  *puVar13 = uVar2 & 0xffff8888 | uVar3 | uVar4 | uVar5 | uVar6;
  uVar7 = param_2[7] & 8;
  *puVar13 = uVar2 & 0xffff8880 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar8 = param_2[7] & 0x80;
  *puVar13 = uVar2 & 0xffff8800 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
  uVar9 = param_2[7] & 0x800;
  *puVar13 = uVar2 & 0xffff8000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
  uVar10 = param_2[7];
  *puVar13 = uVar2 & 0xffff0000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
             uVar10 & 0x8000;
  *puVar13 = uVar2 & 0xffef0000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
             uVar10 & 0x8000 | param_2[7] & 0x100000;
  puVar13 = puVar12 + 2;
  if ((param_2[4] & 0x800000) != 0) {
    *puVar13 = param_2[10];
    puVar13 = puVar12 + 3;
  }
  *puVar13 = *param_2;
  puVar13[1] = param_2[1];
  puVar12 = puVar13 + 2;
  if ((param_2[1] & 0x400000) != 0) {
    *puVar12 = param_2[2];
    puVar12 = puVar13 + 3;
  }
  *puVar12 = param_2[4];
  puVar13 = puVar12 + 1;
  if ((param_2[4] & 0x400000) != 0) {
    *puVar13 = param_2[7];
    puVar13 = puVar12 + 2;
  }
  if ((param_2[4] & 0x800000) == 0) {
    return;
  }
  *puVar13 = param_2[10];
  return;
}

