extern int fn_82B6EA60();


unsigned int * fn_82B71160(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned short uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  
  uVar10 = fn_82B6EA60();
  *(unsigned short *)((int)param_3 + 2) = 0x41;
  *param_3 = *param_3 & 0xe000ffff;
  *(unsigned short *)((int)param_3 + 6) = uVar10;
  param_3[1] = param_3[1] & 0xff00ffff | 0x440000;
  param_3[2] = 4;
  puVar11 = param_3 + 3;
  *(short *)((int)param_3 + 0xe) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar11 = param_3 + 4;
  uVar1 = *puVar11;
  uVar8 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 7;
  *puVar11 = uVar8 | uVar1 & 0xfffffff8;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x70;
  *puVar11 = uVar2 | uVar8 | uVar1 & 0xffffff88;
  uVar4 = (*(unsigned int *)(param_2 + 0x1c) & 0x70) << 4;
  *puVar11 = uVar4 | uVar2 | uVar8 | uVar1 & 0xfffff888;
  uVar5 = (*(unsigned int *)(param_2 + 0x1c) & 0x70) << 8;
  *puVar11 = uVar5 | uVar4 | uVar2 | uVar8 | uVar1 & 0xffff8888;
  uVar9 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 8;
  *puVar11 = uVar9 | uVar5 | uVar4 | uVar2 | uVar8 | uVar1 & 0xffff8880;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) & 0x80;
  *puVar11 = uVar3 | uVar9 | uVar5 | uVar4 | uVar2 | uVar8 | uVar1 & 0xffff8800;
  uVar6 = (*(unsigned int *)(param_2 + 0x1c) & 0x80) << 4;
  *puVar11 = uVar6 | uVar3 | uVar9 | uVar5 | uVar4 | uVar2 | uVar8 | uVar1 & 0xffff8000;
  uVar7 = (*(unsigned int *)(param_2 + 0x1c) & 0x80) << 8;
  *puVar11 = uVar7 | uVar6 | uVar3 | uVar9 | uVar5 | uVar4 | uVar2 | uVar8 | uVar1 & 0xffff0000;
  *puVar11 = *(unsigned int *)(param_2 + 0x1c) & 0x100000 |
             uVar7 | uVar6 | uVar3 | uVar9 | uVar5 | uVar4 | uVar2 | uVar8 | uVar1 & 0xffef0000;
  puVar11 = param_3 + 5;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x28);
    puVar11 = param_3 + 6;
  }
  *(unsigned short *)((int)puVar11 + 2) = 0;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar11 = 1;
  puVar11[1] = puVar11[1] & 0xffff8888;
  *(unsigned short *)((int)puVar11 + 10) = 0x41;
  puVar11[2] = puVar11[2] & 0xe000ffff;
  *(unsigned short *)((int)puVar11 + 0xe) = uVar10;
  puVar11[3] = puVar11[3] & 0xff00ffff | 0x440000;
  puVar11[4] = 0x40;
  puVar12 = puVar11 + 5;
  *(short *)((int)puVar11 + 0x16) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar12;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar12 = puVar11 + 6;
  uVar1 = *puVar12;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 7;
  *puVar12 = uVar3 | uVar1 & 0xfffffff8;
  uVar4 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x70;
  *puVar12 = uVar4 | uVar3 | uVar1 & 0xffffff88;
  uVar5 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x700;
  *puVar12 = uVar5 | uVar4 | uVar3 | uVar1 & 0xfffff888;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x7000;
  *puVar12 = uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8888 | uVar2;
  uVar6 = *(unsigned int *)(param_2 + 0x1c) >> 0xc & 8;
  *puVar12 = uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8880 | uVar2;
  uVar7 = *(unsigned int *)(param_2 + 0x1c) >> 8 & 0x80;
  *puVar12 = uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8800 | uVar2;
  *puVar12 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 0x800 |
             uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 & 0xffff8000 | uVar2;
  uVar1 = *puVar12;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x8000;
  *puVar12 = uVar2 | uVar1 & 0xffff7fff;
  *puVar12 = *(unsigned int *)(param_2 + 0x1c) & 0x100000 | uVar2 | uVar1 & 0xffef7fff;
  puVar12 = puVar11 + 7;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar12 = *(unsigned int *)(param_2 + 0x28);
    puVar12 = puVar11 + 8;
  }
  *(unsigned short *)((int)puVar12 + 2) = 1;
  *puVar12 = *puVar12 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar12 = 1;
  puVar12[1] = puVar12[1] & 0xffff8888;
  *(unsigned short *)((int)puVar12 + 10) = 0x44;
  puVar12[2] = puVar12[2] & 0xe000ffff;
  *(unsigned short *)((int)puVar12 + 0xe) = uVar10;
  puVar12[3] = puVar12[3] & 0xff00ffff | 0x440000;
  puVar12[4] = 0x40;
  *(unsigned short *)((int)puVar12 + 0x16) = uVar10;
  puVar12[5] = puVar12[5] & 0xff00ffff | 0x440000;
  puVar12[6] = puVar12[6] & 0xffffbbbb | 0x3333;
  puVar11 = puVar12 + 7;
  *(unsigned short *)((int)puVar12 + 0x1e) = 1;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar11 = 1;
  puVar12[8] = puVar12[8] & 0xffff9999 | 0x1111;
  *(unsigned short *)((int)puVar12 + 0x26) = 0x41;
  puVar12[9] = puVar12[9] & 0xe000ffff;
  puVar11 = puVar12 + 10;
  *(short *)((int)puVar12 + 0x2a) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11 = puVar12 + 0xb;
  *puVar11 = 0;
  *puVar11 = *(unsigned int *)(param_2 + 8) & 3;
  *puVar11 = *(unsigned int *)(param_2 + 8) & 0xc0 | *puVar11 & 0xffffff3f;
  puVar11 = puVar12 + 0xc;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0xc);
    puVar11 = puVar12 + 0xd;
  }
  *(unsigned short *)((int)puVar11 + 2) = 0;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar11 = 1;
  puVar11[1] = puVar11[1] & 0xffff9999 | 0x1111;
  puVar12 = puVar11 + 2;
  *(unsigned short *)((int)puVar11 + 10) = 0;
  *puVar12 = *puVar12 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar12 = 1;
  puVar11[3] = puVar11[3] & 0xffff9999 | 0x1111;
  *(unsigned short *)((int)puVar11 + 0x12) = 0x41;
  puVar11[4] = puVar11[4] & 0xe000ffff;
  puVar12 = puVar11 + 5;
  *(short *)((int)puVar11 + 0x16) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar12;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar11[6] = 0;
  puVar11[6] = *(unsigned int *)(param_2 + 8) & 0xc;
  puVar12 = puVar11 + 7;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar12 = *(unsigned int *)(param_2 + 0xc);
    puVar12 = puVar11 + 8;
  }
  *(short *)((int)puVar12 + 2) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar12;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar12 = uVar1 & 0xffc0ffff | uVar2;
  *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar11 = puVar12 + 1;
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 7;
  *puVar11 = uVar2 | uVar1 & 0xfffffff8;
  *puVar11 = (*(unsigned int *)(param_2 + 0x1c) & 7) << 4 | uVar2 | uVar1 & 0xffffff88;
  uVar1 = *puVar11;
  uVar3 = (*(unsigned int *)(param_2 + 0x1c) & 7) << 8;
  *puVar11 = uVar3 | uVar1 & 0xfffff8ff;
  uVar4 = (*(unsigned int *)(param_2 + 0x1c) & 7) << 0xc;
  *puVar11 = uVar4 | uVar3 | uVar1 & 0xffff88ff;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 8;
  *puVar11 = uVar2 | uVar4 | uVar3 | uVar1 & 0xffff88f7;
  uVar5 = (*(unsigned int *)(param_2 + 0x1c) & 8) << 4;
  *puVar11 = uVar5 | uVar2 | uVar4 | uVar3 | uVar1 & 0xffff8877;
  uVar6 = (*(unsigned int *)(param_2 + 0x1c) & 8) << 8;
  *puVar11 = uVar6 | uVar5 | uVar2 | uVar4 | uVar3 | uVar1 & 0xffff8077;
  *puVar11 = (*(unsigned int *)(param_2 + 0x1c) & 8) << 0xc |
             uVar6 | uVar5 | uVar2 | uVar4 | uVar3 | uVar1 & 0xffff0077;
  *puVar11 = *(unsigned int *)(param_2 + 0x1c) & 0x100000 | *puVar11 & 0xffefffff;
  puVar11 = puVar12 + 2;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0x28);
    puVar11 = puVar12 + 3;
  }
  *(unsigned short *)((int)puVar11 + 2) = 0;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar11 = 1;
  puVar11[1] = puVar11[1] & 0xffff8888;
  *(unsigned short *)((int)puVar11 + 10) = 0x3c;
  puVar11[2] = puVar11[2] & 0xe000ffff;
  *(unsigned short *)((int)puVar11 + 0xe) = uVar10;
  puVar11[3] = puVar11[3] & 0xff00ffff | 0x440000;
  puVar11[4] = 4;
  *(unsigned short *)((int)puVar11 + 0x16) = uVar10;
  puVar11[5] = puVar11[5] & 0xff00ffff | 0x440000;
  puVar11[6] = puVar11[6] & 0xffff9999 | 0x1111;
  *(unsigned short *)((int)puVar11 + 0x1e) = 0x49;
  puVar11[7] = puVar11[7] & 0xe000ffff;
  *(unsigned short *)((int)puVar11 + 0x22) = uVar10;
  puVar11[8] = puVar11[8] & 0xff00ffff | 0x440000;
  puVar11[9] = 0x40;
  *(unsigned short *)((int)puVar11 + 0x2a) = uVar10;
  puVar11[10] = puVar11[10] & 0xff00ffff | 0x440000;
  puVar11[0xb] = puVar11[0xb] & 0xffffbbbb | 0x3333;
  *(unsigned short *)((int)puVar11 + 0x32) = uVar10;
  puVar11[0xc] = puVar11[0xc] & 0xff00ffff | 0x440000;
  puVar11[0xd] = puVar11[0xd] & 0xffff9999 | 0x1111;
  *(unsigned short *)((int)puVar11 + 0x3a) = 0x2d;
  puVar11[0xe] = puVar11[0xe] & 0xe000ffff;
  *(unsigned short *)((int)puVar11 + 0x3e) = uVar10;
  puVar11[0xf] = puVar11[0xf] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar11 + 0x42) = uVar10;
  puVar11[0x10] = puVar11[0x10] & 0xff00ffff | 0x40000;
  puVar12 = puVar11 + 0x11;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 4) != 1) {
    *(unsigned short *)((int)puVar11 + 0x46) = 0xd;
    *puVar12 = *puVar12 & 0xe000ffff | 0x10000;
    *(unsigned short *)((int)puVar11 + 0x4a) = uVar10;
    puVar11[0x12] = puVar11[0x12] & 0xff00ffff | 0x40000;
    puVar12 = puVar11 + 0x13;
    *(short *)((int)puVar11 + 0x4e) = (short)*(unsigned int *)(param_2 + 0x10);
    uVar1 = *puVar12;
    uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
    *puVar12 = uVar1 & 0xffc0ffff | uVar2;
    *puVar12 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
    puVar12 = puVar11 + 0x14;
    uVar1 = *puVar12;
    uVar5 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 7;
    *puVar12 = uVar5 | uVar1 & 0xfffffff8;
    uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x70;
    *puVar12 = uVar2 | uVar5 | uVar1 & 0xffffff88;
    uVar3 = (*(unsigned int *)(param_2 + 0x1c) & 0x70) << 4;
    *puVar12 = uVar3 | uVar2 | uVar5 | uVar1 & 0xfffff888;
    uVar4 = (*(unsigned int *)(param_2 + 0x1c) & 0x70) << 8;
    *puVar12 = uVar4 | uVar3 | uVar2 | uVar5 | uVar1 & 0xffff8888;
    *puVar12 = *(unsigned int *)(param_2 + 0x1c) >> 4 & 8 |
               uVar4 | uVar3 | uVar2 | uVar5 | uVar1 & 0xffff8880;
    uVar1 = *puVar12;
    uVar2 = *(unsigned int *)(param_2 + 0x1c) & 0x80;
    *puVar12 = uVar2 | uVar1 & 0xffffff7f;
    uVar3 = (*(unsigned int *)(param_2 + 0x1c) & 0x80) << 4;
    *puVar12 = uVar3 | uVar2 | uVar1 & 0xfffff77f;
    uVar4 = (*(unsigned int *)(param_2 + 0x1c) & 0x80) << 8;
    *puVar12 = uVar4 | uVar3 | uVar2 | uVar1 & 0xffff777f;
    *puVar12 = *(unsigned int *)(param_2 + 0x1c) & 0x100000 | uVar4 | uVar3 | uVar2 | uVar1 & 0xffef777f;
    puVar12 = puVar11 + 0x15;
    if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
      *puVar12 = *(unsigned int *)(param_2 + 0x28);
      puVar12 = puVar11 + 0x16;
    }
    *(unsigned short *)((int)puVar12 + 2) = 0;
    *puVar12 = *puVar12 & 0xff00ffff | 0x410000;
    *(unsigned char *)puVar12 = 1;
    puVar12[1] = puVar12[1] & 0xffff8888;
    *(unsigned short *)((int)puVar12 + 10) = uVar10;
    puVar12[2] = puVar12[2] & 0xff00ffff | 0x440000;
    puVar12[3] = puVar12[3] & 0xffffbbbb | 0x3333;
    puVar12 = puVar12 + 4;
  }
  *(unsigned short *)((int)puVar12 + 2) = 0xd;
  *puVar12 = *puVar12 & 0xe000ffff | 0x30000;
  puVar11 = puVar12 + 1;
  *(short *)((int)puVar12 + 6) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 4) & 0x800000 | 0x400000;
  puVar12[2] = 0;
  puVar12[2] = *(unsigned int *)(param_2 + 8) & 0x30;
  puVar11 = puVar12 + 3;
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar11 = *(unsigned int *)(param_2 + 0xc);
    puVar11 = puVar12 + 4;
  }
  *(short *)((int)puVar11 + 2) = (short)*(unsigned int *)(param_2 + 0x10);
  uVar1 = *puVar11;
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0x3f0000;
  *puVar11 = uVar1 & 0xffc0ffff | uVar2;
  *puVar11 = uVar1 & 0xff40ffff | uVar2 | *(unsigned int *)(param_2 + 0x10) & 0x800000 | 0x400000;
  puVar12 = puVar11 + 1;
  uVar1 = *puVar12;
  uVar2 = *(unsigned int *)(param_2 + 0x1c) & 7;
  *puVar12 = uVar2 | uVar1 & 0xfffffff8;
  uVar4 = (*(unsigned int *)(param_2 + 0x1c) & 7) << 4;
  *puVar12 = uVar4 | uVar2 | uVar1 & 0xffffff88;
  uVar5 = (*(unsigned int *)(param_2 + 0x1c) & 7) << 8;
  *puVar12 = uVar5 | uVar4 | uVar2 | uVar1 & 0xfffff888;
  uVar6 = (*(unsigned int *)(param_2 + 0x1c) & 7) << 0xc;
  *puVar12 = uVar6 | uVar5 | uVar4 | uVar2 | uVar1 & 0xffff8888;
  uVar3 = *(unsigned int *)(param_2 + 0x1c) & 8;
  *puVar12 = uVar3 | uVar6 | uVar5 | uVar4 | uVar2 | uVar1 & 0xffff8880;
  uVar7 = (*(unsigned int *)(param_2 + 0x1c) & 8) << 4;
  *puVar12 = uVar7 | uVar3 | uVar6 | uVar5 | uVar4 | uVar2 | uVar1 & 0xffff8800;
  uVar8 = (*(unsigned int *)(param_2 + 0x1c) & 8) << 8;
  *puVar12 = uVar8 | uVar7 | uVar3 | uVar6 | uVar5 | uVar4 | uVar2 | uVar1 & 0xffff8000;
  uVar9 = (*(unsigned int *)(param_2 + 0x1c) & 8) << 0xc;
  *puVar12 = uVar9 | uVar8 | uVar7 | uVar3 | uVar6 | uVar5 | uVar4 | uVar2 | uVar1 & 0xffff0000;
  *puVar12 = *(unsigned int *)(param_2 + 0x1c) & 0x100000 |
             uVar9 | uVar8 | uVar7 | uVar3 | uVar6 | uVar5 | uVar4 | uVar2 | uVar1 & 0xffef0000;
  puVar12 = puVar11 + 2;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar12 = *(unsigned int *)(param_2 + 0x28);
    puVar12 = puVar11 + 3;
  }
  *(unsigned short *)((int)puVar12 + 2) = uVar10;
  *puVar12 = *puVar12 & 0xff00ffff | 0x440000;
  puVar12[1] = puVar12[1] & 0xffffbbbb | 0x3333;
  puVar11 = puVar12 + 2;
  *(unsigned short *)((int)puVar12 + 10) = 0;
  *puVar11 = *puVar11 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar11 = 1;
  puVar12[3] = puVar12[3] & 0xffff8888;
  return puVar12 + 4;
}

