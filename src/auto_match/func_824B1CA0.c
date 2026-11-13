extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824B1CA0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    do {
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(iVar1 + 0xc) + 0x30;
      *(int *)(iVar1 + 0xc) = iVar2;
      if (iVar2 == *(int *)(iVar1 + 8)) {
        *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar1 + 4);
      }
    } while (uVar3 < *(unsigned int *)(iVar1 + 0x14));
  }
  *(unsigned int *)(iVar1 + 0x14) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x3c) + 0x20) = ltcg_pool_0_0f;
  return 0;
}

