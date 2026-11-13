extern int fn_82310D68();
extern unsigned int ltcg_pool_0_0f;


void fn_82310C68(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar2 = ltcg_pool_0_0f;
  puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(unsigned int *)(param_2 + 0x14) = uVar2;
  *(unsigned int *)(param_2 + 0x3c) = uVar2;
  *(unsigned int *)(param_2 + 0x34) = uVar2;
  *(unsigned int *)(param_2 + 0x40) = uVar2;
  *(unsigned int *)(param_2 + 0x38) = uVar2;
  *(unsigned int *)(param_2 + 0x44) = uVar2;
  *(unsigned int *)(param_2 + 0x48) = uVar2;
  *(unsigned int *)(param_2 + 0x10) = uVar2;
  *(unsigned int *)(param_2 + 0x4c) = uVar2;
  *(unsigned int *)(param_2 + 0x18) = uVar2;
  *(unsigned int *)(param_2 + 0x50) = uVar2;
  *(unsigned int *)(param_2 + 0x30) = uVar2;
  *(unsigned int *)(param_2 + 0x54) = uVar2;
  *(unsigned int *)(param_2 + 0x58) = uVar2;
  puVar1 = (unsigned int *)(param_1 + 0x3e0U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(unsigned int *)(param_2 + 0x290) = uVar2;
  *(unsigned int *)(param_2 + 0x294) = uVar2;
  *(unsigned int *)(param_2 + 0x298) = uVar2;
  *(unsigned int *)(param_2 + 0x29c) = uVar2;
  puVar1 = (unsigned int *)(param_2 + 0x270U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_82310D68(param_1,param_2 + 0x60,0,*(int *)(param_1 + 0x48c) == 0);
  fn_82310D68(param_1,param_2 + 0x110,1,*(int *)(param_1 + 0x48c) == 0);
  fn_82310D68(param_1,param_2 + 0x1c0,2,*(unsigned int *)(param_1 + 0x48c));
  return;
}

