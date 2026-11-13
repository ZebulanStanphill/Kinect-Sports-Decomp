void fn_82D550D0(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  int iVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  puVar5 = (unsigned int *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar5 = in_register_000100c0;
  puVar5[1] = in_register_000100c4;
  puVar5[2] = in_register_000100c8;
  puVar5[3] = in_vr12;
  bVar1 = *(unsigned char *)(param_1 + 0x38);
  uVar3 = *(unsigned short *)(param_1 + 0x30);
  bVar2 = *(unsigned char *)(param_1 + 0x39);
  *(unsigned char *)(param_1 + 0x38) = bVar2;
  *(unsigned char *)(param_1 + 0x39) = bVar1;
  iVar4 = ((unsigned int)bVar2 + (unsigned int)bVar1 + -1) * 2;
  *(unsigned char *)(param_1 + 0x3a) = *(unsigned char *)(param_1 + 0x3a) << 4 | *(unsigned char *)(param_1 + 0x3a) >> 4;
  *(unsigned short *)(param_1 + 0x30) = *(unsigned short *)(iVar4 + param_1 + 0x30);
  *(unsigned short *)(iVar4 + param_1 + 0x30) = uVar3;
  if ((*(unsigned char *)(param_1 + 0x38) & *(unsigned char *)(param_1 + 0x39)) != 2) {
    return;
  }
  uVar3 = *(unsigned short *)(param_1 + 0x34);
  *(unsigned short *)(param_1 + 0x34) = *(unsigned short *)(param_1 + 0x32);
  *(unsigned short *)(param_1 + 0x32) = uVar3;
  return;
}

