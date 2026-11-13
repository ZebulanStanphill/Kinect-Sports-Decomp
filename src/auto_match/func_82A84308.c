void fn_82A84308(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  __int64 lVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  iVar2 = param_1 + 0x470;
  lVar3 = 0x48;
  altv207_13(in_vs32,in_vs41);
  do {
    puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    iVar2 = iVar2 + -0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs42);
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  puVar1 = (unsigned int *)(param_1 + 0x130U & 0xfffffff0);
  *puVar1 = in_register_000103e0;
  puVar1[1] = in_register_000103e4;
  puVar1[2] = in_register_000103e8;
  puVar1[3] = in_vr62;
  return;
}

