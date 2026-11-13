unsigned int * fn_82B6FED0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  *(unsigned short *)((int)param_2 + 2) = 0x41;
  *param_2 = *param_2 & 0xe000ffff;
  puVar5 = param_2 + 2;
  *(short *)((int)param_2 + 6) = (short)*(unsigned int *)(param_1 + 4);
  uVar1 = param_2[1];
  uVar3 = *(unsigned int *)(param_1 + 4) & 0x3f0000;
  param_2[1] = uVar1 & 0xffc0ffff | uVar3;
  uVar2 = *(unsigned int *)(param_1 + 4) & 0x800000;
  param_2[1] = uVar1 & 0xff40ffff | uVar3 | uVar2;
  param_2[1] = uVar1 & 0xff00ffff | uVar3 | uVar2 | *(unsigned int *)(param_1 + 4) & 0x400000;
  if ((*(unsigned int *)(param_1 + 4) & 0x400000) != 0) {
    *puVar5 = *(unsigned int *)(param_1 + 8);
    puVar5 = param_2 + 3;
  }
  if ((*(unsigned int *)(param_1 + 4) & 0x800000) != 0) {
    *puVar5 = *(unsigned int *)(param_1 + 0xc);
    puVar5 = puVar5 + 1;
  }
  *(short *)((int)puVar5 + 2) = (short)*(unsigned int *)(param_1 + 0x10);
  uVar1 = *puVar5;
  uVar3 = *(unsigned int *)(param_1 + 0x10) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar3;
  *puVar5 = uVar1 & 0xff40ffff | uVar3 | *(unsigned int *)(param_1 + 0x10) & 0x800000 | 0x400000;
  puVar6 = puVar5 + 1;
  uVar1 = *puVar6;
  uVar3 = *(unsigned int *)(param_1 + 0x1c) & 7;
  *puVar6 = uVar3 | uVar1 & 0xfffffff8;
  uVar2 = *(unsigned int *)(param_1 + 0x1c) & 0x70;
  *puVar6 = uVar2 | uVar3 | uVar1 & 0xffffff88;
  uVar4 = *(unsigned int *)(param_1 + 0x1c) & 0x700;
  *puVar6 = uVar4 | uVar2 | uVar3 | uVar1 & 0xfffff888;
  *puVar6 = uVar4 | uVar2 | uVar3 | uVar1 & 0xffff8888 | *(unsigned int *)(param_1 + 0x1c) & 0x7000;
  puVar6 = puVar5 + 2;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x800000) != 0) {
    *puVar6 = *(unsigned int *)(param_1 + 0x28);
    puVar6 = puVar5 + 3;
  }
  *(short *)((int)puVar6 + 2) = (short)*(unsigned int *)(param_1 + 0x10);
  uVar1 = *puVar6;
  uVar3 = *(unsigned int *)(param_1 + 0x10) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar3;
  *puVar6 = uVar1 & 0xff40ffff | uVar3 | *(unsigned int *)(param_1 + 0x10) & 0x800000 | 0x400000;
  puVar5 = puVar6 + 1;
  uVar1 = *puVar5;
  uVar3 = *(unsigned int *)(param_1 + 0x1c) & 7;
  *puVar5 = uVar3 | uVar1 & 0xfffffff8;
  uVar2 = *(unsigned int *)(param_1 + 0x1c) & 0x70;
  *puVar5 = uVar2 | uVar3 | uVar1 & 0xffffff88;
  *puVar5 = *(unsigned int *)(param_1 + 0x1c) & 0x700 | uVar2 | uVar3 | uVar1 & 0xfffff888;
  *puVar5 = *puVar5 & 0xffff8fff | *(unsigned int *)(param_1 + 0x1c) & 0x7000 | 0x8888;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x800000) == 0) {
    return puVar6 + 2;
  }
  puVar6[2] = *(unsigned int *)(param_1 + 0x28);
  return puVar6 + 3;
}

