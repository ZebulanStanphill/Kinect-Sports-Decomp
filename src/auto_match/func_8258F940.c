#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


void fn_8258F940(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  puVar2 = (unsigned int *)(param_1 + 0x34);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((uVar1 & 0xfffffffe) != 0) {
      *puVar3 = *puVar3 & 1;
    }
    if ((uVar1 & 0xfffffffe) != 0) {
      *puVar3 = *puVar3 & 1;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((uVar1 & 1) != 0) {
      *puVar3 = *puVar3 | 0xffefffff;
    }
    if ((CONCAT44(uVar1,uVar1) & 0xffffffffffefffff) != 0) {
      *puVar3 = *puVar3 | 1;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((CONCAT44(uVar1,uVar1) & 0xffffffffffefffff) != 0) {
      *puVar3 = *puVar3 | 1;
    }
    if ((uVar1 & 1) != 0) {
      *puVar3 = *puVar3 | 0xffefffff;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0;
  lVar5 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = 1 << (uVar4 & 0x3f);
    if ((uVar1 & 0x100000) != 0) {
      *puVar3 = *puVar3 & 1;
    }
    if ((uVar1 & 0xfffffffe) != 0) {
      *puVar3 = *puVar3 & 0xffefffff;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x50) | 2;
  *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x54) & 0xffffcfff | 0x8c32;
  *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(param_1 + 0x4c) | 0x400;
  *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(param_1 + 0x88) | 0x182e;
  *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x74) | 0x101e;
  *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_1 + 0x58) & 0xffffdfff | 0x102e;
  *puVar2 = *puVar2 & 0xfffbffff;
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_1 + 100) & 0xfff9ceff | 0x210e3e;
  *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 0x68) & 0xfff9cceb | 0x2a;
  *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 0x40d34;
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x7c) & 0xfff9cbe8 | 0x88828;
  *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(param_1 + 0x3c) & 0xfffbdfff | 0x2b9e3e;
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_1 + 0x38) & 0xfffbffff | 0x2b3b8c;
  *(unsigned int *)(param_1 + 0x48) = *(unsigned int *)(param_1 + 0x48) & 0xffffffdf | 0x2ebf0c;
  *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_1 + 0x44) & 0xfffbdfff | 0xb9d1c;
  *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_1 + 0x40) | 0x2d3e3e;
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x60) | 0x2c9d3e;
  *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(param_1 + 0x5c) & 0xfffbffff | 0xa997c;
  *(unsigned int *)(param_1 + 0x80) = *(unsigned int *)(param_1 + 0x80) | 0x60c3e;
  *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x78) & 0xfffbcfff | 0x80436;
  return;
}

