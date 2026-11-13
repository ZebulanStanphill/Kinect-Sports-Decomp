unsigned int * fn_82B75468(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned short param_4,unsigned int *param_5)

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
  
  *(unsigned short *)((int)param_5 + 2) = 3;
  *param_5 = *param_5 & 0xe000ffff;
  *(unsigned short *)((int)param_5 + 6) = param_4;
  puVar9 = param_5 + 2;
  param_5[1] = param_5[1] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)param_5 + 10) = 0;
  *puVar9 = *puVar9 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar9 = 1;
  param_5[3] = param_5[3] & 0xffff9999 | 0x1111;
  puVar9 = param_5 + 4;
  *(short *)((int)param_5 + 0x12) = (short)*param_1;
  uVar1 = *puVar9;
  uVar2 = *param_1;
  *puVar9 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar9 = uVar1 & 0xff40ffff | uVar2 & 0x3f0000 | *param_1 & 0x800000 | 0x400000;
  puVar9 = param_5 + 5;
  uVar2 = *puVar9;
  uVar3 = *param_2 & 7;
  *puVar9 = uVar2 & 0xfffffff8 | uVar3;
  uVar4 = *param_2 & 0x70;
  *puVar9 = uVar2 & 0xffffff88 | uVar3 | uVar4;
  uVar5 = *param_2 & 0x700;
  *puVar9 = uVar2 & 0xfffff888 | uVar3 | uVar4 | uVar5;
  uVar6 = *param_2 & 0x7000;
  *puVar9 = uVar2 & 0xffff8888 | uVar3 | uVar4 | uVar5 | uVar6;
  uVar7 = ~*param_2 & 8;
  *puVar9 = uVar2 & 0xffff8880 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar8 = ~*param_2 & 0x80;
  *puVar9 = uVar2 & 0xffff8800 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
  uVar1 = *param_2;
  *puVar9 = uVar2 & 0xffff8000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | ~uVar1 & 0x800;
  *puVar9 = uVar2 & 0xffff0000 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | ~uVar1 & 0x800 |
            ~*param_2 & 0x8000;
  if ((*param_1 & 0x800000) == 0) {
    return param_5 + 6;
  }
  param_5[6] = *param_3;
  return param_5 + 7;
}

