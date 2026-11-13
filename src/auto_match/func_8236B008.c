extern unsigned int ltcg_pool_0_0f;


void fn_8236B008(int param_1,unsigned int param_2)

{
  int in_r0;
  unsigned int *puVar1;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *(unsigned int *)(param_1 + 0xed0) = ltcg_pool_0_0f;
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0xe90 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(unsigned int *)(param_1 + 0xea0) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xea8) = 0;
  puVar1 = (unsigned int *)(param_1 + 0xeb0U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(unsigned int *)(param_1 + 0xea4) = 3;
  puVar1 = (unsigned int *)(param_1 + 0xec0U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  for (puVar1 = (unsigned int *)(param_1 + 0xed4); puVar1 != (unsigned int *)(param_1 + 0xee0);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0xe90 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(unsigned int *)(param_1 + 0xea0) = param_2;
  return;
}

