unsigned int * fn_82B731F8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  uVar4 = *param_1 >> 0x10 & 7;
  if (uVar4 < 4) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    puVar3 = param_2 + 2;
    if ((param_1[1] & 0x400000) != 0) {
      *puVar3 = param_1[2];
      puVar3 = param_2 + 3;
    }
    if ((param_1[1] & 0x800000) != 0) {
      *puVar3 = param_1[3];
      puVar3 = puVar3 + 1;
    }
    *puVar3 = param_1[4];
    puVar5 = puVar3 + 1;
    if ((param_1[4] & 0x400000) != 0) {
      *puVar5 = param_1[7];
      puVar5 = puVar3 + 2;
    }
    if ((param_1[4] & 0x800000) != 0) {
      *puVar5 = param_1[10];
      puVar5 = puVar5 + 1;
    }
    puVar3 = puVar5 + 1;
    *puVar5 = param_1[5];
    if ((param_1[5] & 0x400000) != 0) {
      *puVar3 = param_1[8];
      puVar3 = puVar5 + 2;
    }
    if ((param_1[5] & 0x800000) == 0) {
      return puVar3;
    }
    uVar4 = param_1[0xb];
  }
  else {
    if (5 < uVar4) {
      return param_2;
    }
    *(unsigned short *)((int)param_2 + 2) = 0x56;
    puVar3 = param_2 + 1;
    if (uVar4 == 4) {
      uVar4 = *param_2 & 0xe000ffff | 0x20000;
    }
    else {
      uVar4 = *param_2 & 0xe000ffff | 0x30000;
    }
    *param_2 = uVar4;
    *(short *)((int)param_2 + 6) = (short)param_1[1];
    uVar4 = *puVar3;
    uVar2 = param_1[1] & 0x3f0000;
    *puVar3 = uVar4 & 0xffc0ffff | uVar2;
    uVar1 = param_1[1];
    *puVar3 = uVar4 & 0xff40ffff | uVar2 | uVar1 & 0x800000;
    *puVar3 = uVar4 & 0xff00ffff | uVar2 | uVar1 & 0x800000 | param_1[1] & 0x400000;
    puVar3 = param_2 + 2;
    if ((param_1[1] & 0x400000) != 0) {
      *puVar3 = param_1[2];
      puVar3 = param_2 + 3;
    }
    if ((param_1[1] & 0x800000) != 0) {
      *puVar3 = param_1[3];
      puVar3 = puVar3 + 1;
    }
    *(short *)((int)puVar3 + 2) = (short)param_1[5];
    uVar4 = *puVar3;
    uVar2 = param_1[5] & 0x3f0000;
    *puVar3 = uVar4 & 0xffc0ffff | uVar2;
    uVar1 = param_1[5];
    *puVar3 = uVar4 & 0xff40ffff | uVar2 | uVar1 & 0x800000;
    *puVar3 = uVar4 & 0xff00ffff | uVar2 | uVar1 & 0x800000 | param_1[5] & 0x400000;
    puVar5 = puVar3 + 1;
    if ((param_1[5] & 0x400000) != 0) {
      *puVar5 = param_1[8];
      puVar5 = puVar3 + 2;
    }
    if ((param_1[5] & 0x800000) != 0) {
      *puVar5 = param_1[0xb];
      puVar5 = puVar5 + 1;
    }
    puVar3 = puVar5 + 1;
    *(short *)((int)puVar5 + 2) = (short)param_1[4];
    uVar4 = *puVar5;
    uVar2 = param_1[4] & 0x3f0000;
    *puVar5 = uVar4 & 0xffc0ffff | uVar2;
    uVar1 = param_1[4];
    *puVar5 = uVar4 & 0xff40ffff | uVar2 | uVar1 & 0x800000;
    *puVar5 = uVar4 & 0xff00ffff | uVar2 | uVar1 & 0x800000 | param_1[4] & 0x400000;
    if ((param_1[4] & 0x400000) != 0) {
      *puVar3 = param_1[7];
      puVar3 = puVar5 + 2;
    }
    if ((param_1[4] & 0x800000) == 0) {
      return puVar3;
    }
    uVar4 = param_1[10];
  }
  *puVar3 = uVar4;
  return puVar3 + 1;
}

