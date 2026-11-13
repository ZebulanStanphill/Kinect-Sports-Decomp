extern int fn_82B6EA60();


unsigned int * fn_82B70C48(unsigned __int64 param_1,int param_2,unsigned int *param_3)

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
  unsigned int *puVar10;
  unsigned int *puVar11;
  
  uVar9 = fn_82B6EA60();
  *(unsigned short *)((int)param_3 + 2) = 0x30;
  *param_3 = *param_3 & 0xe000ffff;
  *(unsigned short *)((int)param_3 + 6) = uVar9;
  param_3[1] = param_3[1] & 0xff00ffff | 0x440000;
  param_3[2] = 0x40;
  puVar10 = param_3 + 3;
  *(short *)((int)param_3 + 0xe) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar10;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar10 = uVar1 & 0xffc0ffff | uVar2;
  *puVar10 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar10 = param_3 + 4;
  uVar1 = *puVar10;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar10 = uVar3 | uVar1 & 0xfffffff8;
  uVar4 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar10 = uVar4 | uVar3 | uVar1 & 0xffffff88;
  uVar5 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x700;
  *puVar10 = uVar5 | uVar4 | uVar3 | uVar1 & 0xfffff888;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x7000;
  *puVar10 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8888 | uVar2;
  uVar6 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 8;
  *puVar10 = uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8880 | uVar2;
  uVar7 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x80;
  *puVar10 = uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8800 | uVar2;
  uVar8 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x800;
  *puVar10 = uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8000 | uVar2;
  *puVar10 = *(unsigned int *)(param_2 + 0x1c) & 0x8000 |
             uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff0000 | uVar2 | 0x100000;
  puVar10 = param_3 + 5;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar10 = *(unsigned int *)(param_2 + 0x28);
    puVar10 = param_3 + 6;
  }
  *(unsigned short *)((int)puVar10 + 2) = 0x2d;
  *puVar10 = *puVar10 & 0xe000ffff;
  puVar11 = puVar10 + 1;
  *(short *)((int)puVar10 + 6) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar2 | uVar1 & 0xffc0ffff;
  *puVar11 = *(unsigned int *)(param_2 + 4) & 0x800000 | uVar2 | uVar1 & 0xff40ffff | 0x400000;
  puVar10[2] = 0;
  puVar10[2] = *(unsigned int *)(param_2 + 8) & 3;
  puVar11 = puVar10 + 3;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0xc);
    puVar11 = puVar10 + 4;
  }
  *(unsigned short *)((int)puVar11 + 2) = uVar9;
  *puVar11 = *puVar11 & 0xff00ffff | 0x440000;
  puVar11[1] = puVar11[1] & 0xffffbbbb | 0x3333;
  *(unsigned short *)((int)puVar11 + 10) = 0x31;
  puVar11[2] = puVar11[2] & 0xe000ffff;
  puVar10 = puVar11 + 3;
  *(short *)((int)puVar11 + 0xe) = (short)*(unsigned int *)(param_2 + 4);
  *puVar10 = *(unsigned int *)(param_2 + 4) & 0x3f0000 | *puVar10 & 0xffc0ffff;
  *puVar10 = *(unsigned int *)(param_2 + 4) & 0x800000 | *puVar10 & 0xff7fffff | 0x400000;
  puVar11[4] = 0;
  puVar11[4] = *(unsigned int *)(param_2 + 8) & 0xc;
  puVar10 = puVar11 + 5;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar10 = *(unsigned int *)(param_2 + 0xc);
    puVar10 = puVar11 + 6;
  }
  *(short *)((int)puVar10 + 2) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar10;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar10 = uVar1 & 0xffc0ffff | uVar2;
  *puVar10 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar11 = puVar10 + 1;
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar11 = uVar2 | uVar1 & 0xfffffff8;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar11 = uVar3 | uVar2 | uVar1 & 0xffffff88;
  *puVar11 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x700 | uVar3 | uVar2 | uVar1 & 0xfffff888;
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x7000;
  *puVar11 = uVar1 & 0xffff8fff | uVar2;
  *puVar11 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 8 | uVar1 & 0xffff8ff7 | uVar2;
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x80;
  *puVar11 = uVar2 | uVar1 & 0xffffff7f;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x800;
  *puVar11 = uVar3 | uVar2 | uVar1 & 0xfffff77f;
  *puVar11 = *(unsigned int *)(param_2 + 0x1c) & 0x8000 | uVar3 | uVar2 | uVar1 & 0xffff777f | 0x100000;
  puVar11 = puVar10 + 2;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x28);
    puVar11 = puVar10 + 3;
  }
  *(unsigned short *)((int)puVar11 + 2) = 0x2d;
  *puVar11 = *puVar11 & 0xe000ffff;
  puVar10 = puVar11 + 1;
  *(short *)((int)puVar11 + 6) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar10;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar10 = uVar2 | uVar1 & 0xffc0ffff;
  *puVar10 = *(unsigned int *)(param_2 + 4) & 0x800000 | uVar2 | uVar1 & 0xff40ffff | 0x400000;
  puVar11[2] = 0;
  puVar11[2] = *(unsigned int *)(param_2 + 8) & 0x30;
  puVar10 = puVar11 + 3;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar10 = *(unsigned int *)(param_2 + 0xc);
    puVar10 = puVar11 + 4;
  }
  *(short *)((int)puVar10 + 2) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar10;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar10 = uVar1 & 0xffc0ffff | uVar2;
  *puVar10 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar11 = puVar10 + 1;
  uVar1 = *puVar11;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar11 = uVar3 | uVar1 & 0xfffffff8;
  uVar4 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar11 = uVar4 | uVar3 | uVar1 & 0xffffff88;
  uVar5 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x700;
  *puVar11 = uVar5 | uVar4 | uVar3 | uVar1 & 0xfffff888;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x7000;
  *puVar11 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8888 | uVar2;
  uVar6 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 8;
  *puVar11 = uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8880 | uVar2;
  uVar7 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x80;
  *puVar11 = uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8800 | uVar2;
  uVar8 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x800;
  *puVar11 = uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8000 | uVar2;
  *puVar11 = *(unsigned int *)(param_2 + 0x1c) & 0x8000 |
             uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff0000 | uVar2 | 0x100000;
  puVar11 = puVar10 + 2;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x28);
    puVar11 = puVar10 + 3;
  }
  *(unsigned short *)((int)puVar11 + 2) = 0x41;
  *puVar11 = *puVar11 & 0xe000ffff;
  puVar10 = puVar11 + 1;
  *(short *)((int)puVar11 + 6) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar10;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar10 = uVar2 | uVar1 & 0xffc0ffff;
  *puVar10 = *(unsigned int *)(param_2 + 4) & 0x800000 | uVar2 | uVar1 & 0xff40ffff | 0x400000;
  puVar11[2] = 0;
  puVar11[2] = *(unsigned int *)(param_2 + 8) & 0xc0;
  puVar10 = puVar11 + 3;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar10 = *(unsigned int *)(param_2 + 0xc);
    puVar10 = puVar11 + 4;
  }
  *(unsigned short *)((int)puVar10 + 2) = 0;
  *puVar10 = *puVar10 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar10 = 1;
  puVar10[1] = puVar10[1] & 0xffff9999 | 0x1111;
  puVar11 = puVar10 + 2;
  *(unsigned short *)((int)puVar10 + 10) = 0;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar11 = 1;
  puVar10[3] = puVar10[3] & 0xffff9999 | 0x1111;
  return puVar10 + 4;
}

