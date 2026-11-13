extern int fn_82383F20();
extern unsigned int ltcg_pool_0_0f;


void fn_823845A0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  if (*(int *)(param_1 + 0x280) != 0) {
    fn_82383F20(param_1 + 0x10);
    fn_82383F20(param_1 + 0x100);
    uVar2 = ltcg_pool_0_0f;
    *(unsigned int *)(param_1 + 0x250) = ltcg_pool_0_0f;
    *(unsigned int *)(param_1 + 0x254) = uVar2;
    *(unsigned int *)(param_1 + 600) = uVar2;
    *(unsigned int *)(param_1 + 0x270) = 1;
    *(unsigned int *)(param_1 + 0x25c) = uVar2;
    *(unsigned int *)(param_1 + 0x1f0) = 0;
    *(unsigned int *)(param_1 + 0x260) = uVar2;
    *(unsigned int *)(param_1 + 0x274) = 1;
    *(unsigned int *)(param_1 + 0x264) = uVar2;
    *(unsigned int *)(param_1 + 0x278) = 1;
    puVar1 = (unsigned int *)(param_1 + 0x200U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(unsigned int *)(param_1 + 0x27c) = 1;
    puVar1 = (unsigned int *)(param_1 + 0x210U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(unsigned int *)(param_1 + 0x280) = 0;
    puVar1 = (unsigned int *)(param_1 + 0x220U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar1 = (unsigned int *)(param_1 + 0x230U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar1 = (unsigned int *)(param_1 + 0x240U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  return;
}

