unsigned int * fn_82B75BC0(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned short param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  *(unsigned short *)((int)param_5 + 2) = 0x49;
  *param_5 = *param_5 & 0xe000ffff;
  *(unsigned short *)((int)param_5 + 6) = param_4;
  param_5[1] = param_5[1] & 0xff00ffff | 0x40000;
  puVar5 = param_5 + 2;
  *(short *)((int)param_5 + 10) = (short)*param_1;
  uVar4 = *puVar5;
  uVar1 = *param_1;
  *puVar5 = uVar4 & 0xffc0ffff | uVar1 & 0x3f0000;
  *puVar5 = uVar4 & 0xff40ffff | uVar1 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  puVar5 = param_5 + 3;
  uVar1 = *puVar5;
  uVar2 = *param_2 & 7;
  *puVar5 = uVar1 & 0xfffffff8 | uVar2;
  uVar3 = *param_2 & 0x70;
  *puVar5 = uVar1 & 0xffffff88 | uVar2 | uVar3;
  uVar4 = *param_2;
  *puVar5 = uVar1 & 0xfffff888 | uVar2 | uVar3 | uVar4 & 0x700;
  *puVar5 = uVar1 & 0xffff8888 | uVar2 | uVar3 | uVar4 & 0x700 | *param_2 & 0x7000;
  puVar5 = param_5 + 4;
  if ((*param_1 & 0x800000) != 0) {
    *puVar5 = *param_3;
    puVar5 = param_5 + 5;
  }
  *(unsigned short *)((int)puVar5 + 2) = 0;
  *puVar5 = *puVar5 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar5 = 1;
  puVar6 = puVar5 + 1;
  if ((*param_2 & 8) == 0) {
    uVar4 = *puVar6 & 0xfffffff8 | 1;
  }
  else {
    uVar4 = *puVar6 & 0xfffffff8 | 3;
  }
  *puVar6 = uVar4;
  if ((*param_2 & 0x80) == 0) {
    uVar4 = *puVar6 & 0xffffff8f | 0x10;
  }
  else {
    uVar4 = *puVar6 & 0xffffff8f | 0x30;
  }
  *puVar6 = uVar4;
  if ((*param_2 & 0x800) == 0) {
    uVar4 = *puVar6 & 0xfffff8ff | 0x100;
  }
  else {
    uVar4 = *puVar6 & 0xfffff8ff | 0x300;
  }
  *puVar6 = uVar4;
  if ((*param_2 & 0x8000) == 0) {
    *puVar6 = *puVar6 & 0xffff8fff | 0x1000;
  }
  else {
    *puVar6 = *puVar6 & 0xffff8fff | 0x3000;
  }
  return puVar5 + 2;
}

