extern int fn_82B6EA60();


unsigned int * fn_82B73448(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  uVar5 = fn_82B6EA60();
  uVar6 = fn_82B6EA60(param_1);
  *(unsigned short *)((int)param_3 + 2) = 0xd;
  *param_3 = *param_3 & 0xe000ffff | 0x20000;
  *(unsigned short *)((int)param_3 + 6) = uVar5;
  puVar7 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar7;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar7 = uVar1 & 0xffc0ffff | uVar2;
  *puVar7 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar7 = param_3 + 3;
  uVar1 = *puVar7;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 7;
  *puVar7 = uVar1 & 0xfffffff8 | uVar2;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) & 0x70;
  *puVar7 = uVar1 & 0xffffff88 | uVar2 | uVar3;
  uVar4 = *(unsigned int *)(param_2 + 0x1c) & 0x700;
  *puVar7 = uVar1 & 0xfffff888 | uVar2 | uVar3 | uVar4;
  *puVar7 = uVar1 & 0xffff8888 | uVar2 | uVar3 | uVar4 | *(unsigned int *)(param_2 + 0x1c) & 0x7000;
  puVar7 = param_3 + 4;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar7 = *(unsigned int *)(param_2 + 0x28);
    puVar7 = param_3 + 5;
  }
  *(unsigned short *)((int)puVar7 + 2) = 0;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar7 = 1;
  puVar7[1] = puVar7[1] & 0xffff9999 | 0x1111;
  puVar8 = puVar7 + 2;
  *(unsigned short *)((int)puVar7 + 10) = 0;
  *puVar8 = *puVar8 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar8 = 1;
  puVar7[3] = puVar7[3] & 0xffffbbbb | 0x3333;
  *(unsigned short *)((int)puVar7 + 0x12) = 0x56;
  puVar7[4] = puVar7[4] & 0xe000ffff;
  *(unsigned short *)((int)puVar7 + 0x16) = uVar6;
  puVar7[5] = puVar7[5] & 0xff00ffff | 0x40000;
  puVar8 = puVar7 + 6;
  *(short *)((int)puVar7 + 0x1a) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar8;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar8 = uVar1 & 0xffc0ffff | uVar2;
  *puVar8 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar8 = puVar7 + 7;
  uVar1 = *puVar8;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 7;
  *puVar8 = uVar1 & 0xfffffff8 | uVar2;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) & 0x70;
  *puVar8 = uVar1 & 0xffffff88 | uVar2 | uVar3;
  uVar4 = *(unsigned int *)(param_2 + 0x1c) & 0x700;
  *puVar8 = uVar1 & 0xfffff888 | uVar2 | uVar3 | uVar4;
  *puVar8 = uVar1 & 0xffff8888 | uVar2 | uVar3 | uVar4 | *(unsigned int *)(param_2 + 0x1c) & 0x7000;
  puVar8 = puVar7 + 8;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar8 = *(unsigned int *)(param_2 + 0x28);
    puVar8 = puVar7 + 9;
  }
  *(unsigned short *)((int)puVar8 + 2) = 0;
  *puVar8 = *puVar8 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar8 = 1;
  puVar8[1] = puVar8[1] & 0xffff8888;
  *(unsigned short *)((int)puVar8 + 10) = 0x49;
  puVar8[2] = puVar8[2] & 0xe000ffff;
  puVar7 = puVar8 + 3;
  *(short *)((int)puVar8 + 0xe) = (short)*(unsigned int *)(param_2 + 4);
  *puVar7 = *puVar7 & 0xffc0ffff | *(unsigned int *)(param_2 + 4) & 0x3f0000;
  uVar1 = *puVar7;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x800000;
  *puVar7 = uVar1 & 0xff7fffff | uVar2;
  *puVar7 = uVar1 & 0xff3fffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x400000;
  puVar7 = puVar8 + 4;
  if ((*(unsigned int *)(param_2 + 4) & 0x400000) != 0) {
    *puVar7 = *(unsigned int *)(param_2 + 8);
    puVar7 = puVar8 + 5;
  }
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar7 = *(unsigned int *)(param_2 + 0xc);
    puVar7 = puVar7 + 1;
  }
  *(unsigned short *)((int)puVar7 + 2) = uVar5;
  *puVar7 = *puVar7 & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar7 + 6) = uVar6;
  puVar7[1] = puVar7[1] & 0xff00ffff | 0x40000;
  return puVar7 + 2;
}

