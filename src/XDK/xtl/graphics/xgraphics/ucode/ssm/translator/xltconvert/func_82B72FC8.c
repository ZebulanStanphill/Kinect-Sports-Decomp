extern int fn_82B6EA60();


unsigned int * fn_82B72FC8(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned short uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  uVar4 = fn_82B6EA60();
  *(unsigned short *)((int)param_3 + 2) = 0x3c;
  *param_3 = *param_3 & 0xe000ffff;
  *(unsigned short *)((int)param_3 + 6) = uVar4;
  puVar5 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar5;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar2;
  uVar3 = *(unsigned int *)(param_2 + 0x10) & 0x800000;
  *puVar5 = uVar1 & 0xff40ffff | uVar2 | uVar3;
  *puVar5 = uVar1 & 0xff00ffff | uVar2 | uVar3 | *(unsigned int *)(param_2 + 0x10) & 0x400000;
  puVar5 = param_3 + 3;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x400000) != 0) {
    *puVar5 = *(unsigned int *)(param_2 + 0x1c);
    puVar5 = param_3 + 4;
  }
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar5 = *(unsigned int *)(param_2 + 0x28);
    puVar5 = puVar5 + 1;
  }
  *(unsigned short *)((int)puVar5 + 2) = 0x49;
  *puVar5 = *puVar5 & 0xe000ffff;
  *(unsigned short *)((int)puVar5 + 6) = uVar4;
  puVar5[1] = puVar5[1] & 0xff00ffff | 0x440000;
  puVar5[2] = puVar5[2] & 0xffffe000 | 0x40;
  *(unsigned short *)((int)puVar5 + 0xe) = uVar4;
  puVar5[3] = puVar5[3] & 0xff00ffff | 0x40000;
  puVar6 = puVar5 + 4;
  *(short *)((int)puVar5 + 0x12) = (short)*(unsigned int *)(param_2 + 0x14);
  uVar1 = *puVar6;
  uVar2 = *(unsigned int *)(param_2 + 0x14) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2;
  uVar3 = *(unsigned int *)(param_2 + 0x14) & 0x800000;
  *puVar6 = uVar1 & 0xff40ffff | uVar2 | uVar3;
  *puVar6 = uVar1 & 0xff00ffff | uVar2 | uVar3 | *(unsigned int *)(param_2 + 0x14) & 0x400000;
  puVar6 = puVar5 + 5;
  if ((*(unsigned int *)(param_2 + 0x14) & 0x400000) != 0) {
    *puVar6 = *(unsigned int *)(param_2 + 0x20);
    puVar6 = puVar5 + 6;
  }
  if ((*(unsigned int *)(param_2 + 0x14) & 0x800000) != 0) {
    *puVar6 = *(unsigned int *)(param_2 + 0x2c);
    puVar6 = puVar6 + 1;
  }
  *(unsigned short *)((int)puVar6 + 2) = 0x2d;
  *puVar6 = *puVar6 & 0xe000ffff;
  puVar5 = puVar6 + 1;
  *(short *)((int)puVar6 + 6) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar5;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar2;
  uVar3 = *(unsigned int *)(param_2 + 4) & 0x800000;
  *puVar5 = uVar1 & 0xff40ffff | uVar2 | uVar3;
  *puVar5 = uVar1 & 0xff00ffff | uVar2 | uVar3 | *(unsigned int *)(param_2 + 4) & 0x400000;
  puVar5 = puVar6 + 2;
  if ((*(unsigned int *)(param_2 + 4) & 0x400000) != 0) {
    *puVar5 = *(unsigned int *)(param_2 + 8);
    puVar5 = puVar6 + 3;
  }
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar5 = *(unsigned int *)(param_2 + 0xc);
    puVar5 = puVar5 + 1;
  }
  *(unsigned short *)((int)puVar5 + 2) = uVar4;
  *puVar5 = *puVar5 & 0xff00ffff | 0x40000;
  return puVar5 + 1;
}

