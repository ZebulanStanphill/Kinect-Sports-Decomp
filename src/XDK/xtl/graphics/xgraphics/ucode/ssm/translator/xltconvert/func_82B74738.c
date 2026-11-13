extern int fn_82B6EA60();


unsigned int * fn_82B74738(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  
  uVar5 = fn_82B6EA60();
  *(unsigned short *)((int)param_4 + 2) = 0x6b;
  *param_4 = *param_4 & 0xe000ffff;
  puVar6 = param_4 + 2;
  *(short *)((int)param_4 + 6) = (short)*(unsigned int *)(param_2 + 0x4c);
  param_4[1] = param_4[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_4 + 10) = (short)*(unsigned int *)(param_3 + 0x10);
  uVar1 = *puVar6;
  uVar2 = *(unsigned int *)(param_3 + 0x10) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2;
  *puVar6 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_3 + 0x10) & 0x800000 | 0x400000;
  puVar6 = param_4 + 3;
  uVar1 = *puVar6;
  uVar3 = *(unsigned int *)(param_3 + 0x1c) >> 8 & 7;
  *puVar6 = uVar3 | uVar1 & 0xfffffff8;
  uVar4 = *(unsigned int *)(param_3 + 0x1c) >> 4 & 0x70;
  *puVar6 = uVar4 | uVar3 | uVar1 & 0xffffff88;
  uVar2 = (*(unsigned int *)(param_3 + 0x1c) & 7) << 8;
  *puVar6 = uVar2 | uVar4 | uVar3 | uVar1 & 0xfffff888;
  *puVar6 = (*(unsigned int *)(param_3 + 0x1c) & 0x70) << 8 | uVar2 | uVar4 | uVar3 | uVar1 & 0xffff8888;
  puVar6 = param_4 + 4;
  if ((*(unsigned int *)(param_3 + 4) & 0x800000) != 0) {
    *puVar6 = *(unsigned int *)(param_3 + 0xc);
    puVar6 = param_4 + 5;
  }
  *(short *)((int)puVar6 + 2) = (short)*(unsigned int *)(param_3 + 0x10);
  uVar1 = *puVar6;
  uVar2 = *(unsigned int *)(param_3 + 0x10) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2;
  *puVar6 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_3 + 0x10) & 0x800000 | 0x400000;
  puVar7 = puVar6 + 1;
  uVar1 = *puVar7;
  uVar3 = *(unsigned int *)(param_3 + 0x1c) >> 4 & 7;
  *puVar7 = uVar3 | uVar1 & 0xfffffff8;
  uVar4 = (*(unsigned int *)(param_3 + 0x1c) & 7) << 4;
  *puVar7 = uVar4 | uVar3 | uVar1 & 0xffffff88;
  uVar2 = *(unsigned int *)(param_3 + 0x1c) & 0x700;
  *puVar7 = uVar4 | uVar3 | uVar1 & 0xfffff888 | uVar2;
  *puVar7 = (*(unsigned int *)(param_3 + 0x1c) & 0x700) << 4 | uVar4 | uVar3 | uVar1 & 0xffff8888 | uVar2;
  puVar7 = puVar6 + 2;
  if ((*(unsigned int *)(param_3 + 4) & 0x800000) != 0) {
    *puVar7 = *(unsigned int *)(param_3 + 0xc);
    puVar7 = puVar6 + 3;
  }
  *(unsigned short *)((int)puVar7 + 2) = 0x51;
  *puVar7 = *puVar7 & 0xe000ffff | 0x20000;
  *(unsigned short *)((int)puVar7 + 6) = uVar5;
  puVar7[1] = puVar7[1] & 0xff00ffff | 0x440000;
  puVar7[2] = 0x10;
  *(short *)((int)puVar7 + 0xe) = (short)*(unsigned int *)(param_2 + 0x4c);
  puVar7[3] = puVar7[3] & 0xff00ffff | 0x440000;
  puVar7[4] = puVar7[4] & 0xffffaaaa | 0x102222;
  *(unsigned short *)((int)puVar7 + 0x16) = 0x40;
  puVar7[5] = puVar7[5] & 0xe000ffff;
  *(short *)((int)puVar7 + 0x1a) = (short)*(unsigned int *)(param_2 + 0x4c);
  puVar7[6] = puVar7[6] & 0xff00ffff | 0x440000;
  puVar7[7] = 5;
  *(short *)((int)puVar7 + 0x22) = (short)*(unsigned int *)(param_2 + 0x4c);
  puVar7[8] = puVar7[8] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar7 + 0x26) = uVar5;
  puVar7[9] = puVar7[9] & 0xff00ffff | 0x440000;
  puVar7[10] = puVar7[10] & 0xffffaaaa | 0x2222;
  puVar6 = puVar7 + 0xb;
  *(unsigned short *)((int)puVar7 + 0x2e) = 3;
  *puVar6 = *puVar6 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar6 = 1;
  puVar7[0xc] = puVar7[0xc] & 0xffffbbbb | 0x3333;
  *(unsigned short *)((int)puVar7 + 0x36) = 0x41;
  puVar7[0xd] = puVar7[0xd] & 0xe000ffff;
  *(short *)((int)puVar7 + 0x3a) = (short)*(unsigned int *)(param_2 + 0x4c);
  puVar7[0xe] = puVar7[0xe] & 0xff00ffff | 0x40000;
  *(short *)((int)puVar7 + 0x3e) = (short)*(unsigned int *)(param_2 + 0x4c);
  puVar7[0xf] = puVar7[0xf] & 0xff00ffff | 0x440000;
  puVar7[0x10] = puVar7[0x10] & 0xffffbb89 | 0x3301;
  *(short *)((int)puVar7 + 0x46) = (short)*(unsigned int *)(param_2 + 0x4c);
  puVar7[0x11] = puVar7[0x11] & 0xff00ffff | 0x440000;
  puVar7[0x12] = puVar7[0x12] & 0xffffbb89 | 0x3301;
  return puVar7 + 0x13;
}

