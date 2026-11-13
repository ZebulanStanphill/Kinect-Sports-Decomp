unsigned int * fn_82B74028(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  
  *(unsigned short *)((int)param_2 + 2) = 3;
  *param_2 = *param_2 & 0xe000ffff;
  param_2[1] = *(unsigned int *)(param_1 + 4);
  puVar9 = param_2 + 2;
  if ((*(unsigned int *)(param_1 + 4) & 0x400000) != 0) {
    *puVar9 = *(unsigned int *)(param_1 + 8);
    puVar9 = param_2 + 3;
  }
  if ((*(unsigned int *)(param_1 + 4) & 0x800000) != 0) {
    *puVar9 = *(unsigned int *)(param_1 + 0xc);
    puVar9 = puVar9 + 1;
  }
  *puVar9 = *(unsigned int *)(param_1 + 0x10);
  puVar10 = puVar9 + 1;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x400000) != 0) {
    *puVar10 = *(unsigned int *)(param_1 + 0x1c);
    puVar10 = puVar9 + 2;
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 0x800000) != 0) {
    *puVar10 = *(unsigned int *)(param_1 + 0x28);
    puVar10 = puVar10 + 1;
  }
  *(short *)((int)puVar10 + 2) = (short)*(unsigned int *)(param_1 + 0x14);
  uVar1 = *puVar10;
  uVar2 = *(unsigned int *)(param_1 + 0x14) & 0x3f0000;
  *puVar10 = uVar1 & 0xffc0ffff | uVar2;
  *puVar10 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_1 + 0x14) & 0x800000 | 0x400000;
  puVar9 = puVar10 + 1;
  uVar1 = *puVar9;
  uVar6 = *(unsigned int *)(param_1 + 0x20) & 7;
  *puVar9 = uVar6 | uVar1 & 0xfffffff8;
  uVar7 = *(unsigned int *)(param_1 + 0x20) & 0x70;
  *puVar9 = uVar7 | uVar6 | uVar1 & 0xffffff88;
  uVar8 = *(unsigned int *)(param_1 + 0x20) & 0x700;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xfffff888;
  uVar2 = *(unsigned int *)(param_1 + 0x20) & 0x7000;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8888 | uVar2;
  uVar3 = ~*(unsigned int *)(param_1 + 0x20) & 8;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8880 | uVar2 | uVar3;
  uVar4 = ~*(unsigned int *)(param_1 + 0x20) & 0x80;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8800 | uVar2 | uVar3 | uVar4;
  uVar5 = ~*(unsigned int *)(param_1 + 0x20) & 0x800;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff8000 | uVar2 | uVar3 | uVar4 | uVar5;
  *puVar9 = uVar8 | uVar7 | uVar6 | uVar1 & 0xffff0000 | uVar2 | uVar3 | uVar4 | uVar5 |
            ~*(unsigned int *)(param_1 + 0x20) & 0x8000;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x800000) == 0) {
    return puVar10 + 2;
  }
  puVar10[2] = *(unsigned int *)(param_1 + 0x28);
  return puVar10 + 3;
}

