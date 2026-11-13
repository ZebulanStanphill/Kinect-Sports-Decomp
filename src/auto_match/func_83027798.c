void fn_83027798(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs42 [16];
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  uVar3 = (*(unsigned short *)(param_1 + 0x2e) >> 0xb & 3) * (unsigned int)(*(unsigned short *)(param_1 + 0x2e) >> 0xd);
  if (uVar3 == 0) {
    return;
  }
  uVar4 = 0;
  do {
    iVar2 = uVar4 * 0x40 + param_1;
    uVar4 = uVar4 + 1 & 0xffff;
    altv207_13(in_vs32,in_vs42);
    puVar1 = (unsigned int *)(in_r0 + iVar2 + 0x50 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs42,in_vs40);
    puVar1 = (unsigned int *)(iVar2 + 0x60U & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
  } while (uVar4 < uVar3);
  return;
}

