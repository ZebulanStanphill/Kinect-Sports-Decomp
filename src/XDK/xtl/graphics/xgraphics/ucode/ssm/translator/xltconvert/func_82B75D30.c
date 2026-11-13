extern int fn_82AB15D0();


unsigned int * fn_82B75D30(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned short uVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  
  *(unsigned short *)((int)param_4 + 2) = 0x49;
  *param_4 = *param_4 & 0xe000ffff;
  puVar6 = param_4 + 2;
  *(short *)((int)param_4 + 6) = (short)*param_1;
  uVar1 = param_4[1];
  uVar3 = *param_1 & 0x3f0000;
  param_4[1] = uVar1 & 0xffc0ffff | uVar3;
  uVar2 = *param_1;
  param_4[1] = uVar1 & 0xff40ffff | uVar3 | uVar2 & 0x800000;
  param_4[1] = uVar1 & 0xff00ffff | uVar3 | uVar2 & 0x800000 | *param_1 & 0x400000;
  if ((*param_1 & 0x400000) != 0) {
    *puVar6 = *param_2;
    puVar6 = param_4 + 3;
  }
  if ((*param_1 & 0x800000) != 0) {
    *puVar6 = *param_3;
    puVar6 = puVar6 + 1;
  }
  puVar7 = puVar6 + 1;
  *(short *)((int)puVar6 + 2) = (short)*param_1;
  uVar1 = *puVar6;
  uVar2 = *param_1;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2 & 0x3f0000;
  *puVar6 = uVar1 & 0xff00ffff | uVar2 & 0x3f0000 | *param_1 & 0x800000;
  uVar1 = *param_2 >> 9 & 0xf;
  if (uVar1 == 1) {
code_r0x82b75e50:
    uVar4 = 2;
code_r0x82b75e54:
    uVar5 = 0;
  }
  else {
    if (uVar1 == 2) {
      uVar4 = 2;
code_r0x82b75ee4:
      uVar5 = 1;
      goto code_r0x82b75e58;
    }
    if (uVar1 == 3) {
      uVar4 = 2;
    }
    else {
      if (uVar1 == 4) {
        uVar4 = 3;
        goto code_r0x82b75e54;
      }
      if (uVar1 == 5) {
        uVar4 = 3;
        goto code_r0x82b75ee4;
      }
      if (uVar1 != 6) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x2b85);
        goto code_r0x82b75e50;
      }
      uVar4 = 3;
    }
    uVar5 = 2;
  }
code_r0x82b75e58:
  *(unsigned short *)((int)puVar6 + 6) = uVar4;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(unsigned char *)puVar7 = 1;
  puVar6[2] = (unsigned int)(uVar5 << 0xc) |
              (unsigned int)((uVar5 << 4 | uVar5) << 4) | puVar6[2] & 0xffff8888 | (unsigned int)uVar5;
  return puVar6 + 3;
}

