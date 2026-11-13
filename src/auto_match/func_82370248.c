extern unsigned int ltcg_pool_0_0f;


void fn_82370248(int param_1)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar4 = ltcg_pool_0_0f;
  iVar2 = *(int *)(param_1 + 0x600);
  fVar1 = *(float *)(*(int *)((*(int **)**(unsigned int **)(param_1 + 8))[4] * 4 +
                             **(int **)**(unsigned int **)(param_1 + 8)) + 0x20);
  *(unsigned int *)((*(int *)(iVar2 + 0xc) + 8) * 4 + iVar2) = *(unsigned int *)(param_1 + 0x5e8);
  *(float *)((*(int *)(iVar2 + 0xc) + 4) * 4 + iVar2) = (float)(__int64)(int)fVar1;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  *(unsigned int *)(param_1 + 0x5e8) = uVar4;
  *(unsigned int *)(param_1 + 0x5c4) = uVar4;
  *(unsigned int *)(param_1 + 0x5e4) = 0;
  *(unsigned int *)(param_1 + 0x5ec) = 0;
  puVar3 = (unsigned int *)(param_1 + 0x580U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  *(unsigned int *)(param_1 + 0x5f0) = 0;
  puVar3 = (unsigned int *)(param_1 + 0x590U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  *(unsigned int *)(param_1 + 0x570) = 0x18;
  puVar3 = (unsigned int *)(param_1 + 0x5a0U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  puVar3 = (unsigned int *)(param_1 + 0x5b0U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  *(unsigned int *)(param_1 + 0x5c0) = 0;
  *(unsigned int *)(param_1 + 0x5c8) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x5cc) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x5d0) = 0;
  return;
}

