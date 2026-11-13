extern unsigned int lbl_821AAD20;


void fn_82A023A8(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  iVar2 = param_3 * 0x1f0 + param_1;
  altv207_13(in_vs43,in_vs42);
  puVar1 = (unsigned int *)(param_2 * 0x10 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  if (*(float *)(iVar2 + 0x49c) == lbl_821AAD20) {
    *(unsigned int *)((param_2 + 0x103c) * 4 + param_1) = 0;
    return;
  }
  *(unsigned int *)((param_2 + 0x103c) * 4 + param_1) =
       ((unsigned int)LZCOUNT(*(unsigned int *)(iVar2 + 0x4f0) & 3) >> 5) + 1;
  return;
}

