extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824B2EF8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    do {
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar1 + 0xc) + 400;
      *(int *)(iVar1 + 0xc) = iVar3;
      if (iVar3 == *(int *)(iVar1 + 8)) {
        *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar1 + 4);
      }
    } while (uVar4 < *(unsigned int *)(iVar1 + 0x14));
  }
  *(unsigned int *)(iVar1 + 0x14) = 0;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x1c) = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x24) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x28) = 1;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x68) = uVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x6c) = uVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x70) = uVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x74) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x78) = 0;
  return 0;
}

