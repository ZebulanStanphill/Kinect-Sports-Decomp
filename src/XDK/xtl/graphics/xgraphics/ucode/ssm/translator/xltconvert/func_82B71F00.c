extern int fn_82B6EA60();


unsigned int * fn_82B71F00(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned short uVar9;
  unsigned short uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  
  uVar9 = fn_82B6EA60();
  uVar10 = fn_82B6EA60(param_1);
  *(unsigned short *)((int)param_3 + 2) = 0x49;
  *param_3 = *param_3 & 0xe000ffff;
  *(unsigned short *)((int)param_3 + 6) = uVar9;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  param_3[2] = *(unsigned int *)(param_2 + 0x10);
  puVar11 = param_3 + 3;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x400000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x1c);
    puVar11 = param_3 + 4;
  }
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x28);
    puVar11 = puVar11 + 1;
  }
  *puVar11 = *(unsigned int *)(param_2 + 0x14);
  puVar12 = puVar11 + 1;
  if ((*(unsigned int *)(param_2 + 0x14) & 0x400000) != 0) {
    *puVar12 = *(unsigned int *)(param_2 + 0x20);
    puVar12 = puVar11 + 2;
  }
  if ((*(unsigned int *)(param_2 + 0x14) & 0x800000) != 0) {
    *puVar12 = *(unsigned int *)(param_2 + 0x2c);
    puVar12 = puVar12 + 1;
  }
  *(unsigned short *)((int)puVar12 + 2) = 3;
  *puVar12 = *puVar12 & 0xe000ffff;
  *(unsigned short *)((int)puVar12 + 6) = uVar10;
  puVar12[1] = puVar12[1] & 0xff00ffff | 0x40000;
  puVar11 = puVar12 + 2;
  *(unsigned short *)((int)puVar12 + 10) = 0;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar11 = 1;
  puVar12[3] = puVar12[3] & 0xffff9999 | 0x1111;
  puVar11 = puVar12 + 4;
  *(short *)((int)puVar12 + 0x12) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar11 = puVar12 + 5;
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 7;
  *puVar11 = uVar1 & 0xfffffff8 | uVar2;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) & 0x70;
  *puVar11 = uVar1 & 0xffffff88 | uVar2 | uVar3;
  uVar4 = *(unsigned int *)(param_2 + 0x1c) & 0x700;
  *puVar11 = uVar1 & 0xfffff888 | uVar2 | uVar3 | uVar4;
  uVar5 = *(unsigned int *)(param_2 + 0x1c) & 0x7000;
  *puVar11 = uVar1 & 0xffff8888 | uVar2 | uVar3 | uVar4 | uVar5;
  uVar6 = ~*(unsigned int *)(param_2 + 0x1c) & 8;
  *puVar11 = uVar1 & 0xffff8880 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
  uVar7 = ~*(unsigned int *)(param_2 + 0x1c) & 0x80;
  *puVar11 = uVar1 & 0xffff8800 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar8 = ~*(unsigned int *)(param_2 + 0x1c) & 0x800;
  *puVar11 = uVar1 & 0xffff8000 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
  *puVar11 = uVar1 & 0xffff0000 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 |
             ~*(unsigned int *)(param_2 + 0x1c) & 0x8000;
  puVar11 = puVar12 + 6;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x28);
    puVar11 = puVar12 + 7;
  }
  *(unsigned short *)((int)puVar11 + 2) = 0x40;
  *puVar11 = *puVar11 & 0xe000ffff;
  puVar12 = puVar11 + 1;
  *(short *)((int)puVar11 + 6) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000;
  *puVar12 = *puVar12 & 0xffbfffff | *(unsigned int *)(param_2 + 4) & 0x400000;
  puVar12 = puVar11 + 2;
  if ((*(unsigned int *)(param_2 + 4) & 0x400000) != 0) {
    *puVar12 = *(unsigned int *)(param_2 + 8);
    puVar12 = puVar11 + 3;
  }
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar12 = *(unsigned int *)(param_2 + 0xc);
    puVar12 = puVar12 + 1;
  }
  *(unsigned short *)((int)puVar12 + 2) = uVar10;
  *puVar12 = *puVar12 & 0xff00ffff | 0x40000;
  puVar12[1] = *(unsigned int *)(param_2 + 0x18);
  puVar11 = puVar12 + 2;
  if ((*(unsigned int *)(param_2 + 0x18) & 0x400000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x24);
    puVar11 = puVar12 + 3;
  }
  if ((*(unsigned int *)(param_2 + 0x18) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x30);
    puVar11 = puVar11 + 1;
  }
  *(unsigned short *)((int)puVar11 + 2) = uVar9;
  *puVar11 = *puVar11 & 0xff00ffff | 0x40000;
  return puVar11 + 1;
}

