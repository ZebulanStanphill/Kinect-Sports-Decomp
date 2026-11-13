extern int fn_82AB71F0();
extern int fn_82B6EA60();


unsigned int * fn_82B77F18(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned int uVar1;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  
  uVar2 = fn_82B6EA60();
  uVar3 = fn_82B6EA60(param_1);
  uVar1 = fn_82AB71F0(*(unsigned int *)(param_1 + 0x14),0x25,param_4);
  *(unsigned short *)((int)param_3 + 2) = 3;
  *param_3 = *param_3 & 0xe000ffff;
  *(unsigned short *)((int)param_3 + 6) = uVar2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  param_3[2] = *(unsigned int *)(param_2 + 0x10);
  puVar8 = param_3 + 3;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x400000) != 0) {
    *puVar8 = *(unsigned int *)(param_2 + 0x1c);
    puVar8 = param_3 + 4;
  }
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar8 = *(unsigned int *)(param_2 + 0x28);
    puVar8 = puVar8 + 1;
  }
  if (uVar1 == 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = (unsigned int)(uVar1 == 2);
  }
  *(unsigned short *)((int)puVar8 + 2) = 0;
  *puVar8 = *puVar8 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar8 = 1;
  uVar6 = uVar7 << 4;
  uVar4 = uVar7 << 8;
  puVar8[1] = puVar8[1] & 0xffff8888 | uVar7 | uVar6 | uVar4 | uVar7 << 0xc;
  *(unsigned short *)((int)puVar8 + 10) = 0xd;
  puVar8[2] = puVar8[2] & 0xe000ffff | 0x20000;
  *(unsigned short *)((int)puVar8 + 0xe) = uVar3;
  puVar8[3] = puVar8[3] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar8 + 0x12) = uVar2;
  puVar8[4] = puVar8[4] & 0xff00ffff | 0x40000;
  puVar8[5] = *(unsigned int *)(param_2 + 0x10);
  puVar9 = puVar8 + 6;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x400000) != 0) {
    *puVar9 = *(unsigned int *)(param_2 + 0x1c);
    puVar9 = puVar8 + 7;
  }
  if ((*(unsigned int *)(param_2 + 0x10) & 0x800000) != 0) {
    *puVar9 = *(unsigned int *)(param_2 + 0x28);
    puVar9 = puVar9 + 1;
  }
  *(unsigned short *)((int)puVar9 + 2) = 0;
  *puVar9 = *puVar9 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar9 = 1;
  puVar8 = puVar9 + 1;
  uVar5 = *puVar8;
  *puVar8 = uVar5 & 0xfffff888 | uVar7 | uVar6 | uVar4;
  uVar7 = uVar5 & 0xffff8888 | uVar7 | uVar6 | uVar4 | uVar7 << 0xc;
  *puVar8 = uVar7;
  if (uVar1 == 2) {
    *puVar8 = uVar7 | 0x8888;
  }
  *(unsigned short *)((int)puVar9 + 10) = 3;
  puVar9[2] = puVar9[2] & 0xe000ffff;
  *(unsigned short *)((int)puVar9 + 0xe) = uVar2;
  puVar9[3] = puVar9[3] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar9 + 0x12) = uVar3;
  puVar9[4] = puVar9[4] & 0xff00ffff | 0x40000;
  puVar8 = puVar9 + 5;
  if ((uVar1 == 0) || (uVar7 = 1, 2 < uVar1)) {
    uVar7 = 0;
  }
  *(unsigned short *)((int)puVar9 + 0x16) = 0;
  *puVar8 = *puVar8 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar8 = 1;
  uVar5 = uVar7 << 4;
  uVar6 = uVar7 << 8;
  puVar8 = puVar9 + 6;
  uVar4 = *puVar8;
  *puVar8 = uVar4 & 0xfffff888 | uVar7 | uVar5 | uVar6;
  uVar4 = uVar4 & 0xffff8888 | uVar7 | uVar5 | uVar6 | uVar7 << 0xc;
  *puVar8 = uVar4;
  if (uVar1 != 0) {
    *puVar8 = uVar4 | 0x8888;
  }
  *(unsigned short *)((int)puVar9 + 0x1e) = 0xd;
  puVar9[7] = puVar9[7] & 0xe000ffff | 0x30000;
  *(unsigned short *)((int)puVar9 + 0x22) = uVar3;
  puVar9[8] = puVar9[8] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar9 + 0x26) = uVar2;
  puVar9[9] = puVar9[9] & 0xff00ffff | 0x40000;
  puVar8 = puVar9 + 10;
  *(unsigned short *)((int)puVar9 + 0x2a) = 0;
  *puVar8 = *puVar8 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar8 = 1;
  puVar9[0xb] = puVar9[0xb] & 0xffff8888 | uVar7 | uVar5 | uVar6 | uVar7 << 0xc;
  *(unsigned short *)((int)puVar9 + 0x32) = uVar3;
  puVar9[0xc] = puVar9[0xc] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar9 + 0x36) = 0x41;
  puVar9[0xd] = puVar9[0xd] & 0xe000ffff;
  puVar8 = puVar9 + 0xe;
  *(short *)((int)puVar9 + 0x3a) = (short)*(unsigned int *)(param_2 + 4);
  uVar1 = *puVar8;
  uVar7 = *(unsigned int *)(param_2 + 4) & 0x3f0000;
  *puVar8 = uVar7 | uVar1 & 0xffc0ffff;
  uVar4 = *(unsigned int *)(param_2 + 4) & 0x800000;
  *puVar8 = uVar4 | uVar7 | uVar1 & 0xff40ffff;
  *puVar8 = *(unsigned int *)(param_2 + 4) & 0x400000 | uVar4 | uVar7 | uVar1 & 0xff00ffff;
  puVar8 = puVar9 + 0xf;
  if ((*(unsigned int *)(param_2 + 4) & 0x400000) != 0) {
    *puVar8 = *(unsigned int *)(param_2 + 8);
    puVar8 = puVar9 + 0x10;
  }
  if ((*(unsigned int *)(param_2 + 4) & 0x800000) != 0) {
    *puVar8 = *(unsigned int *)(param_2 + 0xc);
    puVar8 = puVar8 + 1;
  }
  *(unsigned short *)((int)puVar8 + 2) = uVar3;
  *puVar8 = *puVar8 & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)puVar8 + 6) = uVar3;
  puVar8[1] = puVar8[1] & 0xff00ffff | 0x40000;
  return puVar8 + 2;
}

