void fn_825AC0D8(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  if (*(int *)(param_1 + 0x80) == 0) {
    return;
  }
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x80) + 0x50U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

