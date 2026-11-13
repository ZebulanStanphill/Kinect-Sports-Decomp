extern int fn_82B6EA60();


unsigned int * fn_82B74A38(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  uVar3 = fn_82B6EA60();
  *(unsigned short *)((int)param_3 + 2) = 0x40;
  *param_3 = *param_3 & 0xe000ffff;
  *(unsigned short *)((int)param_3 + 6) = uVar3;
  puVar4 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar4;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar4 = uVar1 & 0xffc0ffff | uVar2;
  *puVar4 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000 | 0x400000;
  param_3[3] = param_3[3] & 0xffff9999 | 0x1111;
  puVar4 = param_3 + 4;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar4 = *(unsigned int *)(param_2 + 0xc);
    puVar4 = param_3 + 5;
  }
  *(unsigned short *)((int)puVar4 + 2) = 5;
  *puVar4 = *puVar4 & 0xff00ffff | 0x10000;
  *(unsigned char *)puVar4 = 1;
  puVar5 = puVar4 + 1;
  *(unsigned short *)((int)puVar4 + 6) = 4;
  *puVar5 = *puVar5 & 0xff00ffff | 0x10000;
  *(unsigned char *)puVar5 = 1;
  *(unsigned short *)((int)puVar4 + 10) = 0x40;
  puVar4[2] = puVar4[2] & 0xe000ffff;
  *(unsigned short *)((int)puVar4 + 0xe) = uVar3;
  puVar4[3] = puVar4[3] & 0xff00ffff | 0x40000;
  puVar5 = puVar4 + 4;
  *(short *)((int)puVar4 + 0x12) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar5;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar5 = uVar1 & 0xffc0ffff | uVar2;
  *puVar5 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar4[5] = puVar4[5] & 0xffffaaaa | 0x2222;
  puVar5 = puVar4 + 6;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar5 = *(unsigned int *)(param_2 + 0xc);
    puVar5 = puVar4 + 7;
  }
  *(unsigned short *)((int)puVar5 + 2) = 6;
  *puVar5 = *puVar5 & 0xff00ffff | 0x10000;
  *(unsigned char *)puVar5 = 1;
  *(unsigned short *)((int)puVar5 + 6) = uVar3;
  puVar5[1] = puVar5[1] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar5 + 10) = 0x40;
  puVar5[2] = puVar5[2] & 0xe000ffff;
  puVar4 = puVar5 + 3;
  *(short *)((int)puVar5 + 0xe) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar4;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar4 = uVar1 & 0xffc0ffff | uVar2;
  *puVar4 = uVar1 & 0xff00ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000;
  puVar4 = puVar5 + 4;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar4 = *(unsigned int *)(param_2 + 0xc);
    puVar4 = puVar5 + 5;
  }
  *(short *)((int)puVar4 + 2) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar4;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar4 = uVar1 & 0xffc0ffff | uVar2;
  *puVar4 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar4[1] = puVar4[1] & 0xffff8888;
  puVar5 = puVar4 + 2;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar5 = *(unsigned int *)(param_2 + 0xc);
    puVar5 = puVar4 + 3;
  }
  *(unsigned short *)((int)puVar5 + 2) = 7;
  *puVar5 = *puVar5 & 0xff00ffff | 0x10000;
  *(unsigned char *)puVar5 = 1;
  *(unsigned short *)((int)puVar5 + 6) = uVar3;
  puVar5[1] = puVar5[1] & 0xff00ffff | 0x40000;
  return puVar5 + 2;
}

