extern unsigned int lbl_8200133C;


void fn_82D74A38(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  uVar2 = lbl_8200133C;
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  *(unsigned int *)(param_1 + 0x18) = uVar2;
  return;
}

