void fn_83037250(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int uVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103c0;
  unsigned int in_register_000103c4;
  unsigned int in_register_000103c8;
  unsigned int in_vr60;
  unsigned int in_register_000103d0;
  unsigned int in_register_000103d4;
  unsigned int in_register_000103d8;
  unsigned int in_vr61;
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  uVar2 = 0;
  if (*(unsigned short *)(param_1 + 0x2e) >> 0xd == 0) {
    return;
  }
  param_3 = param_3 + 0x10;
  do {
    altv207_13(in_vs43,in_vs39);
    uVar2 = uVar2 + 1;
    puVar1 = (unsigned int *)(param_3 - 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs32,in_vs43);
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
    altv207_13(in_vs43,in_vs37);
    puVar1 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103d0;
    puVar1[1] = in_register_000103d4;
    puVar1[2] = in_register_000103d8;
    puVar1[3] = in_vr61;
    altv207_13(in_vs43,in_vs40);
    puVar1 = (unsigned int *)(param_3 + 0x20U & 0xfffffff0);
    *puVar1 = in_register_000103c0;
    puVar1[1] = in_register_000103c4;
    puVar1[2] = in_register_000103c8;
    puVar1[3] = in_vr60;
    param_3 = param_3 + 0x40;
  } while (uVar2 < *(unsigned short *)(param_1 + 0x2e) >> 0xd);
  return;
}

